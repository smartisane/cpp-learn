#include <iostream>

using namespace std;

int main()
{
    //  输入a-z需要按下的次数
    int keyNum[] = {1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,4,1,2,3,1,2,3,4};

    string str;
    while(cin >> str){
        int count = keyNum[str[0] - 'a'];
        for(int i = 1; i < str.length(); i++){
            //每次按下都要一个时间单位
            count += keyNum[str[i] - 'a'];
            //如果和上一次是同一个按键，则ascii码相减一定和按下次数差相等
            //如按下af，分别需要1次和3次，差为2，但是f-a不等于2，而按下ac，也是1次和3次，c-a=2
            //需要两个时间单位间隔
            if(keyNum[str[i] - 'a'] - keyNum[str[i-1] - 'a'] == str[i] - str[i-1]){
                count += 2;
            }
        }
        cout << count << endl;
    }

    return 0;
}