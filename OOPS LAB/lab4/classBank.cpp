#include<iostream>
#include<cstring>
using namespace std;
class bank{
public:
int acno;
string name;
string actype;
float bal;
public:
bank(int acc_no,string nam,string acc_type,float balance){
acno=acc_no;
name=nam;
actype=acc_type;
bal=balance;
}
public:
void deposit();
void withdraw();
friend void display();
};
void bank::deposit(){
int dep;
cout<<"enter deposit amount\n";
cin>>dep;
bal+=dep;
}
void bank::withdraw(){
int wit;
cout<<"enter withdrawal amount\n";
cin>>wit;
if(wit>bal){
cout<<"cannot withdraw amount\n";
}
bal-=wit;
}
void display(bank bk){
cout<<"\nAccount no.: "<<bk.acno;
cout<<"\nName: "<<bk.name;
cout<<"\nAccount type: "<<bk.actype;
cout<<"\nBalance: "<<bk.bal;
}
int main(){
int acc_no;
string nam,acc_type;
float balance;
cout<<"Enter details\n";
cout<<"name\n";
cin>>nam;
cout<<"account no.\n";
cin>>acc_no;
cout<<"account type\n";
cin>>acc_type;
cout<<"balance\n";
cin>>balance;
bank ob(acc_no,nam,acc_type,balance);
ob.deposit();
ob.withdraw();
display(ob);
return 0;
}
