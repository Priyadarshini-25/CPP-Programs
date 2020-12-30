#include<iostream>
#include<cmath>
int main()
{
int n=0;
float s=0;
std::cout<<"enter n\n";
std::cin>>n;
for(int i=1;i<=n;i++)
{
s+=(1)/(pow(i,i));
}
std::cout<<"sum of the series is: "<<s<<"\n";
return 0;
}
