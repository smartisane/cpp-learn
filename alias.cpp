#include <iostream>

using namespace std;

// 使用引用传参（代替指针）
// 引用： int &b = a; 必须初始化，初始化后不可改
void swap(int &a, int &b)
{
    int t = a;
    a = b;
    b = t;
}
int main()
{
    int a = 10;
    int b = 20;
    swap(a, b);
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;

    system("pause");
    return 0;
}