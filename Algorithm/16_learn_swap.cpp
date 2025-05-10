#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//常用拷贝和替换算法swap
void test01(){
    vector<int>v1;
    vector<int>v2;
    for(int i=0;i<10;i++){
        v1.push_back(i);
        v2.push_back(i+100);
    }
    cout<<"before swap:"<<endl;
    for_each(v1.begin(),v1.end(),[](int val){
        cout<<val<<" ";
    });
    cout<<endl;
    for_each(v2.begin(),v2.end(),[](int val){
        cout<<val<<" ";
    });
    cout<<endl;

    swap(v1,v2);
    cout<<"after swap:"<<endl;
    for_each(v1.begin(),v1.end(),[](int val){
        cout<<val<<" ";
    });
    cout<<endl;
    for_each(v2.begin(),v2.end(),[](int val){
        cout<<val<<" ";
    });
}

int main(){
    test01();
    return 0;
}