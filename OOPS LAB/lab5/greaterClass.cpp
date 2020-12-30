#include<iostream>
using namespace std;

class B; 

class A {
private:
    int a;

public:
    //constructor
    A(int a) {
        this->a = a;
    }

    friend int max(A a, B b);
};

class B {
private:
    int b;

public:
    //constructor
    B(int b) {
        this->b = b;
    }

    friend int max(A a, B b);
};

int max(A a, B b) {
    return (a.a > b.b ? a.a : b.b);
}

int main() {
    int n1,n2=0;
    cout<<"enter number 1\n";
    cin>>n1;
    cout<<"enter number 2";
    cin>>n2;
    A a(n1);
    B b(n2);
    cout << "Greatest is : " << max(a, b);
    return 0;
}