#include <iostream>

using namespace std;

struct Student
{
    /* data */
    string name;
    int age;
};

//使用指针作为参数，减少开销
//使用const防止修改
void printStu(const Student *stu){
    // stu->name = "lisi";//加入const后，不可修改，报错
    cout << "stu->name=" << stu->name << endl;
    cout << "stu->age=" << stu->age << endl;
}

int main()
{
    struct Student stu = {"zhangsan",18};
    printStu(&stu);
    system("pause");
    return 0;
}