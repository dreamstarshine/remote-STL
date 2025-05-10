#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//常用查找算法 binary_search
void test01(){
    vector<int> v;
    for (int i = 0; i < 10; i++) {
        v.push_back(i);
    }
    bool ret=binary_search(v.begin(),v.end(),9);//容器必须有序序列
    if(ret){
        cout<<"find"<<endl;
    }else{
        cout<<"no find"<<endl;
    }
}

int main(){
    test01();
    return 0;
}