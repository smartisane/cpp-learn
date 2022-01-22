#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> s;
    for (int i = 0; i < 10; i++)
    {
        /* code */
        s.push(i);
    }

    cout << "size:" << s.size() << endl;

    for (int i = 0; i < 10; i++)
    {
        /* code */
        cout << "top:" << s.top() << endl;
        s.pop();
    }

    cout << "is empty?:" << s.empty() << endl;

    return 0;
}