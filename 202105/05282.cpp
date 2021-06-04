#include<iostream>
#include<stdlib.h>
using namespace std;
/*******************类模板与函数模板的区别************************/

template<class NameType ,class AgeType>
class Person
{
    public:
        NameType m_Name;
        AgeType m_Aage;
      //构造函数
       Person(NameType name,AgeType age)
       {
           this->m_Name=name;
           this->m_Aage=age;
       } 

    void showPrint()
    {
        cout<<"name: "<<this->m_Name<<" "<<"age: "<<this->m_Aage<<endl;
    } 
};
void test01()
{
    // Person p ("Chris",27);//无法使用自动类型推导

    /****只能使用显示指定类型，模板列表中将将函数类型指明****/
    Person<string,int>p("Chris",27);
    p.showPrint();
}

int main()
{
    test01();
    system("pause");
    return 0;


}