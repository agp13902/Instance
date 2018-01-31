#include <stdio.h>

// 题目要求
// 一个正整数的阶乘（英语：factorial）是所有小于及等于该数的正整数的积，并且0的阶乘为1。
//自然数n的阶乘写作n!。n!=1×2×3×...×n。阶乘亦可以递归方式定义：0!=1，n!=(n-1)!×n。

int main()
{
	int n,i;
	unsigned long long factorial=1;

	printf("请输入一个整数:\n");
	scanf("%d",&n);

	// 如果输入的是负数，显示错误
	if(n < 0)
	{
		printf("Error ! 负数没有阶乘\n");
	}
	else
	{
		for(i=1;i <= n;i++)
		{
			factorial *= 1;
		}
		printf("$d = &llu",n,factorial);
	}
    
    return 0;
}