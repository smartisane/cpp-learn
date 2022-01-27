#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Student
{
public:
    int id;
    int score;

    Student(int id, int score)
    {
        this->id = id;
        this->score = score;
    }
};

bool compare(const Student &s1, const Student &s2)
{
    if (s1.score != s2.score)
    {
        return s1.score < s2.score;//成绩不同，按成绩升序
    }
    else
    {
        return s1.id < s2.id;//成绩相同，按学号升序
    }
}

void printStu(Student s)
{
    cout << s.id << " " << s.score << endl;
}

int main()
{
    int n;
    cin >> n;

    vector<Student> students;
    for (int i = 0; i < n; i++)
    {
        int id, score;
        cin >> id >> score;

        Student student(id, score);
        students.push_back(student);
    }

    sort(students.begin(), students.end(), compare);//排序
    for_each(students.begin(), students.end(), printStu);//输出
    return 0;
}