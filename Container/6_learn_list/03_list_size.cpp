#include <iostream>
#include <list>
using namespace std;

void printList(const list<int>&L){
    for(list<int>::const_iterator it=L.begin();it!=L.end();it++){
        cout<<(*it)<<" ";
    }
    cout<<endl;
}

//list容器大小操作
void test01(){
    list<int>l1;
    l1.push_back(10);
    l1.push_back(20);
    l1.push_back(30);
    l1.push_back(40);
    printList(l1);
    
    if(l1.empty()){
        cout<<"l1 is empty"<<endl;
    }else{
        cout<<"l1 is not empty"<<endl;
        cout<<"l1.size()="<<l1.size()<<endl;
    }
    l1.resize(3);
    printList(l1);

    l1.resize(15,1);
    printList(l1);
}

int main(){
    test01();
    return 0;
}