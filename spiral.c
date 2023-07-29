
#include<stdio.h>
int main()
{
	int m,n,i,j;
	printf("Enter the row number: ");
	scanf("%d",&m);
	printf("Enter the column number: ");
	scanf("%d",&n);
	int arr[m][n];
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	int minr=0;
	int maxr=m-1;
	int minc=0;
	int maxc=n-1;
	int TOT=m*n;
	int count=0;
	
	while(count<TOT)
	{
	
		for(j=minc;j<=maxc && count<TOT;j++)
		{
			printf("%d ",arr[minr][j]);
			count++;
		}
		minr++;
	
		for(i=minr;i<=maxr && count<TOT ;i++)
		{
			printf("%d ",arr[i][maxc]);
			count++;
		}
		maxc--;
	
		for(j=maxc;j>=minc && count<TOT ;j--)
		{
			printf("%d ",arr[maxr][j]);
			count++;
		}
		maxr--;
	
		for(i=maxr;i>=minr && count<TOT ;i--)
		{
			printf("%d ",arr[i][minc]);
			count++;
		}
		minc++;
	}
	return 0;
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
