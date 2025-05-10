#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
using namespace std;

//常用的排序算法random_shuffle
void myPrint(int val){
    cout<<val<<" ";
}
void test01(){
    srand((unsigned int)time(NULL)); //设置随机种子
    vector<int>v;
    for(int i=0;i<10;i++){
        v.push_back(i);
    }

    //随机打乱
    random_shuffle(v.begin(),v.end());
    for_each(v.begin(),v.end(),myPrint);
    cout<<endl;
}

int main(){
    test01();
    return 0;
}