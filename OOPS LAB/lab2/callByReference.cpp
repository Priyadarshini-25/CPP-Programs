#include<iostream>
void swap(int *x,int *y){
int t;
t=*x;
*x=*y;
*y=t;
}
int main(){
int x=5,y=10;
std::cout<<"original values: x="<<x<<" y="<<y<<"\n";
swap(&x,&y);
std::cout<<"swapped values: x="<<x<<" y="<<y<<"\n";
return 0;
}
