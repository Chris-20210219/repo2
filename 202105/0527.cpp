#include<iostream>
#include<stdlib.h>
using namespace std;
/*****普通函数与函数模板区别****/
//1.普通函数调用可以发生隐式类型转换
/***普通函数***/
int myAdd01(int a,int b)
{
    return a+b;
}
/***2.函数模板，用自动类型推导，不可发生隐式类型转换***/
template<class T>
T myAdd02(T &a,T &b) //T为通用数据类型，即可指int 又可指char
{
    return a+b;
}
void test01()
{
    int a=10;
    int b=20;
    char c='c'; //ASCII码对应为99，a-97
    cout<< myAdd01(a,c)<<endl;  //得出的值为109,自动隐式的将字符转为int型计算
    // cout<< myAdd02(a,c)<<endl; //自动类型推导
    // cout<< myAdd02<int>(a,c)<<endl;//显示指定型目前好像也不能隐式类型转换？    
}

/**** 普通函数与函数模板的调用规则****/
//1.普通函数和模板都可调用时，优先调用普通函数
//2.通过空模板参数列表，强制调用函数模板
//3.函数模板也可以发生重载
/* void myPrint(int a,int b)
{
    cout<<"调用普通函数"<<endl;
}
 */
template<class T>
void myPrint(T a,T b)//4.因为不用发生隐式类型转换，就优先调用函数模板
{
    cout<<"调用函数模板"<<endl;
}
template<class T>
void myPrint(T a,T b,T c)
{
    cout<<"调用重载函数模板"<<endl;
}

void test02()
{
    int a=10;
    int b=20;
    //1.普通函数和模板都可调用时，优先调用普通函数

    // myPrint(a,b);

    //2.通过空模板参数列表，强制调用函数模板

    // myPrint<>(a,b);

    //3.函数模板也可以发生重载

    // myPrint(a,b,100);

    //4.如果函数模板可以产生更好的匹配，优先调用函数模板
    char c1='a';
    char c2='b';
    myPrint(c1,c2);

}


/******函数模板的局限性******/
//模板的通用性并不是万能的,有些特定数据类型，需要用具体化方式做特殊实现
 //2.自定义数据类型
 class Person
 {
     /*属性*/
     public:
      //姓名
      string  m_name;
      //年龄
      int     m_age;

      //构造函数赋初值
      Person(string name,int age)
      {
          this->m_name=name;
          this->m_age = age;
      } 
 };



//1.对比两个数据是否相等
template<class T>
bool  myCompare(T &a,T &b)
{
    if (a==b)
    {
        return true;
    }
    else
    {
        return false;
    }
}
//利用具体化Person 的版本实现代码，具体化优先调用

template<>bool myCompare(Person &p1,Person &p2)//声明模板重载版本
{
    if (p1.m_name==p2.m_name&&p1.m_age==p2.m_age)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void test03() 
{
    int a=10;
    int b=20;
    bool ret =myCompare(a,b);
    if (ret)
    {
        cout<<"a==b"<<endl;
    }
    else
    {
        cout<<"a!=b"<<endl;
    }
}

void test04()
{
    Person p1("xingliang",27);//person 的数据类型，即对象
    Person p2("xingliang",27);
    bool ret = myCompare(p1,p2);
    if (ret)
        {
            cout<<"p1==p2"<<endl;
        }
    else
        {
            cout<<"p1!=p2"<<endl;
        }

}


int main()
{
    // test01();  /*****普通函数与函数模板区别****/
    // test02();
    // test03();
    test04();
    system("pause");
    return 0;
}