#include <iostream>
#include <vector>
using namespace std;

//容器嵌套容器
void test01(){
    vector<vector<int>> v;

    //创建小容器
    vector<int> v1{1,2,3,4};
    vector<int> v2{2,3,4,5};
    vector<int> v3{3,4,5,6};
    vector<int> v4{4,5,6,7};

    //将小容器插入到大容器中那个
    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);
    v.push_back(v4);

    //通过大容器，把所有数据都遍历一遍
    for(vector<vector<int>>::iterator it=v.begin();it!=v.end();it++){
        //(*it)是容器vector<int>类型
        for(vector<int>::iterator vit=(*it).begin();vit!=(*it).end();vit++){
            cout<<*vit<<" ";
        }
        cout<<endl;

    }
}

int main(){
    test01();
    system("pause");
    return 0;
}