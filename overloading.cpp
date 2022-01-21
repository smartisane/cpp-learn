#include <iostream>

using namespace std;

class Person{
private:
    int age;

public:
    Person(int age){
        this->age = age;
    }

    //在类外实现
    int getAge();

    /**
     * @brief 重载+号， 实现两个Person对象相加
     * 重载减号为operator-
     * @param p 
     * @return Person 
     */
    Person operator+(Person &p){
        return Person(this->age + p.age);
    }

    //重载前置++
    Person & operator++(){
        age++;
        return *this; //返回引用，使得++(++p)后再输出p，为同一个对象
    }

    //重载后置++
    //加占位参数int区分
    Person operator++(int){
        //后置++应先取值（返回结果），再运算
        Person p =*this;
        age++;
        return p;//返回原值，这里不返回引用，因为p为局部变量，就算返回引用，函数一调完就释放了，后面也访问不了
    }

    //=重载
    Person& operator=(Person &p){
       this->age = p.age;
       return *this;
    }

    //函数调用重载（仿函数）
    void operator()(string text){
        cout << text << endl;
    }

};

//Person::int getAge();
int Person::getAge(){
    return age;
}
 
//使用全局函数重载+号
// Person operator+(Person &p1, Person &p2){
//     return Person(p1.getAge()+p2.getAge());
// }

//重载<<.实现直接输出Person对象，类似于java中的toString
ostream & operator<<(ostream &cout, Person p){
    cout << p.getAge() ;
    return cout;//再返回cout，便于链式调用，cout只有一个，要使用引用返回
}


int main()
{
    Person p1(10);
    Person p2(20);

    Person p3 = p1.operator+(p2);
    cout << p3.getAge() << endl;
    //简写为
    Person p4 = p1 + p2;
    cout << p4.getAge() << endl;

    //使用重载的<<直接输出Person
    cout << p4 << endl;

    //重载前置++
    cout << ++p4 << endl;//assert:31

    //重载后置++
    cout << p4++ << endl;
    cout << p4 << endl;

    //重载=
    Person p5(0);
    Person p6(0);
    p5 = p6 = p4;
    cout << p5 << " " << p6 << endl;

    //函数调用重载
    p5("使用起来很像函数调用，称为仿函数");

    return 0;
}