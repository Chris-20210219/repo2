#include<iostream>
#include<stdlib.h>
using namespace std;

/*****函数模板****/
//1.两个整型交换函数
/* void swapInt(int &a,int &b) //int &a,&b 是引用函数，传回函数原型
{
    int temp=a;
    a=b;
    b=temp;
}
//2.交换两个浮点型函数
void swapDouble(double &a,double &b)
{
    double temp= a;
    a=b;
    b=temp;
}
//函数模板 
template<typename T> //声明一个模板，告诉编译器后面代码中紧跟的T不要报错，T是一个通用类型

void mySwap(T &a,T &b)
{
    T temp=a;
    a=b;
    b=temp;
}


void test01()//结构函数中嵌套结构函数
{
    int a=10;
    int b=20;
    int c=30;
    //swapInt(a,b);
/*****利用函数模板交换******/
//  两种方式使用模板
//1.自动类型推导
    // mySwap(a,b);

//2.显示指定类型
  /*   mySwap<int>(a,c);
    cout <<"a= "<<a<<endl;
    cout<<"c= "<<c<<endl;
    // double a=1.1;
    // double b=2.2;
    // swapDouble(a,b);
    // cout <<"a= "<<a<<endl;
    // cout<<"b= "<<b<<endl;
}
 */
// int main()
// {
//     test01();
//     system("pause");
//     return 0;

// } 
// 

/*******练手习题******/
/* 1.利用函数模板封装一个排序的函数，可以对不同数据类型数组进行排序
   2.排序规则从大到小，排序算法为选择排序
   3.分别利用char数组和int数组进行测试 */

//交换函数模板
template <typename T>
void mySwap(T &a,T &b)
{
    T temp=a;
    a=b;
    b=temp;
}
//排序算法模板
template<class T>
void mySort(T arr[],int len )//对数组排序等操作还需要输入数组的长度len,数组长度能确定一定是整型，故就不能写为通用类型
{
    for (int i=0;i<len;i++) //遍历数组
    {
        int max=i;   //认定最大值的下标 
        for (int j=i+1;j<len;j++)  //内部循环判定找出真正的最大值
        {
            /***认定的最大值比遍历的最大值小，说明下标为j的元素才是真正的最大值***/
            if(arr[max]<arr[j])
            {
                max=j;//更新最大值的下标
            }

        }
        //找出最大值后max下标与其元素对应起来
        if(max!=i)
        {
            //交换max和i的元素
            mySwap(arr[max],arr[i]);

        }

    }

}
//打印模板
template<class T>
void printArry(T arr[],int len)
{
    for (int i=0;i<len;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


void test02()
{
    //测试char 数组
    char charArr[]="badcfe";
    int num = sizeof(charArr)/sizeof(char);//字符数组长度
    mySort(charArr,num);
    printArry(charArr,num);

}
void test03()
{
    //测试int 数组
    int intArr[]={5,9,1,11,6,2,8};
    int num=sizeof(intArr)/sizeof(int);
    mySort(intArr,num);
    printArry(intArr,num);

}
int main() 
{
    // test02();
    test03();
    system("pause");
    return 0;

} 