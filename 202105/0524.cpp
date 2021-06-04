//函数重载，提高复用性（函数返回值不可以作为函数重载的条件）
#include<iostream>
using namespace std;
#include<stdlib.h>

/*重载满足条件：1. 同一作用域 2. 函数名称相同  3.函数参数类型不同或个数不同或者顺序不同*/
// void func()
// {
//     cout <<"func( 的调用"<<endl;
// }
// void func(int x,int y)
// {
//     cout<<"func(int x,int y)的调用"<<endl;
// }
// void func(double x,int y)
// {
//     cout<<"func(double x,int y)的调用"<<endl;
// }

/* 函数重载注意事项：  1.引用作为重载条件   2.重载碰到默认参数*/
// 1 引用

// void function(int &a)
// {
//     cout<<"function(int &a)"<<endl;
// }
// void function(const int &a)
// {
//     cout<<"function(const int &a)"<<endl;
// }

//2.默认参数

void func(int a,int b=10)
{
    cout<<"func(int a,int b=10)的调用"<<endl;
    cout<<"b= "<<b;
}
void func(int a)
{
    cout<<"func(int a)的调用"<<endl;
}
int main()
{
    //int a=10,b=13;

    // func(a,b);
    //func(31.5,10);
    // int a=10;
    // function (a);
    //function(10);
    /*func(10); //函数重载碰到默认参数，出现二义性，报错尽量必满这种情况*/

    func(10,23);
    system("pause");
    return 0;
}