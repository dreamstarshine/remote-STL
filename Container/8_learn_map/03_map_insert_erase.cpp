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
    //插入 
    //第一种
    map<int,int>m;
    m.insert(pair<int,int>(1,10));
    //第二种
    m.insert(make_pair(2,20));
    //第三种
    m.insert(map<int,int>::value_type(3,30));
    //第四种,不建议，因为会出现不存在的key值为0的情况
    m[4]=40;
    printMap(m);
    //[]不建议插入，用途：可以利用key访问到value
    cout<<m[4]<<endl;
    //用at访问会检查键值是否存在，不存在会报错
    cout<<m.at(4)<<endl;

    //删除
    m.erase(m.begin());
    printMap(m);
    m.erase(3);
    printMap(m);
    //清空
    m.erase(m.begin(),m.end());
    m.clear();
    printMap(m);

}

int main(){
    test01();
    return 0;
}