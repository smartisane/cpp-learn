#include <iostream>

using namespace std;

class A {
    public: int a;
};

//虚继承
class B: virtual public A{

};

//虚继承
class C: virtual public A{
    
};


// 多继承（菱形继承），a冗余
//BC使用虚继承解决问题
class D: public B, public C{
    
};

int main()
{
    D d;
    d.a = 10;
    cout << d.a << endl;
    return 0;
}