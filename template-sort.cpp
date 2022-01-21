#include <iostream>

using namespace std;

//交换
template<typename T>
void mySwap(T &a, T &b){
    T temp = a;
    a = b;
    b = temp;
}

/**
 * @brief 选择排序
 * 
 * @tparam T 
 * @param a 
 * @param n 
 */
template<typename T>
void selectSort(T a[], int n){
    for(int i = 0; i < n; i++){
        int min = i;//min记录最小值下标
        for(int j = i+1; j < n; j++){
            if(a[j] < a[min]){
                min = j;
            }
        }
        if(min != i){
            mySwap(a[min], a[i]);
        }
    }
}

template <typename T>
void print(T a[], int n){
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}

// char[]
void test1(){
    char a[] = "silzbra";
    int n = sizeof(a)/sizeof(char);
    print(a, n-1);
    selectSort(a, n-1);
    print(a,n-1);
}

// int[]
void test2(){
    int a[] = {5,2,0,1,3,4};
    int n = sizeof(a)/sizeof(int);
    print(a, n);
    selectSort(a, n);
    print(a,n);
}

int main()
{
    test1();
    test2();
    // system("pause");
    return 0;
}