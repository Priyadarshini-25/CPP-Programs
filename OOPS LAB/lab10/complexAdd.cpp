#include<iostream>
#include<math.h>
using namespace std;
class complex
{
	int x;
	int y;
public :
	void set(int a,int b)
	{
	x=a;
	y=b;
	}
friend void compare(complex,complex);	
};
void compare(complex A , complex B)
{
int complex::*px=&complex::x;
int complex::*py=&complex::y;
complex *p=&A;
complex *q=&B;
int temp1, temp2;
temp1=sqrt(pow(A.*px,2)+pow(p->*py,2));
temp2=sqrt(pow(B.*px,2)+pow(p->*py,2));
if(temp1>temp2)
cout<<"A is greater\n\n";
else
cout<<"B is greater\n\n";
return ;
}
int main()
{
float p,q,r,t;
complex C1,C2;
cout<<"Enter the real and imag part of complex number A  : \n";
cin>>p>>q;
C1.set(p,q);
cout<<"Enter the real and imag part of complex number B : \n";
cin>>r>>t;
C2.set(r,t);
compare(C1,C2);
return 0;
}