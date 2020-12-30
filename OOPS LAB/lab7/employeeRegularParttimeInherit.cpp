#include<iostream>
#include<cstring>
using namespace std;

class employee
{
    public: string name;
               int id;

    public:
    void getdata()
    {
        cout<<"enter name\n";
        cin>>name;
        cout<<"enter ID\n";
        cin>>id;
    }
    void display()
    {
        cout<<"name= "<<name<<"\n";
        cout<<"ID= "<<id<<"\n";
    }
};
class regular:public employee
{
    public: double sal,da,hra,bsal;

    public:
    void input()
    {
        getdata();
        cout<<"enter salary\n"; cin>>sal;
        da=0.25*sal;
        hra=0.75*sal;
        bsal=sal;
    }
    void showdata()
    {
        display();
        cout<<"salary= "<<sal<<"\n";
        cout<<"DA= "<<da<<"\n";
        cout<<"HRA= "<<hra<<"\n";
        cout<<"BSAL= "<<bsal<<"\n";
    }
};
class parttime:public employee
{
    public: double nhr,pphr;

    public:
    void input()
    {
        getdata();
        cout<<"enter no. of hours\n";
        cin>>nhr;
        cout<<"enter pay per hours\n";
        cin>>pphr;
    }
    void showdata()
    {
        display();
        cout<<"salary= "<<(nhr*pphr)<<"\n";
    }
};
int main()
{
    int ch=0;
    regular reg;
    parttime par;
    cout<<"1. to calc regular\n";
    cout<<"2. to calc part time\n";
    cout<<"enter choice\n";
    cin>>ch;
    switch(ch)
    {
        case 1: 
                reg.input();
                reg.showdata();
                break;
        case 2: 
                par.input();
                par.showdata();
                break;
        default:cout<<"WRONG INPUT\n";
    }
    return 0;
}