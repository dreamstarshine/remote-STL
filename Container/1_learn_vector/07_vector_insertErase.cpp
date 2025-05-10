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
//vector插入和删除
void test01(){
    vector<int>v1;
    //尾插
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
    v1.push_back(40);
    v1.push_back(50);
    printVector(v1);//10 20 30 40 50
    
    //尾删
    v1.pop_back();//删除最后一个元素
    printVector(v1);//10 20 30 40

    //插入
    v1.insert(v1.begin(),100);//在下标0的位置插入100
    printVector(v1);//100 10 20 30 40

    v1.insert(v1.begin(),2,1000);
    printVector(v1);//1000 1000 100 10 20 30 40

    //删除
    v1.erase(v1.begin());//删除下标为0的元素
    printVector(v1);//1000 100 10 20 30 40

    // v1.erase(v1.begin(),v1.end());//清空容器
    v1.clear();//清空容器
    printVector(v1);//空容器
}

int main(){
    test01();
    return 0;
}