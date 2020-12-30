#include<iostream> 
using namespace std; 
  
class base
{ 
public: 
    base()  
    { 
        cout<< "Constructor called" <<endl; 
        virMeth() ; 
    } 
  
    ~base() 
    {  
        virMeth();  
    } 
  
    virtual void virMeth() 
    {  
        cout<< "Virtual method called" <<endl;  
    } 
    void seeVir()  
    {  
        virMeth();  
    } 
  
}; 
  
class subclass : public base
{ 
public: 
        subclass()  
        { 
            cout<< "Derived class Constructor called" <<endl;  
        } 
        void virMeth()  
        { 
            cout<< "Derived class Virtual method called" <<endl;  
        } 
}; 
  
int main() 
{ 
    subclass ob; 
    ob.seeVir(); 
} 