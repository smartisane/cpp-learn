#include <iostream>
using namespace std;
int main(){

    int a = 10;
    int * p = &a;

    
    cout << "p=" << p << endl;

    //解引用，取指针指向地址中的内容
    cout << "*p=" << *p << endl;

    //32位系统下，不管什么类型指针，都是占4个字节（64位8个字节）
    cout << "sizeof (int *)=" << sizeof(int *) << endl;

    int * p1 = NULL;//空指针，一般用于指针初始化，直接访问回报错

    p1 = (int *)0x1100;//野指针，指向一个没有申请的地址，访问报错

    //常量指针，指向的地址可以改，但地址中的值不能改
    const int * p2 = &a;  

    //指针常量，指向的地址不能改，但内容可以改
    int * const p3 = &a; 
    
    return 0;
}