#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//常用拷贝和替换算法replace_if
class greater30{
    public:
    bool operator()(int val){
        return val>=30;
    }
};
void test01(){
    vector<int>v;
    v.push_back(20);
    v.push_back(30);
    v.push_back(50);
    v.push_back(30);
    v.push_back(40);
    v.push_back(20);
    v.push_back(10);
    v.push_back(20);
    cout<<"before replace:"<<endl;
    for_each(v.begin(),v.end(),[](int val){
        cout<<val<<" ";
    });
    cout<<endl;

    //>=30替换为3000
    cout<<"after replace:"<<endl;
    replace_if(v.begin(),v.end(),greater30(),3000);
    for_each(v.begin(),v.end(),[](int val){
        cout<<val<<" ";
    });
}

int main(){
    test01();
    return 0;
}