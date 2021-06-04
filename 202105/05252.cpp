#include<iostream>
#include<stdlib.h>
#include<fstream>
using namespace std;
class person
{
    public:
    char  m_name[64];
    int m_age;
};
void test01()
{
    ofstream ofs;
    ofs.open("C:/Users/KF121/Desktop/document/person.txt",ios::out |ios::binary);
    person p={"张三",18};
    ofs.write((const char *)&p,sizeof(person));
    ofs.close();
}

int main()
{
    test01();
    system("pause");
    return 0;
}

