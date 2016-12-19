//name
//date
//class

#include "lll.h"
#include "data.h"

//**********************
/*
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

*/

list::list()
{

}

int list::add_node_sorted()//recursive
{
    if(!data && !next)
    {
        data.copy(to_copy);
        head-> next = NULL;
        return 1;
    }
    if(compare(/*data.aspect, data.aspect*/)<= 0)
    {
        node * temp = new node;
        temp -> next = head;
        head = temp;
        temp -> data.copy;
        return 1;
    }
}

//************************
int  remove_node()//wrapper
{
    return remove_node(head);
}


int  remove_node(node *& head)//recusrive
{
    int counter = 0;
    if(!head)
    {
        return counter;
    }
    if(compare(head -> data.aspect, data.aspect)== 0)
    {
        node * temp = head;
        head = head-> next;
        delete temp;
        ++ counter;
    }
    counter += remove_node(head -> next);
    return counter;
}


//***********************
int  search_list(/*data.aspect*/)//wrapper
{
    int counter = search_list(node* head, /*data.aspect*/)
        return counter;
}

int  search_list(node *& head, /*data.aspect*/);
{
    int counter = 0;
    if(!head)
    {
        return counter;
    }

    if(compare(/*data.aspect, data.aspect*/)== 0)
    {
        ++counter;
    }
    counter = counter + search_list(head -> next /*data.aspect*/);
}


//************************
int  retrieve(/*&data, &data.aspect*/)
{
    return retrieve(head, /*data.aspect*/);
}


int  retrieve(node *& head, /*&data, &data.aspect*/)//recursive
{
    if (compare(/*data.aspect, data.aspect*/)==0;)
    {
        /*store the matching thing in an external value*/
        return 1;
    }
    else
    {
        retrieve(head -> next, &data, &data.aspect);
        return 0;
    }

}


//***********************
void display_all()//wrapper
{
    return display_all(head);
}

    i
void display_all(node * head)//recursive
{
    if(!head)
    {
        return;
    }
    head -> data.display();
    display_all(head -> next);
}


//***********************
int  delete_list()//wrapper
{
    return delete_list(head);
}


int  delete_list(node *& head)//recursive
{
    int counter = 0;
    if(!head)
    {
        return counter;
    }
    counter = delete_list(head -> next);
    head-> next = NULL;
    delete head;
    ++ counter;
}

