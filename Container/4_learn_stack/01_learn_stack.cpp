#include <iostream>
#include <stack>
using namespace std;

//stack容器
void test01(){
    //先进后出
    stack<int>s;//默认构造函数

    //入栈
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    cout<<"s.size()="<<s.size()<<endl;//4
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
    cout<<"s.size()="<<s.size()<<endl;//0
}

int main(){
    test01();
    return 0;
}