#include<iostream>
#include "stdio.h"
using namespace std;

class Student{
public:
    //������ı���
    string name;
    int age;
    float score;
    //������ĺ���
    void say(){
    	cout << name<<"��������"<<age<<",�ɼ���"<<score << endl;
    }
};

int main(){
    //ͨ�������������������������
    class Student stu1;  //Ҳ����ʡ�Թؼ���class
    //Ϊ��ĳ�Ա������ֵ
    stu1.name = "����";
    stu1.age = 15;
    stu1.score = 92.5f;
    //������ĳ�Ա����
    stu1.say();
    return 0;
}
