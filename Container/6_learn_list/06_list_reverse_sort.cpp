#include <iostream>
#include <list>
using namespace std;

void printList(const list<int>&L){
    for(list<int>::const_iterator it=L.begin();it!=L.end();it++){
        cout<<(*it)<<" ";
    }
    cout<<endl;
}

bool myCompare(int v1,int v2){
    return v1>v2;
}
//list容器大小操作
void test01(){
    list<int>l1;
    l1.push_back(40);
    l1.push_back(20);
    l1.push_back(30);
    l1.push_back(10);
    l1.push_back(50);
    printList(l1);

    //反转
    l1.reverse();
    printList(l1);

    //排序
    l1.sort();//升序
    printList(l1);

    l1.sort(myCompare);
    printList(l1);
}

int main(){
    test01();
    return 0;
}