//Molly shove
//CS202
//12/12/16

#include "string.h"

my_string::my_string()
{
    CUDDLES = NULL;   
}

my_string::my_string(const my_string & to_create)
{
    CUDDLES = NULL; 
    create(to_create.CUDDLES);
}

my_string::my_string(const char* to_create)
{
    CUDDLES = NULL;
    create(to_create);
}


my_string::~my_string()
{
    if(CUDDLES)
        delete[] CUDDLES;
    CUDDLES = NULL;
}

int  my_string::create(const char* to_create)
{
    if(CUDDLES)
        delete[] CUDDLES;
    CUDDLES = new char[strlen(to_create) + 1];
    strcpy(CUDDLES, to_create);
    return 1;
}

int  my_string::create(const my_string & to_create)
{
    create(to_create.CUDDLES);
    //calls create on the char* that is my my_string inside of the function string passed in by string to create.
}

int my_string::copy(char* to_copy)
{
    if(CUDDLES)
        delete[] CUDDLES;
    CUDDLES = new char[strlen(to_copy) + 1];
    strcpy(CUDDLES, to_copy);
    return 1;
}

int  my_string::copy(my_string & to_copy)
{
    copy(to_copy.CUDDLES);
}

void  my_string::display()
{
    cout << CUDDLES << " ";
}

int  my_string::compare(char* to_compare)
{
    return strcmp(to_compare, CUDDLES);//returns arg1 - arg2. Will be positive if to_compare is bigger and negitive if smaller
}

int  my_string::compare(my_string & to_compare)
{
    compare(to_compare.CUDDLES);
}

my_string my_string::put_together(char* to_add)
{
    char* temp = CUDDLES;
    int  stop1 = strlen(temp);
    int  stop2 = stop1 + strlen(to_add);
    CUDDLES  = new char[stop2 + 1];
    int i = 0;
    while(i < stop1)
    {
        CUDDLES[i] = temp[i];
        ++i;
    }//this copies in the first my_string
    while(i < stop2)
    {
        CUDDLES[i] = to_add[i-stop1];
        ++i;
    }//this coppies in the seccond my_string
    if(temp)
        delete[] temp;

    return *this;
}

my_string my_string::put_together(my_string & to_add)
{
    return put_together(to_add.CUDDLES);
}

my_string* my_string::explode(char delimiter)
{
    int total_charicters = strlen(CUDDLES);//the size of the array you are exploding
    int word_number = 0;//the number of words in the new array
        for(int i = 0; i < total_charicters; ++i)//finding how many times the delimiter appears
        {
            if(CUDDLES[i] == delimiter)
                ++word_number;//which will be the number of my_strings in the new array

        }
    my_string* return_value = new my_string[word_number + 1];//makes the string array which will be returned

    stringstream ss;//creates a local string buffer
    ss << CUDDLES;//reads in the string
    char temp[100];//temorary holder for each my_string

    for(int i = 0; i < word_number; ++i)//for each time the delimiter appears
    {
        ss.get(temp, 100, delimiter);//gets the string up until the delimiter
        return_value[i].create(temp);//tunrs in into a my_string and stores it
    }
    ss.get(temp, 100, '\0');//gets the last word(because the deliter is diffrent)
    return_value[word_number].create(temp);//stores it in the arraay
    return return_value;//returns array
}

