#include <iostream>
#include <deque>
using namespace std;

void printDeque(const deque<int>&d)
{
    for(deque<int>::const_iterator it=d.begin();it!=d.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
}
// deque容器赋值操作
void test01(){
    deque<int>d1;
    for(int i=0;i<10;i++){
        d1.push_back(i);
    }
    printDeque(d1);

    deque<int>d2;
    d2=d1;//赋值 operator=
    printDeque(d2);

    deque<int>d3;
    d3.assign(d1.begin(),d1.end());//区间赋值
    printDeque(d3);

    deque<int>d4;
    d4.assign(10,100);//n个elem赋值
    printDeque(d4);
}

int main(){
    test01();
    return 0;
}