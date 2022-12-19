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
    cout << this->regVar; //The this stores the address of the current object.
}
