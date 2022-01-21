#include <iostream>
#include <string>
using namespace std;

class Student{
public:
    string name;
    int score;
};

void bubbleSort(Student stu[], int n, int mode){
    switch(mode){
        case 0:
            for(int i = 0; i < n-1; i++){
                for(int j = 0; j < n-1-i; j++){
                     if(stu[j].score < stu[j+1].score){
                        Student temp = stu[j];
                        stu[j] = stu[j+1];
                        stu[j+1] = temp;
                    }
                }
            }
            break;
            
        case 1:
            for(int i = 0; i < n-1; i++){
                for(int j = 0; j < n-1-i; j++){
                     if(stu[j].score > stu[j+1].score){
                        Student temp = stu[j];
                        stu[j] = stu[j+1];
                        stu[j+1] = temp;
                    }
                }
            }
            break;
    }
}

void printStu(Student stu[], int num){
    for(int i = 0; i < num; i++){
        cout << stu[i].name << " " << stu[i].score << endl;
    }
}

int main(){
    int num, mode;
    
    while(cin >> num >> mode){
        Student stu[num];
        // cin >> mode;
        for(int i = 0; i < num; ++i){
            cin >> stu[i].name >> stu[i].score;
        }
        bubbleSort(stu, num, mode);
        printStu(stu, num);
    }
    
    
    
    
    
    
    
    return 0;
}


/*

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Student{
public:
    string name;
    int score;
};

void bubbleSort(Student stu[], int n, int mode){
    switch(mode){
        case 0:
            for(int i = 0; i < n-1; i++){
                for(int j = 0; j < n-1-i; j++){
                     if(stu[j].score < stu[j+1].score){
                        Student temp = stu[j];
                        stu[j] = stu[j+1];
                        stu[j+1] = temp;
                    }
                }
            }
            break;
            
        case 1:
            for(int i = 0; i < n-1; i++){
                for(int j = 0; j < n-1-i; j++){
                     if(stu[j].score > stu[j+1].score){
                        Student temp = stu[j];
                        stu[j] = stu[j+1];
                        stu[j+1] = temp;
                    }
                }
            }
            break;
    }
}

void printStu(Student stu[], int num){
    for(int i = 0; i < num; i++){
        cout << stu[i].name << " " << stu[i].score << endl;
    }
}

//递减排序
bool compare1(const Student &s1, const Student &s2){
    return s1.score > s2.score;
}

bool compare2(const Student &s1, const Student &s2){
    return s1.score < s2.score;
}
int main(){
    int num, mode;
    
    while(cin >> num >> mode){
        Student stu[num];
        for(int i = 0; i < num; ++i){
            cin >> stu[i].name >> stu[i].score;
        }
        //bubbleSort(stu, num, mode);
        if(mode == 0){
            stable_sort(stu,stu+num,compare1);
        } else {
            stable_sort(stu,stu+num,compare2);
        }
        
        printStu(stu, num);
    }
    
    
    
    
    
    
    
    return 0;
}


*/