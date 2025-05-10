#include <iostream>
#include <string>
using namespace std;

//string求子串
void test01(){
    string str="abcdef";
    string subStr=str.substr(1,3);//从下标1开始截取3个字符
    cout<<"subStr="<<subStr<<endl;//bcd
}
//实用操作
void test02(){
    string email="hello@sina.com";
    //从邮件地址中获取用户信息
    int pos=email.find("@");//查找@的位置
    string userName=email.substr(0,pos);//从下标0开始截取pos个字符
    cout<<"userName="<<userName<<endl;//hello
}
    

int main(){
    test02();
    // system("pause");
    return 0;
}