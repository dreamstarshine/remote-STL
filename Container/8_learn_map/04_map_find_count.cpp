#include <iostream>
#include <map>
using namespace std;

void printMap(map<int,int>&m){
    for (map<int,int>::iterator it=m.begin();it!=m.end();it++){
        cout<<"key="<<it->first<<" value="<<it->second<<endl;
    }
    cout<<endl;
}

//map容器的插入和删除
void test01(){
    //创建map容器
    map<int,int>m;
    m.insert(pair<int,int>(1,10));
    m.insert(pair<int,int>(3,30));
    m.insert(pair<int,int>(2,20));
    auto it=m.find(3);
    if(it!=m.end()){
        cout<<"key="<<it->first<<" value="<<it->second<<endl;
    }else{
        cout<<"not find"<<endl;
    }
    //统计
    //map不允许插入重复的key元素，count要么为0，要么为1
    //multimap的count统计可能大于1
    int num=m.count(3);
    cout<<"num="<<num<<endl;
}

int main(){
    test01();
    return 0;
}