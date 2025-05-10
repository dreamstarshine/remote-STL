#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int>&v)
{
    for(vector<int>::iterator it=v.begin();it!=v.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
}
//vector赋值
void test01(){

    vector<int>v1;
    for(int i=0;i<10;i++){
        v1.push_back(i);
    }
    printVector(v1);

    //赋值 operator=
    vector<int>v2;
    v2=v1;
    printVector(v2);

    //赋值 assign
    vector<int>v3;
    v3.assign(v1.begin(),v1.end());//区间赋值
    printVector(v3);

    //n个elem赋值
    vector<int>v4;
    v4.assign(10,100);//赋值10个100
    printVector(v4);

}

int main(){
    test01();
    return 0;
}