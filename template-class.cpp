#include <iostream>

using namespace std;

template <class NameType, class AgeType>
class Person
{
public:
    NameType name;
    AgeType age;

    Person(NameType name, AgeType age){
        this->name=name;
        this->age = age;
    }
};


void test(){
    Person<string, int> person("zhangsan",18);
}
int main()
{
    return 0;
}