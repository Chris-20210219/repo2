#include<iostream>
#include<stdlib.h>
#include<typeinfo>
using namespace std;
/***类模板***/
template<class NameType,class AgeType>
class Person 
{
    public:
    Person(NameType name, AgeType age)
    {
        this->m_age=age;
        this->m_name=name;
    }
    void showPerson()
    {
        cout<<"name:"<<this->m_name<<" "<<"age:"<<this->m_age<<endl;
        cout<<"验证好了没"<<endl;
    }
    NameType m_name;
    AgeType  m_age;


};
/***********1>指定传入的类型****************/
void printPerson1(Person<string,int>&p) //&p引用函数
{   
    p.showPerson();

}
void test01()
{
    Person<string,int>p("liangxingliang",27);
    printPerson1(p); 
}
/************参数模板化************/
template<class T1,class T2>
void printPerson2(Person<T1,T2>&p)
{
    p.showPerson();
    cout<<"T1的类型为： "<<typeid(T1).name()<<endl;
    cout<<"T2的类型为： "<<typeid(T2).name()<<endl;
}
void test02()
{
    Person<string,int>p("lianghaoliang",29);
    printPerson2(p);
}
/*****3>整个类模板化*****/
template <class T>
void printPerson3(T&p)
{
    cout<<"T的类型为： "<<typeid(T).name()<<endl;
    p.showPerson();

}
void test03()
{
    Person<string,int>p("chenglisha",27);
    printPerson3(p);
}

int main()
{
    test01();
    test02();
    test03();
    system("pause");
    return 0;

} 
