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
//vector容器的容量和大小操作
void test01(){
    vector<int>v1;
    for(int i=0;i<10;i++){
        v1.push_back(i);
    }
    printVector(v1);
    if(v1.empty()){//empty()返回容器是否为空
        cout<<"v1 is empty"<<endl;
    }else{
        cout<<"v1 is not empty"<<endl;
        cout<<"v1.capacity()="<<v1.capacity()<<endl;//capacity()返回当前容器的容量
        cout<<"v1.size()="<<v1.size()<<endl;//size()返回当前容器中元素的个数
    }

    //重新指定大小
    // v1.resize(15);//如果重新指定过长，默认用0填充之前的位置
    v1.resize(15,100);//100填充
    printVector(v1);
    cout<<"v1.capacity()="<<v1.capacity()<<endl;
    cout<<"v1.size()="<<v1.size()<<endl;

    v1.resize(5);//如果短了，则超出容器长度删除
    printVector(v1);
    cout<<"v1.capacity()="<<v1.capacity()<<endl;
    cout<<"v1.size()="<<v1.size()<<endl;
}

int main(){
    test01();
    return 0;
}