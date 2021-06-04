#include<iostream>
using namespace std;
#include<stdlib.h>
#include<fstream>//读写头文件相同

//1.写文件
/* void test01()
{
    ofstream ofs;
    ofs.open("C:Users/KF121/Desktop/document/Bins.txt",ios::out);
    ofs<<"姓名：张三"<<endl;
    ofs<<"性别： 男"<<endl;
    ofs<<"年龄：18"<<endl;
    ofs.close();
} */
//2.读文件
/* void test02()
{
    ifstream ifs;//创建流对象
    ifs.open("C:/Users/KF121/Desktop/document/Bins.txt",ios::in);//打开文件

     //ifs.open()bool类型默认ture,判断文件是否打开成功

    if(!ifs.is_open())
    {
        cout<<"文件打开失败"<<endl;
        return; //程序结束不在运行下面的

    }
}
 */
    //读文件四种方式 都需要用while 循环
    //第一种
    /* char buf[2048]={0};//buf字符数组初始化
    while(ifs>>buf) //ifs读到的数据右移放到buf中，如果读不到则返回假值，循环结束
    {
         cout<<buf<<endl;
    } */

    //第二种

    /*  char buf[2048]={0};
     while(ifs.getline(buf,sizeof(buf)))//对象中的成员函数getline把获取的值存到数组中
     {
         cout<<buf<<endl;
     }*/
     
     //第三种
     string buf;
     while(getline(ifs,buf)) //每行数据读入到buf中
     {
         cout<<buf<<endl;
     }

     //第四种 不建议使用，一个一个字符读取速度太慢
/* 
     char c;
     while((c= ifs.get())!=EOF) // 将读取到的字符存放到字符c中
     {
         cout<<c;
     }
 */

 //3> 二进制方式写文件 （主要利用流对象调用成员函数write）
class Person    //自定义数据类型
     {
         public:
         char m_name[64];
         int m_age;
         
     };
 
void test03()
{
    ofstream ofs;
    ofs.open("C:/Users/KF121/Desktop/document/person.txt",ios::out |ios::binary);
    Person p={"李四",18};
    ofs.write((const char *)&p,sizeof(Person));
    ofs.close();
}

//4>二进制方式读文件
void test04()
{
    ifstream ifs;
    ifs.open("C:/Users/KF121/Desktop/document/person.txt",ios::in |ios::binary); 
    if(!ifs.is_open())
    {
        cout<<"文件打开失败"<<endl;
        return;
    }
    Person p;
    ifs.read((char *)&p,sizeof(Person));
    cout<<"姓名："<<p.m_name<<" "<<"年龄："<<p.m_age<<endl;
    ifs.close();

}

int main ()
{
    // test01(); 写文本文件
    //test02();   读
    // test03(); 二进制写ifs.write()
    test04();   //读ifs.read()
    system("pause");

}