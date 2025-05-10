#include <iostream>
#include <list>
using namespace std;

void printList(const list<int>&L){
    for(list<int>::const_iterator it=L.begin();it!=L.end();it++){
        cout<<(*it)<<" ";
    }
    cout<<endl;
}

//list容器的插入和删除
void test01(){
    list<int>l1;
    //尾插
    l1.push_back(10);
    l1.push_back(20);
    l1.push_back(30);
   
    //头插
    l1.push_front(100);
    l1.push_front(200);
    l1.push_front(300);
    printList(l1);//300 200 100 10 20 30

    //尾删
    l1.pop_back();
    printList(l1);//300 200 100 10 20

    //头删
    l1.pop_front();
    printList(l1);//200 100 10 20

    //插入
    l1.insert(++l1.begin(),1000);
    printList(l1);//200 1000 100 10 20

    //删除
    l1.erase(l1.begin());
    printList(l1);//1000 100 10 20

    //移除
    l1.push_back(10000);
    l1.push_back(10000);
    printList(l1);//1000 100 10 20 10000 10000
    l1.remove(10000);
    printList(l1);//1000 100 10 20

    //清空
    l1.clear();
    printList(l1);
}

int main(){
    test01();
    return 0;
}