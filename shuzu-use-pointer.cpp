#include <iostream>
using namespace std;

//使用指针访问数组
int main(){

    int a[] = {0,1,2,3,4,5,6,7,8,9};
    int * p = a;//数组名就是数组的首地址，即第一个元素的地址

    cout << "*p = " << *p << endl;//输出第一个元素

    for(int i = 0; i < 10; i++){

        cout << "a[" << i << "]=" << *p << endl;
        p++;//每次加4个字节，指向数组的下一个元素 
    }

    system("pause");
    return 0;
}