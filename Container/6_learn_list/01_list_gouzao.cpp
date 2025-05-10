#include <iostream>
#include <list>
using namespace std;

void printList(const list<int>&L){
    for(list<int>::const_iterator it=L.begin();it!=L.end();it++){
        cout<<(*it)<<" ";
    }
    cout<<endl;
}
//list容器构造函数
void test01(){
    //创建list容器
    list<int>l1;//默认构造
    //添加数据
    l1.push_back(10);
    l1.push_back(20);
    l1.push_back(30);
    l1.push_back(40);
    //遍历容器
    printList(l1);

    //区间方式构造
    list<int>l2(l1.begin(),l1.end());
    printList(l2);

    //拷贝构造
    list<int>l3(l2);
    printList(l3);

    //n个elem
    list<int>l4(4,10);
    printList(l4);

}

int main(){
    test01();
    return 0;
}