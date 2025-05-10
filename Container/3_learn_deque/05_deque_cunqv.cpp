#include <iostream>
#include <deque>
using namespace std;

//deque容器的数据存取
void test01(){
    deque<int>d;
    d.push_back(10);
    d.push_back(20);
    d.push_back(30);
    d.push_front(100);
    d.push_front(200);
    d.push_front(300);

    //通过[]方式访问元素
    for(int i=0;i<d.size();i++){
        cout<<d[i]<<" ";
    }
    cout<<endl;
    //通过at()方式访问元素
    for(int i=0;i<d.size();i++){
        cout<<d.at(i)<<" ";
    }
    cout<<endl;
    cout<<"d.front()="<<d.front()<<endl;//访问第一个元素
    cout<<"d.back()="<<d.back()<<endl;//访问最后一个元素
}

int main(){
    test01();
    return 0;
}