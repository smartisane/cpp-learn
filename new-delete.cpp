#include <iostream>

using namespace std;

// 使用new在堆区申请内存，使用delete释放
// new 返回的是一个指针类型
int * func(){
    int * p = new int(10);
    return p;
}

int main()
{
    int *p = func();
    cout << *p << endl;
    delete p;//如果是数组，使用delete[] p;
    system("pause");
    return 0;
}