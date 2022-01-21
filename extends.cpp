#include <iostream>

using namespace std;

class Animal{
    private: int a;
    protected: int b;
    public: int c;


    public: Animal(){
        c = 10;
    }


};


//public方式继承
//三种继承方式都无法访问private
//public继承，除private，其他属性修饰符不变
//private继承，除private，其他属性修饰都变为private，protected同
class Dog: public Animal{

    public: int c;//同名字段，默认访问子类，访问父类需要加作用域

    public: Dog(){
        c = 20;
    }


    void visit(){
        //可以访问 bc，不可访问a
        cout << this->b << endl;
        cout << this->c << endl;
    }

    
};

int main()
{
    //构造和析构的顺序：构造先父后子，析构相反
    Dog dog;
    dog.c = 20;//类外只能访问public修饰的c

    cout << dog.c << endl;//默认访问子类同名字段
    cout << dog.Animal::c << endl;//访问父类需加作用域

}