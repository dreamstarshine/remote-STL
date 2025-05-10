#include <iostream>
#include <set>
using namespace std;

void printSet(const set<int>&s){
    for(set<int>::const_iterator it=s.begin();it!=s.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
}
//set容器和multiset容器区别
void test01(){
    //set不允许插入重复元素
    set<int>s;
    pair<set<int>::iterator,bool> ret=s.insert(10);//返回值是pair类型，第二个bool值表示插入是否成功
    if(ret.second){
        cout<<"first insert success"<<endl;
    }else{
        cout<<"first insert failed"<<endl;
    }
    ret=s.insert(10);
    if(ret.second){
        cout<<"second insert success"<<endl;
    }else{
        cout<<"second insert failed"<<endl;
    }

    //multiset允许插入重复元素
    multiset<int>ms;
    ms.insert(10);
    ms.insert(10);
    for(multiset<int>::iterator it=ms.begin();it!=ms.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;

}

int main(){
    test01();
    return 0;
}