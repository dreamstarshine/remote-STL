#include <iostream>
#include <deque>
using namespace std;

void printDeque(const deque<int>&d){
    for(deque<int>::const_iterator it=d.begin();it!=d.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
}
//deque容器插入和删除
void test01(){
    deque<int> d1;
    //尾插
    d1.push_back(10);
    d1.push_back(20);
    //头插
    d1.push_front(100);
    d1.push_front(200);
    printDeque(d1);
    //尾删
    d1.pop_back();
    printDeque(d1);
    //头删
    d1.pop_front();
    printDeque(d1);
}

void test02(){
    deque<int>d1;
    d1.push_back(10);
    d1.push_back(20);
    d1.push_front(100);
    d1.push_front(200);

    printDeque(d1);
    //插入
    d1.insert(d1.begin(),1000);//1000 200 100 10 20
    printDeque(d1);
    d1.insert(d1.begin(),2,10000);//10000 10000 1000 200 100 10 20
    printDeque(d1);
    deque<int>d2{1,2,3};
    d1.insert(d1.begin(),d2.begin(),d2.end());//按照区间进行插入
    printDeque(d1);//1 2 3 10000 10000 1000 200 100 10 20
}
void test03(){
    deque<int>d1;
    d1.push_back(10);
    d1.push_back(20);
    d1.push_front(100);
    d1.push_front(200);

    //删除
    d1.erase(d1.begin()+1);
    printDeque(d1);//200 100 10 20

    // d1.erase(d1.begin(),d1.end());//删除区间
    d1.clear();//清空
    cout<<"d1.size()="<<d1.size()<<endl;//0
    printDeque(d1);//空

}
int main(){
    test03();
    return 0;
}