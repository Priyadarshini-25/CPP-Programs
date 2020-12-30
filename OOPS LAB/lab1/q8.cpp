#include<iostream>
bool isPrime(int n)
{
bool flag=false;
int c=0;
for(int i=1;i<=n;i++)
if(n%i==0)
c++;

if(c==2)
return true;
else
return false;
}
int main()
{
int n;
std::cout<<"enter a no.\n";
std::cin>>n;
std::cout<<"prime factors are: \n";
for(int i=1;i<=n;i++)
{
if(n%i==0)
{
if(isPrime(i)==true)
std::cout<<i<<",";
}
}
return 0;
}


