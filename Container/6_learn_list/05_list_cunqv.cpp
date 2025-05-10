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
    
   //l1[0] 不可以用[]访问list容器中的元素
   //l1.at(0) 不可以用at方式访问list容器中的元素
   cout<<"first:"<<l1.front()<<endl;
   cout<<"last:"<<l1.back()<<endl;

   //验证迭代器不支持随机访问
   auto it=l1.begin();
   it++;//支持双向
   it--;
//    it=it+1;//不支持随机访问
}

int main(){
    test01();
    return 0;
}