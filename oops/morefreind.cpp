#include <iostream>
using namespace std;

class Y ;
class X
{
    int data;
  

public:
    void setValue(int value)
    {
        data = value;
    }
    friend void add(X, Y);
};

class Y
{
    int num;


public:
    void setValue(int value)
    {
        num = value;
    }
    friend void add(X, Y);
};

void add(X o1, Y o2)
{

    cout << "Summation of X and Y " << o1.data + o2.num;
};

int main()
{
    X a1;
    a1.setValue(5);
    Y b2;
    b2.setValue(6);
    add(a1, b2);

    return 0;
}