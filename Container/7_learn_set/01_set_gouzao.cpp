#include <iostream>
#include <set>
using namespace std;

void printSet(const set<int>&s){
    for(set<int>::const_iterator it=s.begin();it!=s.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
}
//set容器构造和赋值
void test01(){
    set<int>s1;//默认构造函数
    //插入数据，只有insert方式
    s1.insert(10);
    s1.insert(40);
    s1.insert(30);
    s1.insert(20);
    s1.insert(50);
    s1.insert(10);//重复数据不会插入
    printSet(s1);

    //拷贝构造
    set<int>s2(s1);
    printSet(s2);

    //赋值
    set<int>s3;
    s3=s2;
    printSet(s3);
}

int main(){
    test01();
    return 0;
}