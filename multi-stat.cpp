#include <iostream>
using namespace std;

class Animal {
    // 必须加virtual
    public: virtual void speak(){
        cout << "Animal is speaking" << endl;
    }
};

class Cat: public Animal {
    public: void speak(){
        cout << "Cat is speaking" << endl;
    }
};


// 多态的条件
// 要有继承关系
// 子类重写父类虚函数

// 多态的实现
// 父类引用指向子类对象
// 或父类指针指向子类对象
void doSpeak(Animal &animal){
    animal.speak();
}

int main(){

    Cat cat;
    doSpeak(cat);//父类引用指向子类对象
    return 0;
}