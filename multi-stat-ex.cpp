#include <iostream>

using namespace std;

//多态案例
//开闭原则
class AbstractCalculator {

public:
    int num1;
    int num2;

    //子类重写
    virtual int getResult(){
        return 0;
    } 
};

//加法
class AddCalculator: public AbstractCalculator {
    int getResult(){
        return num1 + num2;
    }
};

//减法
class SubCalculator: public AbstractCalculator {
    int getResult(){
        return num1 - num2;
    }
};


int main()
{
    //使用父类指针指向子类对象实现多态
    AbstractCalculator *abc = new AddCalculator;
    abc->num1 = 10;
    abc->num2 = 20;
    int res = abc->getResult();
    cout << res << endl;


    delete abc;
    abc = new SubCalculator;
    abc->num1 = 10;
    abc->num2 = 5;
    res = abc->getResult();
    cout << res << endl;

    delete abc;
    return 0;
}