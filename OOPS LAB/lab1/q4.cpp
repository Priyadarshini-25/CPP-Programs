#include<iostream>
int main()
{
int n=0,c=0;
std::cout<<"enter a no.\n";
std::cin>>n;
for(int i=1;i<=n;i++)
{
if(n%i==0)
c++;
}
if(c==2)
std::cout<<n<<" is prime\n";
else
std::cout<<n<<"is not prime\n";
return 0;
}
