#include <string>
#include "ifElse.h"
using namespace.std;


//default constructor
IfElse::IfElse()
{
    variable = "";
    value = false;
}

IfElse::IfElse(string var)
{
    variable = var;
}

void IfElse::setVar(string var)
{
    variable = var;
}

void IfElse::setVal(string val)
{
    if(val == "true")
    {
        value = true;
    }
    else
    {
        value = false;
    }
    
}