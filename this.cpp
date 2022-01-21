#include <iostream>

using namespace std;

class Person
{
public:
    int age;

    Person(int age){
        this->age = age;
    }

    //返回引用类型，实现链式调用
    Person & add(int age){
        this->age += age;
        return *this;
    }
};


int main()
{
    Person p(10);
    p.add(10).add(10).add(10);
    cout << p.age << endl;
    return 0;
}