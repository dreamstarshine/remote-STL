#include <iostream>
#include <deque>
using namespace std;

//deque构造函数
void printDeque(const deque<int>&d)
{
    for(deque<int>::const_iterator it=d.begin();it!=d.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
}

void test01(){
    deque<int> d1;//默认构造函数
    for(int i=0;i<10;i++){
        d1.push_back(i);
    }
    printDeque(d1);

    deque<int>d2(d1.begin(),d1.end());
    printDeque(d2);

    deque<int>d3(10,100);//n个elem方式构造
    printDeque(d3);

    //拷贝构造函数
    deque<int>d4(d3);
    printDeque(d4);
    
}

int main(){
    test01();
    return 0;
}