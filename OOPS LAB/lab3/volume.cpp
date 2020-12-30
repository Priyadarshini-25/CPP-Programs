#include<iostream>
#include<cmath>
void volume(float l,float b,float h){
float vol=l*b*h;
std::cout<<"volume of cuboid is "<<vol<<"\n";
}
void volume(float r,float h){
float vol=(3.14*r*r*h)/3;
std::cout<<"volume of cone is "<<vol<<"\n";
}
void volume(float r){
float vol=(4*3.14*r*r*r)/3;
std::cout<<"volume of sphere is "<<vol<<"\n";
}
int main(){
float a,b,c,d=0.0;
std::cout<<"enter length,breadth,height and radius\n";
std::cin>>a>>b>>c>>d;
volume(a,b,c);
volume(d,c);
volume(d);
}
