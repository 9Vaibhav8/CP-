#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex(int x, int y)
    {

        a = x;
        b = y;
    }

    Complex(int x)
    {
        a = x;
        b = 0;
    }

    void printnumber(void)
    {
        cout << "Your complex number is : " << a << " + " << b << "i" << endl;
    }
};

int main()
{ 
    Complex c1(4);
    c1.printnumber(); 
    return 0;
}