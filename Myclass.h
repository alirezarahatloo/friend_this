#ifndef   MYCLASS_H
#define   MYCLASS_H

class MyClass
{
    public :
        MyClass(int a,int b);
        void printInfo();
    private:
        int regVar;
        const int constVar;
        friend void shift(MyClass &p,int step); //friens function allow to change private variable.
};


#endif
