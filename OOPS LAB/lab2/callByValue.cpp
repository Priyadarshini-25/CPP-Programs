#include<iostream>
void swap(int x,int y);
int main(){
int x=5,y=10;
std::cout<<"original: x="<<x<<" y="<<y<<"\n";
swap(x,y);
std::cout<<"original: x="<<x<<" y="<<y<<"\n";
return 0;
}
void swap(int x,int y){
int t=x;
x=y;
y=t;
}
