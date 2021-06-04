#include<iostream>
#include<stdlib.h>
#include<vector>
#include<algorithm> //标准算法的头文件
using namespace std;

/*****************vector容器存放内置数据类型（相当于数组）******************/
/* void myPrint(int val)
{
    cout<<val<<endl;
}
void test01()
{
    //创建一个vector容器，数组
    vector<int> v;
    // 向容器中插入数据
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40); 
    // 通过迭代器访问容器中的数据
   /*  vector<int>::iterator itBegin=v.begin();//起始迭代器 指向容器中的第一个元素
    vector<int>::iterator itEnd = v.end();//结束迭代器  指向容器最后一个元素的下一个位置

    // 第一种遍历方式
    while(itBegin != itEnd)
    {
        cout<<*itBegin<<endl;
        itBegin++;
    } */


    // 第二种循环遍历
    /* for (vector<int>::iterator it=v.begin();it!=v.end();it++)
    {
        cout<<*it<<endl;
    } */


    // 第三种遍历方式 利用STL提供遍历算法 for_each
  /*   for_each(v.begin(),v.end(),myPrint);//用到了函数回调

} */
/*********************vector容器中存放自定义数据类型*****************************/
 class Person 
{
   public:
       string m_Name;
       int m_age;
       Person(string name,int age)//构造函数
       {
           this->m_Name=name;
           this->m_age=age;
           
       }
};
/* void test02()
{
    //创建一个vector容器
    vector<Person>v;
     Person p1("aaa",10);
     Person p2("aaa",20);
     Person p3("aaa",30);
     Person p4("aaa",40);
     Person p5("aaa",50);
     //向容器中添加数据
     v.push_back(p1);
     v.push_back(p2);
     v.push_back(p3);
     v.push_back(p4);
     v.push_back(p5);
     //遍历容器中的数据
     for (vector<Person>::iterator it=v.begin();it!=v.end();it++)
     {
        // cout<<"姓名: "<<it->m_Name<<"年龄："<<it->m_age<<endl;
        /**********it可以视为指针，获取数组中的数据有两种方式：1>(*it).m_Name&(*it).m_age  2>it->m_Name&it->m_age***********/
     /*    cout<<"姓名: "<<(*it).m_Name<<"年龄："<<(*it).m_age<<endl;
     }
}
 */ 
/**********************vector容器中存放自定义数据类型: 指针*****************************/
void test03()
{
    //创建一个vector容器
    vector<Person*>v; //指针变量定义语法： 数据类型 * 变量名；
     Person p1("aaa",10);
     Person p2("aaa",20);
     Person p3("aaa",30);
     Person p4("aaa",40);
     Person p5("aaa",50);
     //向容器中添加地址
     v.push_back(&p1); 
     v.push_back(&p2);
     v.push_back(&p3);
     v.push_back(&p4);
     v.push_back(&p5);
     //遍历容器中的数据
     for (vector<Person*>::iterator it=v.begin();it!=v.end();it++)
     {
         cout<<"：：姓名: "<<(*it)->m_Name<<"年龄："<<(*it)->m_age<<endl; //*it表示指针
     }
}
int main()
{
    // test01();
    //test02();
    test03();
    system("pause");
    return 0;
}