#include <iostream>
#include <map>
using namespace std;

void printMap(map<int,int>&m){
    for (map<int,int>::iterator it=m.begin();it!=m.end();it++){
        cout<<"key="<<it->first<<" value="<<it->second<<endl;
    }
    cout<<endl;
}
//map容器的构造和赋值
void test01(){
    //创建map容器
    map<int,int>m;
    m.insert(pair<int,int>(1,10));
    m.insert(pair<int,int>(4,40));
    m.insert(pair<int,int>(3,30));
    m.insert(pair<int,int>(2,20));
    printMap(m);

    //拷贝构造
    map<int,int>m2(m);
    printMap(m2);

    //赋值操作
    map<int,int>m3;
    m3=m2;
    printMap(m3);
}

int main(){
    test01();
    return 0;
}