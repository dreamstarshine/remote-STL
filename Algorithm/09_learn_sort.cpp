#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

//常用的排序算法sort
void myPrint(int val){
    cout<<val<<" ";
}
void test01(){
    vector<int>v;
    v.push_back(10);
    v.push_back(40);
    v.push_back(30);
    v.push_back(20);
    v.push_back(50);

    //默认升序
    sort(v.begin(),v.end());
    for_each(v.begin(),v.end(),myPrint);
    cout<<endl;

    //改变为降序
    sort(v.begin(),v.end(),greater<int>());
    for_each(v.begin(),v.end(),myPrint);
}

int main(){
    test01();
    return 0;
}