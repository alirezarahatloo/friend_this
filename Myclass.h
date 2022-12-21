#ifndef   MYCLASS_H
#define   MYCLASS_H

class MyClass
{
    public :
        MyClass(int a,int b);
        void printInfo();
        void setVar(int s);
        int  getVar();
    private:
        int regVar;
        const int constVar;
        friend void shift(MyClass &p,int step); //friens function allow to change private variable.
};

class BaseClass
{
    public :
        int var_base;
        BaseClass();
        void printff();
        virtual void print_alireza() = 0; //The 0 tells the compiler that the function has no body.avoid redefined in a derived classمنظور اینه که کلاسهایی که ارث میبرنن باید خودشون تعریف کنن و تعریفش اجباری
        //virtual void print_alireza(){}
    protected:
};


class HerClass:public BaseClass
{
    public:
        HerClass();
        int var1;
        void printff();
        void print_alireza();
    protected:
        int var2;
};

#endif
