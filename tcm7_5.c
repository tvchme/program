#include <stdio.h>
int main()
{ 
    int input = 0 ;
	printf("想拿50万年薪吗（1/0)");
	scanf_s("%d", &input);
		if (input == 1)
			printf("努力学习c语言吧\n");
		else
			printf("回家睡觉吧\n");
    return 0;
}
