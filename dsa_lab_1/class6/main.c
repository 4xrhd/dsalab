#include <stdio.h>
int main(int argc, char const *argv[])
{
	int n, search,sc,flag=-1;
	int arr[]={12,4,5,6,80};
	printf("enter value:");
scanf("%d",&sc);

n=sizeof(arr)/sizeof(arr[0]);
for (int i = 0; i < n; ++i)
{
	if (arr[i]==sc)
	{
	flag=i;
	}
}

if (flag>=0)
{
printf("%d found at index: %d \n",sc,flag);
}else{
	printf(" %d not found \n",sc);
}

}