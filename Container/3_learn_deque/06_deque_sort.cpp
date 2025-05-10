#include <iostream>
#include <deque>
#include <algorithm> 
using namespace std;

void printDeque(const deque<int>&d)
{
    for(deque<int>::const_iterator it=d.begin();it!=d.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
}
//deque容器排序
void test01(){
    deque<int>d={300,200,100,10,20,30};
    printDeque(d);
    //默认排序是从小到大
    //对于支持随机访问的迭代器的容器，都可以利用sort算法直接对其进行排序
    //vector容器可以利用sort进行排序
    sort(d.begin(),d.end());
    printDeque(d);
}

int main(){
    test01();
    return 0;
}