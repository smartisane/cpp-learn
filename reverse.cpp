#include <iostream>

using namespace std;

// 4个字符反序输出
int main()
{
    string str;
    while (cin >> str)
    {
        for (int i = 3; i >= 0; i--)
        {
            cout << str[i];
        }
        cout << endl;
    }

    return 0;
}