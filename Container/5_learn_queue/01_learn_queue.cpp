#include <iostream>
#include <queue>
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
//队列Queue
void test01(){
    //创建队列
    queue<Person>q;
    //准备数据
    Person p1("ts",30);
    Person p2("swk",1000);
    Person p3("zbj",900);
    Person p4("shs",800);
    //入队
    q.push(p1);
    q.push(p2);
    q.push(p3);
    q.push(p4);
    //判断只要队列不为空，查看队头，查看队尾，出队
    cout<<"q.size()="<<q.size()<<endl;
    while(!q.empty()){
        //查看队头
        cout<<"q.front()="<<q.front().m_Name<<" "<<q.front().m_Age<<" ";
        //查看队尾
        cout<<"q.back()="<<q.back().m_Name<<" "<<q.back().m_Age<<" ";
        //出队
        q.pop();
    }
    cout<<endl;
    cout<<"q.size()="<<q.size()<<endl;
}

int main(){
    test01();
    return 0;
}