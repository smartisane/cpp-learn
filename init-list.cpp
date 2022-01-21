#include <iostream>

using namespace std;

class Person
{
public:
    int m_a;
    int m_b;
    int m_c;

    //使用初始化列表
    Person(int a, int b, int c) : m_a(a), m_b(b), m_c(c) {}
};
int main()
{
    Person p(1,2,3);
    cout << p.m_a << endl;
    cout << p.m_b << endl;
    cout << p.m_c << endl;
    return 0;
}