#include<iostream>
int main()
{
int a,b;
std::cout<<"enter 2 no.'s\n";
std::cin>>a>>b;
if((a%10)==(b%10))
std::cout<<"both have the same last digit\n";
else
std::cout<<"both have different last digits\n";
return 0;
}
