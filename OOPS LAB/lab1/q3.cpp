#include<iostream>
#include<cmath>
int main()
{
float a,b,c,d,x1,x2=0.0;
std::cout<<"enter coefficients a,b and c\n";
std::cin>>a>>b>>c;
d=(b*b)-(4*a*c);
if(d>0){
x1=(-b+sqrt(d))/(2*a);
x2=(-b-sqrt(d))/(2*a);
std::cout<<"roots are real and different.\n";
std::cout<<"x1= "<<x1<<"\n";
std::cout<<"x2= "<<x2<<"\n";
}
else if(d==0)
{
std::cout<<"roots are real and same\n";
x1=(-b+sqrt(d))/(2*a);
std::cout<<"x1=x2= "<<x1<<"\n";
}
else
{
std::cout<<"roots are complex and different\n";
}
return 0;
}
