//name
//date
//class


#include <iostream>
#include <cctype>
#include <cstring>

using namespace std;

#ifndef LIST_H//include guard - first
#define LIST_H//include guard - seccond


struct node
{
    //data goes here of whatever type of data
    node * next;
};
class list
{
    public:
    int  add_node_sorted(/* data */);
    int  remove_node();
    int  search_list(/*data.aspect*/);
    int  retrieve(/*&data, &data.aspect*/);
    void display();
    int  delete_list();

    private:
    node * head;
    int  add_node_sorted(node *& head, /*data */);
    int  remove_node(node *& head);
    int  search_list(node *& head, /*data.aspect*/);
    int  retrieve(node *& head, /*&data, &data.aspect*/);
    void display(node * head);
    int  delete_list(node *& head);
    
};








#endif // include gaurd - last
