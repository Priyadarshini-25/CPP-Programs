#include<iostream>
using namespace std;
class base
{
    public:
        base()
        {
            cout<<"\nBase Constructor Called";
        }
        ~base()
        {
            cout<<"\nBase Destructor Called";
        }
};
class base1:public base
{
    public:
        base1():base() // the base1 is derived from base
        {
            cout<<"\nBase 1 Constructor Called";
        }
        ~base1()
        {
            cout<<"\nBase1 Destructor Called";
        }
};
class derived:public base1
{
    public:
    derived():base1()//one parameter for base class and other for base 1
    {
        cout<<"\nDerived Constructor Called";
    }
    ~derived()
    {
        cout<<"\nDerived Destructor Called";
    }
};
int main()
{
    derived ob;
}