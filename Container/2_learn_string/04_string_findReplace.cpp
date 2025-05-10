#include <iostream>
#include <string>
using namespace std;

//字符串的查找和替换
//查找
void test01(){
    //find
    string str1="abcdefgde";
    int pos=str1.find("de");
    if(pos==-1){
        cout<<"not find"<<endl;
    }else{
        cout<<"find"<<endl;
    }
    cout<<"pos="<<pos<<endl;//返回值是字符串的下标位置，找不到返回-1
    //rfind
    pos=str1.rfind("de");//从后往前查找
    if(pos==-1){
        cout<<"not find"<<endl;
    }else{
        cout<<"find"<<endl;
    }
    cout<<"pos="<<pos<<endl;//返回值是字符串的下标位置，找不到返回-1
}
//替换
void test02(){
    string str1="abcdefg";
    str1.replace(1,3,"1111");//从下标1开始替换3个字符为1111
    cout<<"str1="<<str1<<endl;//替换从下标1开始的3个字符为1111
}

int main(){
    // test01();
    test02();
    system("pause");
    return 0;
}