#include <iostream>
#include <list>
using namespace std;

void printList(const list<int>&L){
    for(list<int>::const_iterator it=L.begin();it!=L.end();it++){
        cout<<(*it)<<" ";
    }
    cout<<endl;
}

//list容器赋值和交换
void test01(){
    list<int>l1;

    l1.push_back(10);
    l1.push_back(20);
    l1.push_back(30);
    l1.push_back(40);
    printList(l1);

    list<int>l2;
    l2=l1;//operator =赋值
    printList(l2);

    list<int>l3;
    l3.assign(l2.begin(),l2.end());
    printList(l3);

    list<int>l4;
    l4.assign(4,10);
    printList(l4);
}

//交换
void test02(){
    list<int>l1;

    l1.push_back(10);
    l1.push_back(20);
    l1.push_back(30);
    l1.push_back(40);

    list<int>l2;
    l2.assign(10,100);
    cout<<"before swap:"<<endl;
    printList(l1);
    printList(l2);

    l1.swap(l2);
    cout<<"after swap:"<<endl;
    printList(l1);
    printList(l2);

}

int main(){
    test02();
    return 0;
}