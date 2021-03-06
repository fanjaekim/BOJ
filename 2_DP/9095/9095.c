#include <stdio.h>
/*
n = 1
1개 
----------
n = 2
1+1
2
2개
----------
n = 3 
1+1+1
1+2
2+1
3
4개 
---------- 
n = 4
1+1+1+1
1+1+2
1+2+1
1+3
2+1+1
2+2
3+1
7개 
---------

*/
int dp[15]={0};
int main(void)
{
	int i,n;
	int T;
	dp[1] = 1; // 1,2,3의 합으로 나타낼 수 있는 경우 1가지(1) 
	dp[2] = 2; // 1,2,3의 합으로 나타낼 수 있는 경우 2가지(1+1,2)
	dp[3] = 4; // 1,2,3의 합으로 나타낼 수 있는 경우 4가지(1+1+1,1+2,2+1,3) 
	for(i=4; i<=15; i++)
	{
		dp[i] = dp[i-1] + dp[i-2] + dp[i-3]; // 4의 경우 1,2,3으로 만들수 있는 모든 값의 합으로 만들어냄. 
	}
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d",&n);
		printf("%d\n",dp[n]);
	}
}
