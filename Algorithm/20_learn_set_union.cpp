#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//常用集合算法 set_union
void test01(){
    vector<int>v1;
    vector<int>v2;
    for(int i=0;i<10;i++){
        v1.push_back(i);//0-9
        v2.push_back(i+5);//5-14
    }
    vector<int>vTarget;
    //目标容器需要提前开辟空间，开辟空间两个容器相加
     vTarget.resize(v1.size()+v2.size());
    auto it=set_union(v1.begin(),v1.end(),v2.begin(),v2.end(),vTarget.begin());//0 1 2 3 4 5 6 7 8 9 10 11 12 13 14
    for_each(vTarget.begin(),it,[](int val){
        cout<<val<<" ";
    });
    cout<<endl;
}

int main(){
    test01();
    return 0;
}