#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    srand((unsigned int)time(NULL));
    int random = rand()%100+1;
    cout << random << endl;
    system("pause");
    return 0;
}