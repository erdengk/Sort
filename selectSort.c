#include <stdio.h>
void fun(int a[])
{
	int i,j=0,t;
	printf("����ǰ\n");
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
				printf("����ǰ�����±�%d,%d\n",i,j);
				//���ÿ�ε�   �����±�   ���Կ�����  i �ͺ���ÿһ�����ڱȽ�  Ȼ����н���
				printf("����ǰ�����ֵ%d,%d\n",a[i],a[j]);
				t= a[j];
				a[j]=a[i];
				a[i]=t;	
				printf("����������±�%d,%d\n",i,j);
				//���ÿ�ε�   �����±�   ���Կ�����  i �ͺ���ÿһ�����ڱȽ�  Ȼ����н���
				printf("����������ֵ%d,%d\n",a[i],a[j]);			
				printf("\n");
			}
		}
	}
	printf("\n�����\n");
} 
int main()
{
	int a[9] = {9,8,7,6,85,4,3,2,1};
//	int i,j=0,t;
//	printf("����ǰ\n");
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
//				printf("����ǰ�����±�%d,%d\n",i,j);
//				//���ÿ�ε�   �����±�   ���Կ�����  i �ͺ���ÿһ�����ڱȽ�  Ȼ����н���
//				printf("����ǰ�����ֵ%d,%d\n",a[i],a[j]);
//				t= a[j];
//				a[j]=a[i];
//				a[i]=t;	
//				printf("����������±�%d,%d\n",i,j);
//				//���ÿ�ε�   �����±�   ���Կ�����  i �ͺ���ÿһ�����ڱȽ�  Ȼ����н���
//				printf("����������ֵ%d,%d\n",a[i],a[j]);			
//				printf("\n");
//			}
//		}
//	}
	fun(a);
	printf("\n�����\n");
	int i;
	for(i=0;i<9;i++)
	{
		printf("%d-",a[i]);
	}	 
	return 0;
	//123
} 
