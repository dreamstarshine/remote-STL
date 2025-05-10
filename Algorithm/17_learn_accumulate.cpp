#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

//常用算术生成算法accumulate
void test01(){
    vector<int>v;
    for(int i=0;i<=100;i++){
        v.push_back(i);
    }
    int num=accumulate(v.begin(),v.end(),0);
    cout<<"total:"<<num<<endl;
}

int main(){
    test01();
    return 0;
}