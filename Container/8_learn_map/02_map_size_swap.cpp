#include <iostream>
#include <map>
using namespace std;

void printMap(map<int,int>&m){
    for (map<int,int>::iterator it=m.begin();it!=m.end();it++){
        cout<<"key="<<it->first<<" value="<<it->second<<endl;
    }
    cout<<endl;
}

//map容器的大小和交换
void test01(){
    //创建map容器
    map<int,int>m;
    m.insert(pair<int,int>(1,10));
    m.insert(pair<int,int>(4,40));
    m.insert(pair<int,int>(3,30));
    m.insert(pair<int,int>(2,20));
    
    if(m.empty()){
        cout<<"m is empty"<<endl;
    }else{
        cout<<"m is not empty"<<endl;
        cout<<"m size="<<m.size()<<endl;
    }

    map<int,int>m2;
    m2.insert(pair<int,int>(4,100));
    m2.insert(pair<int,int>(5,400));
    m2.insert(pair<int,int>(6,300));
    m2.insert(pair<int,int>(7,200));
    
    m.swap(m2);
    printMap(m);
    printMap(m2);
}

int main(){
    test01();
    return 0;
}