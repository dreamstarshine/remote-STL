#include <iostream>
#include <string>
using namespace std;

//string的赋值方法
void test01(){
    string str1;//默认构造函数
    str1="hello world";//char*类型字符串 赋值给当前的字符串
    cout<<"str1="<<str1<<endl;

    string str2;
    str2=str1;//把字符串s赋给当前的字符串
    cout<<"str2="<<str2<<endl;

    string str3;
    str3="a";//字符赋值给当前的字符串
    cout<<"str3="<<str3<<endl;

    string str4;
    str4.assign("hello C++");//把字符串s赋给当前的字符串
    cout<<"str4="<<str4<<endl;

    string str5;
    str5.assign("hello C++",5);//把字符串s的前n个字符赋给当前的字符串
    cout<<"str5="<<str5<<endl;

    string str6;
    str6.assign(str5);//把字符串s赋给当前字符串
    cout<<"str6="<<str6<<endl;

    string str7;
    str7.assign(10,'w');
    cout<<"str7="<<str7<<endl;
}

int main(){
    test01();
    system("pause");
    return 0;
}