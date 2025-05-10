#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

//常用查找算法 count
//1.统计内置类型数据
void test01(){
    vector<int> v;
    v.push_back(10);
    v.push_back(40);
    v.push_back(30);
    v.push_back(40);
    v.push_back(20);
    v.push_back(40);

    int num=count(v.begin(),v.end(),40);
    cout<<"numbers of 40 "<<num<<endl;
}
//2.统计自定义类型
class Person{
    public:
    string m_Name;
    int m_Age;
    Person(string name,int age){
        this->m_Name=name;
        this->m_Age=age;
    }
    bool operator==(const Person&p){
        if(this->m_Age == p.m_Age){
            return true;
        }else{
            return false;
        }  
    }
};
void test02(){
    vector<Person>v;
    Person p1("aaa",35);
    Person p2("bbb",20);
    Person p3("ccc",35);
    Person p4("ddd",40);

    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    v.push_back(p4);

    Person p("eee",35);
    int num=count(v.begin(),v.end(),p);
    cout<<"eee same age "<<num<<endl;
}
int main(){
    // test01();
    test02();
    return 0;
}