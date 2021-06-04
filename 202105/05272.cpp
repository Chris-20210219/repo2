#include<iostream>
#include<stdlib.h>
using namespace std;
template<class NameType,class AgeType>
class Person
{
    public:
      NameType  m_name;
      AgeType m_age;
      Person(NameType name,AgeType age)
      {
          this->m_name=name;
          this->m_age=age;
      } 
      void showPerson()
      {
          cout<<"name: "<< this->m_name<<" "<<"age: "<<this->m_age<<endl;
      } 

    
};
 

void test01()
{
    Person<string,int> p("梁星亮",27);//<string,int> 模板参数列表
    p.showPerson();
 
}
int main()
{
    test01();
    system("pause");
    return 0;

}