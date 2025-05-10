#include <iostream>
#include <set>
using namespace std;

void printSet(const set<int>&s){
    for(set<int>::const_iterator it=s.begin();it!=s.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
}
//set容器插入和删除
void test01(){
    set<int>s1;
    //插入
    s1.insert(10);
    s1.insert(40);
    s1.insert(30);
    s1.insert(20);
    s1.insert(50);
    printSet(s1);
    //删除
    s1.erase(s1.begin());
    printSet(s1);//20 30 40 50
    //删除重载版本
    s1.erase(20);
    printSet(s1);//30 40 50
    //清空
    // s1.erase(s1.begin(),s1.end());
    s1.clear();
    printSet(s1);
}

int main(){
    test01();
    return 0;
}