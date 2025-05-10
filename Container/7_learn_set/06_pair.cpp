#include <iostream>
#include <string>
using namespace std;

//pair对组的创建
void test01(){
    //第一种方式
    pair<string,int>p("Tom",20);
    cout<<"name:"<<p.first<<endl;//Tom
    cout<<"age:"<<p.second<<endl;//20

    //第二种方式
    pair<string,int>p2=make_pair("Jerry",30);
    cout<<"name:"<<p2.first<<endl;//Jerry
    cout<<"age:"<<p2.second<<endl;//30
}

int main(){
    test01();
    return 0;
}