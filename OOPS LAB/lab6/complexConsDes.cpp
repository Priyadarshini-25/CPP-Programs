# include<iostream>
using namespace std;
class Complex
{
int real,imag;
public:
   Complex() //unparameterized cons      
   {
   }
   Complex(int r)  //parameterised             
   {
   real=r;
   imag=r;
   }
   Complex(int r,int i)       
   {
   real=r;
   imag=i;
   }

   Complex(Complex &c)   //passing object in formal parameter  
   {
    real=c.real;
    imag=c.imag;
   }
   ~Complex()
   {
      cout<<"destructor invoked\n";
   }
   void print()
   {
   cout<<"\n The sum of two complex nos. is "<<real<<"+"<<imag<<"i.";
   }
   friend Complex sum(Complex,Complex);    
};

Complex sum(Complex obj1,Complex obj2)
{
 Complex obj3;
 obj3.real=obj1.real+obj2.real;
 obj3.imag=obj1.imag+obj2.imag;
 return obj3;
}
int main()
{
 int a,b,c;
 Complex c1;      
 cout<<"\n\t\tFor equal values :\t";
 cout<<"\n\tEnter the equal value of real and imaginary part of number 1:\n\t";
 cin>>a;
 Complex c2(a);                
 cout<<"\n\t\tFor different values :\t";
 cout<<"\n\tEnter the real and imaginary part of number 2:\n\t";
 cin>>b>>c;
 Complex c3(b,c);   
 Complex c4=sum(c2,c3);  
 c4.print();
 return 0;
 }

