
#include "Myclass.h"
#include <iostream>
using namespace std;


MyClass::MyClass(int a,int b):regVar(a),constVar(b)
{
    //regVar   = a ;
    //constVar = b ;
    cout << regVar << "\n" << constVar << "\n" ;
}

void shift(MyClass &p,int step)
{
    p.regVar +=step;
    cout << p.regVar << "\n";
}
void MyClass::printInfo()
{
    cout << this->regVar << "\n"; //The this stores the address of the current object.
}
void MyClass::setVar(int s)
{
    regVar = s;
}
int MyClass::getVar()
{
    return regVar;
}

BaseClass::BaseClass()
{
    cout << "Baseclass\n";
}
void BaseClass :: printff()
{
    cout << "alireza";
}
HerClass::HerClass()
{
    cout << "Herclass\n";
}

void HerClass::print_alireza()
{

}

void HerClass::printff()
{
    cout << "hello";
    BaseClass::printff();
}
