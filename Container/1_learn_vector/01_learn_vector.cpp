#include<iostream>
#include<vector>
#include<algorithm>//标准算法头文件
using namespace std;

// vector容器存放内置数据类型
void myPrint(int val){
    cout<<val<<endl;
}

void test1(){
    //创建一个vector容器
    vector<int> v;

    //向容器中添加数据
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    //通过迭代器访问容器中的数据,第一种方式
    vector<int>::iterator itBegin=v.begin();//起始迭代器，指向容器中第一个元素
    vector<int>::iterator itEnd=v.end();//结束迭代器。指向容器中最后一个元素的下一个位置
    while(itBegin!=itEnd){
        cout<<*itBegin<<endl;
        itBegin++;
    }

    //第二种方式
    for(auto it=v.begin();it!=v.end();it++){
        cout<<*it<<endl;
    }

    //第三种方式，利用STL提供的遍历算法
    for_each(v.begin(),v.end(),myPrint);//起始迭代器，终止迭代器，函数名字

}
int main(){
    test1();
    system("pause");
    return 0;
}