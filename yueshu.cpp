#include <iostream>
#include <math.h>
using namespace std;

/**
 * @brief 计算num的约数个数
 * 
 * @param num 
 * @return int 
 */
int count(int num)
{

    int count = 0;
    int sq = sqrt(num); //开方

    // num开方为sq
    // 则num的约数要么一个比sq大，一个比sq小，如12开方约为3.46，约数为1 12，2 6，3 4
    // 要么两个相等，如9 = 3*3
    for (int i = 1; i <= sq; i++)
    {
        if (num % i == 0)
        {
            count += 2;
        }
    }

    if (sq * sq == num)
    {
        count -= 1;
    }

    return count;
}

int main()
{
    int n; //输入个数
    int num;
    while (cin >> n)
    {
        // int a[n];
        // for (int i = 0; i < n; i++)
        // {
        //     cin >> a[i];
        // }

        // for (int i = 0; i < n; i++)
        // {
        //     cout << count(a[i]) << endl;
        // }

        while (n--)
        {
            cin >> num;
            cout << count(num) << endl;
        }
    }

    return 0;
}
