#include <iostream>
#include <set>
using namespace std;

void printSet(const set<int>&s){
    for(set<int>::const_iterator it=s.begin();it!=s.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
}
//set容器大小和交换
void test01(){
    set<int>s1;
    s1.insert(10);
    s1.insert(40);
    s1.insert(30);
    s1.insert(20);
    s1.insert(50);
    printSet(s1);

    if(s1.empty()){
        cout<<"s1 is empty"<<endl;
    }else{    
        cout<<"s1 is not empty"<<endl;
        cout<<"s1.size()="<<s1.size()<<endl;//5
    }  

    set<int>s2;
    s2.insert(100);
    s2.insert(200);
    s2.insert(300);
    s2.insert(400);

    s1.swap(s2);
    cout<<"s1 swap s2:"<<endl;
    printSet(s1);//100 200 300 400
    printSet(s2);//10 20 30 40 50
}

int main(){
    test01();
    return 0;
}