#include <iostream>

using namespace std;

template <typename T>

void mySwap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}
int main()
{
    int a = 10;
    int b = 20;
    mySwap(a, b);
    cout << a << " " << b << endl;

    double c = 10.1;
    double d = 20.2;
    mySwap<double>(c, d);
    cout << c << " " << d << endl;
    return 0;
}