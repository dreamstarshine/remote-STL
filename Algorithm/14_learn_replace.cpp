#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//常用的拷贝和替换算法 replace
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

    //20替换为2000
    cout<<"after replace:"<<endl;
    replace(v.begin(),v.end(),20,200);
    for_each(v.begin(),v.end(),[](int val){
        cout<<val<<" ";
    });
}

int main(){
    test01();
    return 0;
}