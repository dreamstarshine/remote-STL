#include <iostream>
#include <map>
using namespace std;

class compareMap{
    public:
    bool operator()(const int& v1,const int& v2)const{
        //降序
        return v1>v2;
    }
};
void printMap(map<int,int,compareMap>&m){
    for (map<int,int,compareMap>::iterator it=m.begin();it!=m.end();it++){
        cout<<"key="<<it->first<<" value="<<it->second<<endl;
    }
    cout<<endl;
}

//map容器的插入和删除
void test01(){
    //创建map容器
    map<int,int,compareMap>m;
    m.insert(pair<int,int>(1,10));
    m.insert(pair<int,int>(2,20));
    m.insert(pair<int,int>(3,30));
    m.insert(pair<int,int>(4,40));
    m.insert(pair<int,int>(5,50));
    printMap(m);

}

int main(){
    test01();
    return 0;
}