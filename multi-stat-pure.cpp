#include <iostream>

using namespace std;

// 纯虚函数和抽象类
// 当类中有纯虚函数时，这个类就是抽象类
// 子类必须重写父类的纯虚函数，并且父类不能实例化对象，类似于java中的接口
class Base
{
public:
    virtual void func() = 0;
};

class Son : public Base
{
    void func()
    {
        cout << "hello world" << endl;
    }
};

int main()
{
    Base *b = new Son;
    b->func();
    delete b;   
    return 0;
}