#include <iostream>
using namespace std;
int main()
{

    int a[2][3] = {{1, 2, 3}, {4, 5, 6}};
    cout << a << endl;
    cout << a[0] << endl;
    cout << &a[0][0] << endl;

    cout << "hang " << sizeof(a)/sizeof(a[0]) << endl;
    cout << "lie " << sizeof(a[0])/sizeof(a[0][0]) << endl;
    return 0;
}