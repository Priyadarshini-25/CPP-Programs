#include<iostream>
using namespace std;

class superClass//super class
{
    public:
    superClass()//constructor
    {
        cout<<"superClass Constructor\n";
    }
    
    ~superClass()//destructor
    {
        cout<<"superClass Destructor\n";
    }
};

class subClass : public superClass//sub class
{

    public:
    subClass() //constructor
    {
        cout<<"subClass Constructor\n";
    }

    ~ subClass() //destructor
    {
        cout<<"subClass Destructor\n";
    }
};

int main()
{

    subClass ob;//automatically executes both child and parent class 
    //constructors and destructors because of inheritance
    
    return 0;
}  