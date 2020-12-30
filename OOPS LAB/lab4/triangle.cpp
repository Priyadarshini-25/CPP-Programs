#include<iostream>
#include<cstring>
using namespace std;
class triangle{
public:
double base;
double height;

public:
void getData(){
cout<<"\nenter base\n";
cin>>base;
cout<<"enter height\n";
cin>>height;
}
friend void areaTriangle(triangle t);

};


void areaTriangle(triangle t){
double area=0;
area=0.5*t.base*t.height;
cout<<"\narea of triangle is\n"<<area;
}

int main(){

triangle ob[10];
for(int i=1;i<=10;i++){
ob[i].getData();
areaTriangle(ob[i]);
}
return 0;
}
