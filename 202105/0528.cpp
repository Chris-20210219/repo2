#include<iostream>
#include<stdlib.h>
using namespace std;

/* int main()
{
    int arr2[5]={10,20,30,40,50};
    //利用循环 输出数组中的元素 数组元素下标的最大值=数组长度-1，循环条件一定是 i<len(数组长度)
    for (int i=0;i<5;i++) 
    {
        cout<<arr2[i]<<endl;
    }
    system("pause");
    return 0;

} */

/* int main()
{
	//将数组{4，2，8，0，5，7，1，3，9}进行升序排序
	
	
		int arr[9]={4,2,8,0,5,7,1,3,9};  //数组初始化
		
		for (int i=0;i<9-1;i++) //冒泡排序循环条件 i<元素个数-1
		{
			for(int j=0;j<9-1-i;j++)
			{
				if (arr[j]>arr[j+1])
				{
					int temp=arr[j];
					
					arr[j]=arr[j+1];
					
					arr[j+1]=temp;
				}
				
			}
			
		}
		
		for(int i=0;i<9;i++)
			
		{
			cout<<arr[i]<<endl;
		}
		
	system("pause");
	return 0;

} */
int main()
{
	
	char arr[]="fkwacdb";
	
	int len=sizeof(arr)/sizeof(arr[0]); //元素个数
	
	for (int i=0;i<len-1;i++)
	{
		for (int j=0;j<len-1-i;j++)
		{
			if (arr[j]<arr[j+1])
			{
				char temp=arr[j];
				
				arr[j]=arr[j+1];
				
				arr[j+1]=temp;
				
			}
		}
		
	}
    for (int i=0;i<len;i++)
		
	{
		cout<<arr[i]<<endl;
	}
		
	system("pause");
	return 0;
}