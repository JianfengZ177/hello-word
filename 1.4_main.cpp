#include<iostream>
#include "stdio.h"
using namespace std;

class Student{
public:
    //类包含的变量
    string name;
    int age;
    float score;
    //类包含的函数
    void say(){
    	cout << name<<"的年龄是"<<age<<",成绩是"<<score << endl;
    }
};

int main(){
    //通过类来定义变量，即创建对象
    class Student stu1;  //也可以省略关键字class
    //为类的成员变量赋值
    stu1.name = "嚣张";
    stu1.age = 15;
    stu1.score = 92.5f;
    //调用类的成员函数
    stu1.say();
    return 0;
}
