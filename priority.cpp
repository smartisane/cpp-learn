#include <iostream>

using namespace std;

class Person
{
private:
    /* data */
    int * m_age;

/**
 * @brief 
 * 每个类默认有无参构造，析构和拷贝构造函数
 * 自己写了有参，无参就会失效
 * 自己写了拷贝，其他两个就会失效
 * 默认的拷贝构造函数是浅拷贝，若类的成员有指针类型，则指向同一块地址，这样在析构函数里释放就会释放两次，出现错误
 * 解决方法就是用深拷贝，即自己重新申请一块内存
 */
public:
    Person()
    {
        cout << "none args init" << endl;
    }

    Person(int age)
    {
        m_age = new int(age);
        cout << "args init" << endl;
    }

    Person(const Person &p){
        m_age =  new int(*p.m_age);//注意解引用
        cout << "copy init" << endl;
    }

    // 在析构函数里delete
    ~Person()
    {
        if(m_age != NULL){
            delete m_age;
            m_age = NULL;
        }
        cout << "destory" << endl;
    }
};

void test(){
    Person p1(18);
    Person p2(p1);
}


int main()
{
    test();
    return 0;
}