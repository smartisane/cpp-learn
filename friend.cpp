#include <iostream>

using namespace std;

class Building{

    // 声明友元
    friend void test(Building &building);

    private: string bedRoom;
    public: string  sittingRoom;

    public: Building(){
        bedRoom = "bedRoom";
        sittingRoom = "sittingRoom";
    }

};

//全局函数作为Building类的友元，可以访问私有属性
// Building friend
void test(Building &building){
    cout << "friend func to " << building.sittingRoom << endl;
    cout << "friend func to " << building.bedRoom << endl;//加了友元声明就可以访问私有成员了
}

int main()
{
    Building building;
    test(building);
    return 0;
}