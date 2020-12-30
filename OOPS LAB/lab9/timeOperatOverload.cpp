#include<iostream>
using namespace std;
class Time
{
    int hr, min, sec;
    public:
    Time()//nom parameterized
    {
        hr=0, min=0; sec=0;
    }
    Time(int h, int m, int s)//parameterized
    {
        hr=h, min=m; sec=s;
    }
    
    friend bool operator==(Time &t1, Time &t2);
};

bool operator== (Time &t1, Time &t2)
{
    return ( t1.hr == t2.hr && t1.min == t2.min && t1.sec == t2.sec );
}

int main()
{
    Time t1(1,1,1);
    Time t2(1,1,1);
    if(t1 == t2)
    {
        cout << "Both the time values are equal";
    }   
    else 
    {
        cout << "Both the time values are not equal";
    }
}