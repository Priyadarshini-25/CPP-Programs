#include<iostream>
#include<cstring>
using namespace std;
class Purchase{
public:
int code;
string name;
double price;
int q;
double total;
public:
void getData(){
cout<<"\nenter item name\n";
cin>>name;
cout<<"enter code\n";
cin>>code;
cout<<"enter quantity\n";
cin>>q;
cout<<"enter price\n";
cin>>price;
total=price*q;
}
void display(Purchase pur,int i);
};
void Purchase::display(Purchase pur,int i){
pur.total=pur.q*pur.price;
cout<<i+1<<"\t"<<pur.code<<"\t"<<pur.name<<"\t"<<pur.q<<"t"<<pur.price<<"\t"<<pur.total<<"\n";
}
int main(){
int n=0;
double tot=0;
cout<<"enter no. of items\n";
cin>>n;
Purchase ob[n];
for(int i=0;i<n;i++){
cout<<"enter details for item no. "<<i+1;
ob[i].getData();
}
cout<<"bill is:|-------|\n";
cout<<"Sl No.\t Item Code\t Item Name\t Quantity\t Price\t Total\n";
for(int i=0;i<n;i++){
ob[i].display(ob[i],i);
}
for(int i=0;i<n;i++){
tot+=ob[i].total;
}
cout<<"\ntotal bill amount is Rs."<<tot;
return 0;
}
