#include <iostream>
#include <string>
using namespace std;

//string的构造函数
void test01(){
    string s1;//默认构造函数

    const char* str="hello world!";
    string s2(str);//char*类型的字符串
    cout<<"s2="<<s2<<endl;

    string s3(s2);//复制构造
    cout<<"s3="<<s3<<endl;

    string s4(10,'a');//n个字符串c初始化
    cout<<"s4="<<s4<<endl;

}

int main(){
    test01();
    system("pause");
    return 0;
}