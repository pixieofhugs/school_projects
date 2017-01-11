//name
//date
//class

#include "list.h"
using namespace std;



class lll : public list
{
    public:

        lll();
        ~lll();
        int add();
        int remove();
        int copy();
        data retreve();
        int search();

    private: 
        //data members
        //head - we will figure out how this works excatily sintaticly
        //private functions
        int  remove();
        int  search(data to_find);
        int  remove_all();

};
//I still have no idea what I'm doing
class head : private lll
{
    public:
        lll *head
}
