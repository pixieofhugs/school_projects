//name
//date
//class


#include "lll.h"


lll::lll()
{

}

lll::~lll()
{
delete_list(head)//recursive
}
/*
int lLL::add_node_sorted()//This function will probably not be used but it's good to have
{
    if(!data && !next)
    {
        data.copy(to_copy);
        head-> next = NULL;
        return 1;
    }
    if(compare(data.to_add)<= 0)
    {
        node * temp = new node;
        temp -> next = head;
        head = temp;
        temp -> data.copy;
        return 1;
    }
}
*/

int lll::add()//this is probably what you will use
{
   list * temp = new node;
   temp -> data.copy(data.to_add);

   if(head == NULL)
       head = temp;
   else
   {
       temp -> next = head;
       head = temp;
   }
   return 1;

}

//************************
int lll::remove_node()//wrapper
{
    return remove_node(head);
}


int lll::remove_node(node *& head)//recusrive
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
int lll::search(/*data.aspect*/)//wrapper
{
    int counter = search_list(node* head, /*data.aspect*/)
        return counter;
}

int lll:search(node *& head, /*data.aspect*/);
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
int lll::retrieve(/*&data, &data.aspect*/)
{
    return retrieve(head, /*data.aspect*/);
}


int lll::retrieve(node *& head, /*&data, &data.aspect*/)//recursive
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
void lll::display_all()//wrapper
{
    return display_all(head);
}

void lll::display_all(node * head)//recursive
{
    if(!head)
    {
        return;
    }
    head -> data.display();
    display_all(head -> next);
}


//***********************


int lll::delete_list(node *& head)//recursive
{
    if(head)
    {
        delete_all(head->next);
    }
    delete head;
}

