//Molly Shove
//CS202
//12/12/16
//This is my my_string class. It's boss

#include <cstring>
#include <iostream>
#include <sstream>
using namespace std;

#ifndef string_h
#define string_h

class my_string
{
    public:
        my_string();
        my_string(const my_string &);
        my_string(const char*);
        ~my_string();

        int  create(const char *to_create);
        int  create(const my_string & to_create);
        int  copy(char* to_copy);
        int  copy(my_string & to_copy);
        void display();
        int  compare(char* to_compare);
        int  compare(my_string & to_compare);
        my_string  put_together(char* to_add);
        my_string  put_together(my_string & to_add);
        my_string* explode(char delimiter);

    private:
        char* CUDDLES;

};



#endif
