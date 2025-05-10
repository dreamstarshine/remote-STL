#include <iostream>
#include <set>
using namespace std;

class Person{
    public:
    Person(string name,int age){
        this->m_Name=name;
        this->m_Age=age;
    } 
    string m_Name;
    int m_Age;
};
class comparePerson{
public:
    bool operator()(const Person& p1,const Person& p2)const {
        return p1.m_Age>p2.m_Age;//从大到小排序
    }
};

//set容器排序
void test01(){
    set<Person,comparePerson>s1;
    Person p1("lb",24);
    Person p2("gy",28);
    Person p3("zf",25);
    Person p4("zy",21);
    s1.insert(p1);
    s1.insert(p2);
    s1.insert(p3);
    s1.insert(p4);
    //默认排序是从小到大
    for (set<Person,comparePerson>::iterator it=s1.begin();it!=s1.end();it++){
        cout<<"first:"<<it->m_Name<<" "<<"second:"<<it->m_Age<<" ";
    }
    cout<<endl;
}

int main(){
    test01();
    return 0;
}