#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int>&v)
{
    for(vector<int>::iterator it=v.begin();it!=v.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
}
//vector容器互换
//1、基本使用
void test01(){
    vector<int>v1;
    for(int i=0;i<10;i++){
        v1.push_back(i);
    }
    printVector(v1);

    vector<int>v2;
    for(int i=10;i>0;i--){
        v2.push_back(i);
    }
    printVector(v2);
    v1.swap(v2);//交换两个容器的内容
    printVector(v1);//交换后v1的内容
    printVector(v2);//交换后v2的内容    
}

//2、实用用途
//巧用swap可以收缩内存空间
void test02(){
    vector<int>v;
    for(int i=0;i<10000;i++){
        v.push_back(i);
    }
    cout<<"v.size()="<<v.size()<<endl;//10000
    cout<<"v.capacity()="<<v.capacity()<<endl;//16384

    v.resize(3);//重新指定大小
    cout<<"v.size()="<<v.size()<<endl;//3
    cout<<"v.capacity()="<<v.capacity()<<endl;//16384

    //巧用swap收缩内存空间
    vector<int>(v).swap(v);//创建一个匿名对象，匿名对象自动回收，交换后，临时对象被销毁，收缩内存空间
    cout<<"v.size()="<<v.size()<<endl;//3
    cout<<"v.capacity()="<<v.capacity()<<endl;//3

}
int main(){
    test02();
    return 0;
}