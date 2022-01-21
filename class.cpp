#include <iostream>

using namespace std;

class Person
{
private:
    string name;
    int age;

public:
    /**
     * @brief Construct a new Person object
     * 
     */
    Person()
    {
        cout << "Person() execute" << endl;
    }

    /**
     * @brief Construct a new Person object
     * 
     * @param a 
     */
    Person(int a)
    {
        age = a;
        cout << " Person(int a) execute" << endl;
    }

    /**
     * @brief Construct a new Person object
     * 拷贝构造
     * @param p 
     */
    Person(const Person &p){
        name = p.name;
        age = p.age;
    }

    /**
     * @brief Destroy the Person object
     * 
     */
    ~Person()
    {
        cout << "~Person() execute" << endl;
    }

    /**
     * @brief Set the Name object
     * 
     * @param p_name 
     */
    void setName(string p_name)
    {
        name = p_name;
    }

    /**
     * @brief Get the Name object
     * 
     * @return string 
     */
    string getName()
    {
        return name;
    }

    /**
     * @brief Set the Age object
     * 
     * @param p_age 
     */
    void setAge(int p_age)
    {
        age = p_age;
    }

    /**
     * @brief Get the Age object
     * 
     * @return int 
     */
    int getAge()
    {
        return age;
    }
};

int main()
{
    Person p1; //调用默认构造函数，不使用new，使用new是指针类型
    p1.setName("zhangsan");
    p1.setAge(18);
    cout << p1.getName() << " " << p1.getAge() << endl;

    Person p2(10);//有参构造
    Person p3(p2);//拷贝构造
    // system("pause");
    return 0;
}