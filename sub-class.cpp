#include <iostream>

using namespace std;

class B
{
public:
    B()
    {
        cout << "B init" << endl;
    }
};

class A
{
public:
    B b;
    A()
    {
        // this->b = b;
        cout << "A init" << endl;
    }
};
int main()
{
    A a;
    return 0;
}