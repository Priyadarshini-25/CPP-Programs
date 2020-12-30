#include<iostream>
int a=10;
int main(){
int a=5;
std::cout<<"local variable value= "<<a<<"\n";
std::cout<<"global variable value= "<<::a<<"\n";
return 0;
}
