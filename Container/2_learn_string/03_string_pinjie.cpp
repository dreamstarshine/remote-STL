#include <iostream>
#include <string>
using namespace std;

//string字符串拼接
void test01(){
    string str1="我";
    str1 +="爱玩游戏";//重载+=操作符,加const char*
    cout<<"str1="<<str1<<endl;

    str1+=':';//重载+=操作符,char
    cout<<"str1="<<str1<<endl;

    string str2="LOL DNF";
    str1+=str2;//重载+=操作符,加string
    cout<<"str1="<<str1<<endl;

    string str3="I";
    str3.append("love");//把字符串s连接到当前字符串结尾
    cout<<"str3="<<str3<<endl;

    str3.append("game abcde",4);//把字符串s的前n个字符连接到当前字符串结尾
    cout<<"str3="<<str3<<endl;

    // str3.append(str2);//同operator+=(const string& str)
    // str3.append(str2,0,3);//只截取LOL，参数2从哪个位置开始截取，参数2是截取的字符串个数
    str3.append(str2,4,3);//只截取DNF
    cout<<"str3="<<str3<<endl;
}

int main(){
    test01();
    system("pause");
    return 0;
}