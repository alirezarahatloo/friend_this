#include <iostream>
#include "Myclass.h"
using namespace std;


int main()
{
    MyClass obj(3,4);
    cout << "hello to initializeer\n";
    shift(obj,3);
    obj.printInfo();
    HerClass obj_herclass;
    obj.setVar(10);
    cout << obj.getVar() << "\n";
    
    return 0;
}
