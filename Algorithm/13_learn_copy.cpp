#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//常用的拷贝和替换算法 copy
void test01(){
    vector<int>v1;
    for(int i=0;i<10;i++){
        v1.push_back(i);
    }
    vector<int>v2;
    v2.resize(v1.size());//记得开辟空间
    copy(v1.begin(),v1.end(),v2.begin());
    for_each(v2.begin(),v2.end(),[](int val){
        cout<<val<<" ";
    });
}

int main(){
    test01();
    return 0;
}