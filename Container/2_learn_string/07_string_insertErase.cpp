#include <iostream>
#include <string>
using namespace std;

//字符串插入和删除
void test01(){
    string str="hello";

    //插入
    str.insert(1,"111");//在下标1的位置插入111
    cout<<"str="<<str<<endl;//h111ello

    //删除
    str.erase(1,3);//从下标1开始删除3个字符
    cout<<"str="<<str<<endl;//hello
}


int main(){
    test01();
    system("pause");
    return 0;
}