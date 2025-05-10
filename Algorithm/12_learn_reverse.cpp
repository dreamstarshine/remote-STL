#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//掌握常见的排序算法 reverse
void test01(){
    vector<int>v;
    v.push_back(10);
    v.push_back(30);
    v.push_back(20);
    v.push_back(40);
    v.push_back(50);

    for_each(v.begin(),v.end(),[](int val){
        cout<<val<<" ";
    });
    cout<<endl;
    reverse(v.begin(),v.end());
    for_each(v.begin(),v.end(),[](int val){
        cout<<val<<" ";
    });

}

int main(){
    test01();
    return 0;
}