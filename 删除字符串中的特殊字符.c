#include <stdio.h>

// 题目要求
// 删除字符串中的除字母外的字符。

int main()
{
	char line[150];
	int i,j;
	printf("输入一个字符串：\n");
	fgets(line,(sizeof line / sizeof line[0]),stdin);

	for(i=0;line[i] != '\0';++i)
	{
		while(!((line[i] >= 'a' && line[i] <= 'z') || (line[i] >= 'A' && line[i] <= 'Z') || line[i] == '\0'))
		{
			for(j=i;line[j] != '\0';++j)
			{
				line[j]=line[j+i];
			}
			line[j]='\0';
		}
	}

	printf("输出：");
	puts(line);

	return 0;
}