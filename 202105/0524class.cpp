#include<iostream>
#include<stdlib.h>
using namespace std;

class student
{
    public:
    //属性
    string m_name;
    int m_id;
    //行为：显示姓名和学号
    void showstudent()
    {
        cout<<"姓名："<<m_name<<" "<<"学号："<<m_id<<endl;

    }
    void setname(string name)
    {
        m_name=name;
    }
    void setId(int id)
    {
        m_id=id;
    }
};

int main()
{
    //创建对象（创建一个具体学生 实例化对象）
    student s1;
    student s2;
    //给S1对象进行属性赋值操作
    // s1.m_name="张三";
    s1.setname("张三");
    s1.setId(1);
    // s1.m_id=1;
    //显示学生信息
    s1.showstudent();
    s2.m_name="李四";
    s2.m_id=2;
    s2.showstudent();
    system("pause");
    return 0;
}