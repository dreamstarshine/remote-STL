#include <iostream>
#include <set>
using namespace std;

void printSet(const set<int>&s){
    for(set<int>::const_iterator it=s.begin();it!=s.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
}
//set容器查找和统计
void test01(){
    set<int>s1;
    s1.insert(10);
    s1.insert(40);
    s1.insert(30);
    s1.insert(20);
    s1.insert(50);
    printSet(s1);

    auto it=s1.find(20);//返回迭代器
    if(it!=s1.end()){
        cout<<"find"<<endl;
        int count=s1.count(20);
        cout<<"count="<<count<<endl;//返回元素个数
    }
    else{
        cout<<"not find"<<endl;
    }

}

int main(){
    test01();
    return 0;
}