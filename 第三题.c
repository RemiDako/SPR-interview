#include <stdlib.h>
#include <stdio.h>
#include <time.h> // ʹ�õ�ǰʱ��������

void swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}

int main()
{
	int i;
	int index[]={0,1,2,3};
	char *name[]={"С��","С��","С��","С��"};
	srand((unsigned)time( NULL ) ); // ��ʼ�������
	for(i=4;i>0;i--)
	{
		swap(&index[i-1],&index[rand()%i]);
	}
	for(i=1;i<=4;i++)
	{
		printf("%d %s\n",i,name[index[i-1]]);
	}
	
	return 0;
}
