#include <iostream>
using namespace std;
int main()
{
    int arr[]={5,8,2,10,7,15,13,11,20,18};
	int n=10;
	//选择排序
	for(int i=0;i<n-1;i++)
	{
	 int minlndex=i;
	 for(int j= i+1;j<n;j++)
	 {
	  if(arr[j]<arr[minIndex])
	  {
		minIndex=j;
	  }
	 }
	 //交换
     int temp=arr[i];
	 arr[i]=arr[minIndex];
	}
	//输入排序后结果
	for(int i=0;i<n;i++)
	{
	  cout <<arr[i]<<"";
	}
    count <<endl;
	return 0;
}