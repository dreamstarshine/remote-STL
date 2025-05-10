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
// deque容器大小操作
void test01(){
    deque<int>d1;
    for(int i=0;i<10;i++){
        d1.push_back(i);
    }
    printDeque(d1);
    if(d1.empty()){//empty()返回容器是否为空
        cout<<"d1 is empty"<<endl;
    }else{  
        cout<<"d1 is not empty"<<endl;
        cout<<"d1.size()="<<d1.size()<<endl;//size()返回当前容器中元素的个数
    }
    //重新指定大小
    // d1.resize(15);//如果重新指定过长，默认用0填充之前的位置
    d1.resize(15,1);
    printDeque(d1);

    d1.resize(5);
    printDeque(d1);//如果短了，则超出容器长度删除
}

int main(){
    test01();
    return 0;
}