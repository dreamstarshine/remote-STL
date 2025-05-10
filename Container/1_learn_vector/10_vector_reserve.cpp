#include <iostream>
#include <vector>
using namespace std;

//vector容器预留空间
void test01(){
    vector<int>v;
    //利用reserve()函数预留空间
    v.reserve(10000);//预留10000个空间，避免多次开辟内存
    int num=0;//统计开辟次数
    int *p=NULL;
    for(int i=0;i<10000;i++){
        v.push_back(i);//每次push_back都要重新分配内存，效率低

        if(p!=&v[0]){
            p=&v[0];
            num++;
        }
    }
    cout<<"num="<<num<<endl;//num=15
}

int main(){
    test01();
    return 0;
}