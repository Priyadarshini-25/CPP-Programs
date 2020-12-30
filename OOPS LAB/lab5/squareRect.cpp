#include <iostream>
using namespace std;

class Square;

class Rectangle {
	int length, breadth;

public:
	Rectangle(int l, int b)
    {
        length=l;
        breadth=b;
    }
	friend void display(Rectangle r, Square s);
};

class Square {
	int side;

public:
	Square(int s)
    {
        side=s;
    }
	friend void display(Rectangle r, Square s);
};

void display(Rectangle r, Square s) {
	cout << "Rectangle: " << r.length * r.breadth << endl;
	cout << "Square: " << s.side * s.side << endl;
}

int main () {
    int l,b,side=0;
    cout<<"enter length of rectangle\n";
    cin>>l;
    cout<<"enter breadth of rectangle\n";
    cin>>b;
    cout<<"enter side of square\n";
    cin>>side;
	Rectangle rec(l,b);
	Square sq(side);
	display(rec,sq);
	return 0;
}