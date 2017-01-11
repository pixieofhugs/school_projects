//Molly Shove
//CS 202
//1/6/17


#include "data.h"

using namespace std;



class list
{
    public:
        list();
        ~list();
        virtual int add();
        virtual int remove();
        virtual int copy();
        virtual data retreve();
        int search();

    private:
        virtual void remove_all();
        data my_data;
        list *next;
};


