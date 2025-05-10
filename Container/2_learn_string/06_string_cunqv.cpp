#include <iostream>
#include <string>
using namespace std;

//string字符串存取
void test01(){
   string str="hello";
   cout<<"str="<<str<<endl;

   //1.通过[]访问单个字符
   for(int i=0;i<str.size();i++){
       cout<<str[i]<<" ";
   }
   cout<<endl;
   //2.通过at()访问单个字符
   for(int i=0;i<str.size();i++){
    cout<<str.at(i)<<" ";
    }
    cout<<endl;

    //修改单个字符
    str[0]='x';//通过[]修改单个字符
    cout<<"str="<<str<<endl;

    str.at(1)='y';//通过at()修改单个字符
    cout<<"str="<<str<<endl;
}


int main(){
    test01();
    system("pause");
    return 0;
}