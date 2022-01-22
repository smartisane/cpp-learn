#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void print(int val)
{
    cout << val << endl;
}

int main()
{
    vector<int> v; // vector容器
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    //遍历
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *it << endl;
    }

    //使用auto
    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *it << endl;
    }

    //使用内置foreach算法
    for_each(v.begin(), v.end(), print);

    return 0;
}