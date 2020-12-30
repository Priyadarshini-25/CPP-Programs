#include<iostream>
int main()
{
int a,b,hcf=0;
std::cout<<"enter 2 no.'s\n";
std::cin>>a>>b;
for(int i=1;i<=a&&i<=b;i++)
{
if((a%i==0)&&(b%i==0))
hcf=i;
}
std::cout<<"hcf: "<<hcf<<"\n";
return 0;
}

