#include <iostream>
using namespace std;

class Rectangle {
	int length, breadth;

public:
	Rectangle(int l, int b)
    {
        length=l;
        breadth=b;
    }
	friend void display(Rectangle r);
};

void display(Rectangle r) {
	cout <<"\narea is: "<< r.length * r.breadth << endl;
}

int main () {
    int l,b=0;
    cout<<"enter length\n";
    cin>>l;
    cout<<"enter breadth\n";
    cin>>b;
	Rectangle rect(l,b);
	display(rect);
	return 0;
}