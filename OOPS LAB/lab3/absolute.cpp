#include<iostream>
#include<cmath>
void absolute(int a){
int ab=fabs(a);
std::cout<<"absolute of int is "<<ab<<"\n";
}
void absolute(float a){
float ab=fabs(a);
std::cout<<"absolute of float is "<<ab<<"\n";
}
int main(){
int n1=0;
float n2=0.0;
std::cout<<"enter one number in integer and the other in decimal\n";
std::cin>>n1>>n2;
absolute(n1);
absolute(n2);
return 0;
}
