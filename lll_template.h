//name
//date
//class


#include <iostream>
#include <cctype>
#include <cstring>

using namespace std;

#ifndef LIST_H//include guard - first
#define LIST_H//include guard - seccond


class list
{
    public:
    int  virtual add_node_sorted(data* to_add);
    int  virtual add_at_head(data* to_add);
    int  virtual remove_node(char* to_remove); 
    int  virtual remove_node(int   to_remove);
    int  search_list(char* keyword);
    int  search_list(int   keyword);
    int  retrieve(char* keyword, data to_get); 
    int  retrieve(int   keyword, data to_get);
    void display();
    void display_all();
    int  delete_list();

    private:
    data my_data;
    list *next;
    int  add_node_sorted(data to_add);
    int  remove_node();
    int  search_list();
    int  retrieve(data to_get);
    void display();
    int  remove_all();
    
};








#endif // include gaurd - last
