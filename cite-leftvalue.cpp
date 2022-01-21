#include <iostream>

using namespace std;

// 引用的本质就是指针常量，即指向不可改，但内容可以改
//函数返回值为引用，则可以作为左值
//返回a的引用
int& func(){
    static int a = 10;//static修饰的为全局变量，在程序结束后由系统释放
    return a;
}
int main()
{
    int &b = func();
    cout << b << endl;
    func() = 100;//改func就相当于改b
    cout << b << endl;
    system("pause");
    return 0;
}