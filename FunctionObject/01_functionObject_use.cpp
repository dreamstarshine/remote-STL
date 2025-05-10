#include <iostream>
#include <map>
using namespace std;

//- 函数对象在使用时，可以像普通函数那样调用，可以有参数，可以有返回值
class MyAdd
{
public:
    int operator()(int v1,int v2){
        return v1+v2;
    }
};

void test01(){
    MyAdd myAdd;
    cout<<myAdd(10,10)<<endl;
}

 //- 函数对象超出普通函数的概念，函数对象可以有自己的状态
 class MyPrint
{
public:
    MyPrint(){
        this->count=0;
    }
    void operator()(string test){
        cout<<test<<endl;
        this->count++;
    }
    int count;//内部自己状态
};
void test02(){
   
    MyPrint myPrint;
    myPrint("Hello world!");
    myPrint("Hello world!");
    myPrint("Hello world!");
    myPrint("Hello world!");
    cout<<"myPrint:"<<myPrint.count<<endl;
}

//- 函数对象可以作为参数传递
void doPrint(MyPrint& mp,string test){
    mp(test);
}
void test03(){
    MyPrint myPrint;
    doPrint(myPrint,"Hello C++");
}
int main(){
    test03();
    return 0;
}