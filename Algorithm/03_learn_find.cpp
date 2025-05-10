#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//常用遍历算法 find
//内置数据类型
void test01(){
    vector<int> v;
    for (int i = 0; i < 10; i++) {
        v.push_back(i);
    }
    //查找容器中，是否有5个元素
    vector<int>::iterator it=find(v.begin(),v.end(),5);
    if(it==v.end()){
        cout<<"no find"<<endl;
    }else{
        cout<<"find "<<*it<<endl;
    }
}

//查找 自定义数据类型
class Person{
    public:
    Person(string name,int age){
        this->m_Name=name;
        this->m_Age=age;
    }
    string m_Name;
    int m_Age;
    bool operator==(const Person &p) const{
        if(this->m_Name==p.m_Name && this->m_Age==p.m_Age){
            return true;
        }
        return false;
    }
};

void test02(){
    vector<Person>v;
    Person p1("aaa",10);
    Person p2("bbb",20);
    Person p3("ccc",30);
    Person p4("ddd",40);

    //放入容器中
    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    v.push_back(p4);

    //查找容器中
    vector<Person>::iterator it=find(v.begin(),v.end(),p2);
    if(it==v.end()){
        cout<<"no find"<<endl;
    }else{
        cout<<"find "<<it->m_Name<<" "<<it->m_Age<<endl;
    }
}


int main(){
    // test01();
    test02();
    return 0;
}