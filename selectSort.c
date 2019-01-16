#include <stdio.h>
void fun(int a[])
{
	int i,j=0,t;
	printf("排序前\n");
	for(i=0;i<9;i++)
	{
		printf("%d-",a[i]);
	}
	printf("\n");
	for(i=0;i<9;i++)
	{
		for(j=i+1;j<9;j++)
		{
			//printf("%d,%d\n",i,j);
			if(a[i]>a[j]) 
			{
				printf("排序前数组下标%d,%d\n",i,j);
				//输出每次的   数组下标   可以看出是  i 和后面每一个数在比较  然后进行交换
				printf("排序前数组的值%d,%d\n",a[i],a[j]);
				t= a[j];
				a[j]=a[i];
				a[i]=t;	
				printf("排序后数组下标%d,%d\n",i,j);
				//输出每次的   数组下标   可以看出是  i 和后面每一个数在比较  然后进行交换
				printf("排序后数组的值%d,%d\n",a[i],a[j]);			
				printf("\n");
			}
		}
	}
	printf("\n排序后\n");
} 
int main()
{
	int a[9] = {9,8,7,6,85,4,3,2,1};
//	int i,j=0,t;
//	printf("排序前\n");
//	for(i=0;i<9;i++)
//	{
//		printf("%d-",a[i]);
//	}
//	printf("\n");
//	for(i=0;i<9;i++)
//	{
//		for(j=i+1;j<9;j++)
//		{
//			//printf("%d,%d\n",i,j);
//			if(a[i]>a[j]) 
//			{
//				printf("排序前数组下标%d,%d\n",i,j);
//				//输出每次的   数组下标   可以看出是  i 和后面每一个数在比较  然后进行交换
//				printf("排序前数组的值%d,%d\n",a[i],a[j]);
//				t= a[j];
//				a[j]=a[i];
//				a[i]=t;	
//				printf("排序后数组下标%d,%d\n",i,j);
//				//输出每次的   数组下标   可以看出是  i 和后面每一个数在比较  然后进行交换
//				printf("排序后数组的值%d,%d\n",a[i],a[j]);			
//				printf("\n");
//			}
//		}
//	}
	fun(a);
	printf("\n排序后\n");
	int i;
	for(i=0;i<9;i++)
	{
		printf("%d-",a[i]);
	}	 
	return 0;
	//123
} 
