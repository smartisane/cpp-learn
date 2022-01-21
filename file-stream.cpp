#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ofstream out;//文件输出流
    out.open("hello.txt",ios::out);//指定文件路径和打开方式，out为写操作
    out << "hello world" << endl;// writing something
    out << "haha haha" << endl;
    out.close();// close 


    ifstream in;// 文件输入流
    in.open("hello.txt", ios::in);
    if(!in.is_open()){
        return;
    }
    
    // 第一种,遇到空格就换行
    // char buf[1024] = {0};
    // while (in >> buf)
    // {
    //     /* code */
    //     cout << buf << endl;
    // }

    // 第二种，正常输出
    // char buf[1024] = {0};
    // while(in.getline(buf, sizeof(buf))){
    //     cout << buf << endl;
    // }
    

    // 第三种， 正常
    // string buf;
    // while (getline(in, buf))
    // {
    //     /* code */
    //     cout << buf << endl;
    // }
    

    // 第四种，每次读一个字符
    // 可以正常读取空格，换行，输出原格式
    char buf;
    while((buf=in.get())!= EOF){
        cout << buf ;
    }


    in.close();

    return 0;
}