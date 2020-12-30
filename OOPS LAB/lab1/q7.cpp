#include<iostream>
int main()
{
int n,l,s=0;
std::cout<<"enter no. of array elements\n";
std::cin>>n;
int arr[n];
std::cout<<"enter elements\n";
for(int i=0;i<n;i++)
std::cin>>arr[i];

for(int i=0;i<n-1;i++)
{
for(int j=0;j<n-1-i;j++)
{
if(arr[j]>arr[j+1])
{
int t=arr[j];
arr[j]=arr[j+1];
arr[j+1]=t;
}
}
}
std::cout<<"smallest: "<<arr[0]<<"\n";
std::cout<<"largest: "<<arr[n-1]<<"\n";
return 0;
}
