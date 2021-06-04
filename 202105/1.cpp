//总结：1.函数定义小括号内的为形参，函数调用传递的是实参
#include<iostream>
#include<stdlib.h>
using namespace std;
//1.定义加法函数
/*int add(int num1,int num2) //函数定义,num1,num2 为形参
{
    int sum=0;
    sum=num1+num2;
    return sum;
}
int main()
{
    //mian 函数中调用add函数
    int a=10;
    int b=20;
    int c=add(a,b);//a,b是实参，调用的时候a,b的值传给形参
    cout<<"c="<<c<<endl;*/
//2.值传递 函数的形参发生改变，不影响实参
/*定义一个函数，实现两个数字交换*/
void swap(int num1,int num2) //如果函数不需要返回值，用void 声明
{
    cout<<"交换前"<<endl;
    cout<<"a="<<num1<<endl;
    cout<<"b="<<num2<<endl;

    int temp=num1;
    num1=num2;
    num2=temp;
    cout<<"交换后"<<endl;
    cout<<"a="<<num1<<endl;
    cout<<"b="<<num2<<endl;

}
int main()
{
   int a=10;
    int b=20;

    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    swap(a,b);
    cout<<"a="<<a<<endl; //值传递 函数的形参发生改变，不影响实参数据
    cout<<"b="<<b<<endl;
   
    system("pause");
    return 0;
}
