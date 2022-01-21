#include <iostream>
using namespace std;
struct Student
{
    /* data */
    string name;
    int age;
}s3;

int main(int argc, char const *argv[])
{

    //三种结构体赋值方式
    struct Student s1;
    s1.name = "zhangsan";
    s1.age = 19;

    struct Student s2 = {"zahngsan", 18};

    s3.name = "wangwu";

    //结构体数组
    struct Student stuArr[] = {
        {"stu1",12},
        {"stu2",12},
        {"stu3",12}
    };

    //结构体指针
    struct Student *p = &s1;
    cout << p->name << endl;

    return 0;
}
