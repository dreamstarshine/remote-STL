#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//普通函数
void print01(int val){
    cout << val << " ";
}
//仿函数
class print02{
    public:
    void operator()(int val){
        cout << val << " ";
    }
};
//常用遍历算法 for_each
void test01(){
    vector<int> v;
    for (int i = 0; i < 10; i++) {
        v.push_back(i);
    }
    //方法一：普通函数
    for_each(v.begin(), v.end(), print01);
    cout << endl;

    //方法二：仿函数
    for_each(v.begin(), v.end(), print02());
    cout<<endl;
}

int main(){
    test01();
    return 0;
}