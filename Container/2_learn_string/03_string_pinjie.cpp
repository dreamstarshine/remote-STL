#include <iostream>
#include <string>
using namespace std;

//string�ַ���ƴ��
void test01(){
    string str1="��";
    str1 +="������Ϸ";//����+=������,��const char*
    cout<<"str1="<<str1<<endl;

    str1+=':';//����+=������,char
    cout<<"str1="<<str1<<endl;

    string str2="LOL DNF";
    str1+=str2;//����+=������,��string
    cout<<"str1="<<str1<<endl;

    string str3="I";
    str3.append("love");//���ַ���s���ӵ���ǰ�ַ�����β
    cout<<"str3="<<str3<<endl;

    str3.append("game abcde",4);//���ַ���s��ǰn���ַ����ӵ���ǰ�ַ�����β
    cout<<"str3="<<str3<<endl;

    // str3.append(str2);//ͬoperator+=(const string& str)
    // str3.append(str2,0,3);//ֻ��ȡLOL������2���ĸ�λ�ÿ�ʼ��ȡ������2�ǽ�ȡ���ַ�������
    str3.append(str2,4,3);//ֻ��ȡDNF
    cout<<"str3="<<str3<<endl;
}

int main(){
    test01();
    system("pause");
    return 0;
}