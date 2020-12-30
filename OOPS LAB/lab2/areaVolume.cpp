#include<iostream>
float cirArea=0.0;
float sphVol=0.0;
float r=0.0;
void areaVol(){
cirArea=3.14*r*r;
sphVol=(4*3.14*r*r*r)/3;
std::cout<<"area of circle= "<<cirArea<<"\n";
std::cout<<"volume of sphere= "<<sphVol<<"\n";
}
int main(){
std::cout<<"enter radius\n";
std::cin>>r;
areaVol();
return 0;
}
