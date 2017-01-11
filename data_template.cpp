#include "data_template.h"

data::data()
{
//inilalize your data members here
}

data::data(const data &)
{

}


data::~data()
{
/*
if(name)
    delete name;
name = NULL;
   */
}

void data::display(/*keyword*/)
{
//cout << name << endl;
}

//***************************************
int  data::create(/*aspects of whatever is getting created*/)
{
if(name)
    delete name;
name = /*whatever is getting passed in*/;

}

//***************************************

int  data::edit(/*keyword*/)
{

}
//***************************************

int  data::remove(/*keyword*/)
{

}
//***************************************

int  data::compare(const data &)
{
//return strcmp(this.aspect, data.aspect);
}
//***************************************

int  data::copy(const data &)
{
if(name)
    delete name;
this.name = data.name;
}
//***************************************

