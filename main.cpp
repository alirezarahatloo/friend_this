#include <iostream>
#include "Myclass.h"
using namespace std;


int main()
{
    MyClass obj(3,4);
    cout << "hello to initializeer\n";
    shift(obj,3);
    obj.printInfo();
    return 0;
}
