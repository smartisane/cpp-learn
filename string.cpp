#include <iostream>

using namespace std;

int main()
{
    string str = "hello world";
    str += "!";
    cout << str << endl;
    int pos = str.find("wo");
    cout << pos << endl;
    return 0;
}