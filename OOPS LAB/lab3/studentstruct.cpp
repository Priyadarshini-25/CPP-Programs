#include<iostream>
#include<string>
using namespace std;
struct Student{
string name;
int roll;
double avg;
};
int main(){
int n=0;
std::cout<<"enter no. of students\n";
std::cin>>n;
Student st[n];
for(int i=0;i<n;i++){
std::cout<<"for student no. "<<(i+1)<<"\n";
std::cout<<"enter name\n";
std::cin>>st[i].name;
std::cout<<"roll no.\n";
std::cin>>st[i].roll;
std::cout<<"average\n";
std::cin>>st[i].avg;
}
for(int i=0;i<n-1;i++){
for(int j=0;j<n-1-i;j++){
if(st[j+1].avg>st[j].avg){

int t1=st[j+1].avg;
st[j+1].avg=st[j].avg;
st[j].avg=t1;

string t2=st[j+1].name;
st[j+1].name=st[j].name;
st[j].name=t2;

int t3=st[j+1].roll;
st[j+1].roll=st[j].roll;
st[j].roll=t3;
}
}
}
std::cout<<"RESULT\n";
std::cout<<"Roll\t\tName\t\tAverage\t\tRank\t\n";
for(int i=0;i<n;i++){
std::cout<<st[i].roll<<"\t\t"<<st[i].name<<"\t\t"<<st[i].avg<<"\t\t"<<(i+1)<<"\t\n";
}
}
