#include <iostream>
#include <vector>
using namespace std;

//vector容器数据存取
void test01(){
    vector<int>v1;
    for(int i=0;i<10;i++){
        v1.push_back(i);
    }
    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";//通过[]访问单个元素
    }
    cout<<endl;
    for(int i=0;i<v1.size();i++){
        cout<<v1.at(i)<<" ";//通过at访问单个元素
    }
    cout<<endl;
    //获取第一个元素
    cout<<v1.front()<<endl;
    //获取最后一个元素
    cout<<v1.back()<<endl;
}

int main(){
    test01();
    return 0;
}