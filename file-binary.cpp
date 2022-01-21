#include <iostream>
#include <fstream>
using namespace std;

class Person
{
public:
    string name;
    int age;

    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }

    Person() {}
};
int main()
{
    ofstream out("person.txt", ios::out | ios::binary); // 以二进制写文件
    Person p("zhangsan", 18);
    out.write((const char *)&p, sizeof(p)); //写文件用write
    out.close();

    //读出二进制文件，并还原为Person
    ifstream in;
    in.open("person.txt", ios::in | ios::binary);
    if (!in.is_open())
    {
        cout << "error" << endl;
    }
    else
    {
        Person p2;
        in.read((char *)&p2, sizeof(p));

        cout << p2.name << endl;
        cout << p2.age << endl;
    }

    in.close();

    return 0;
}