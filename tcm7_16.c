7.12 编程练习
#include <stdio.h>
int main()
{
	char ch;
	int space = 0;//空格数
	int line = 0;//行数
	int c = 0;//字符数
 	while ((ch=getchar()) != '#')
	{
		if (ch == ' ')
			space++;
		else if (ch == '\n')
			line++;
		else
			c++;
	}
	printf("空格数为：%d，行数为：%d，字符数为%d", space, line, c);
	return 0;
}
int main()
{
	int c = 0;//统计字符数,字符串下标
	char ch;
	while ((ch = getchar()) != '#')
	{
		c++;
		printf("%6d", ch);
		if (c % 8 == 0)
			printf("\n");
	}
	return 0;
}
int main()
{
	int a=0, b=0, ch=0, sum_a=0, sum_b=0;//统计个数
	int average_a = 0;
	int	average_b= 0;
	scanf("%d", &ch);
	while (ch != 0)
	{
		if (ch % 2 == 0)//偶数个数
		{
			a++;
			sum_a = sum_a + ch;
			average_a = sum_a / a;
		}
		else
		{
			b++;//奇数个数
			sum_b = sum_b + ch;
			average_b = sum_b / b;
		}
		scanf("%d", &ch);
	}
	printf("The sum_a is %d,and average_a is %d\n", sum_a, average_a);
	printf("The sum_b is %d,and average_b is %d\n", sum_b, average_b);
	return 0;
}
int main()
{
	int i = 0;
	char ch;
	while ((ch = getchar()) != '#')
	{
		if (ch == '.')
		{
		   ch = '!';
			i++;
		}
		else if (ch == '!')
		{
			printf("!");
			i++;
		}
		printf("%c", ch);
	}
	printf("Reapeat time is %d", i);
	return 0;
  }
int main()
{
	int i = 0;
	char ch;
	while ((ch = getchar()) != '#')
	{
		switch (ch)
		{
		case '.': 
			ch = '!';
			i++;
			break;
		case '!':
			printf("!");
			i++;
			break;
		default:break;
		}
		printf("%c", ch);
	}
		printf("Reapeat time is %d.", i);
	return 0;
}
int main()
{
	int a = 0;
	char ch;
	char* last_ch = &ch - 1;
	while ((ch = getchar())!='#')
	{
		if ((ch == 'i') && (last_ch == 'e'))
			a++;
		last_ch = ch;
	}
	printf("%d", a);
	return 0;
}
#define salary 10.00
#define overtime 1.5*time
#define base_time 40
#define rate1 0.15
#define rate2 0.2
#define rate3 0.25
int main()
{
	printf("Enter your working time:");
	int time;
	float money,rate,final_money;
	if ((scanf("%d", &time)) > 0)
	{
		if (time <= base_time)
		{
			money = time * salary;
			if (money <= 400)
			     rate = money * rate1;
			else 
			     rate = 300 * rate1 + (money - 300) * rate2;
        }
		else
		{
			money = base_time * salary + (time - base_time) * overtime;
			if (money <= 450)
				rate = 300 * rate1 + (money - 300) * rate2;
			else
			    rate = 300 * rate1 + 150 * rate2 + (money - 450) * rate3;
		}
	}             
	             printf("final_money =%.2f",  money - rate);
	return 0;
}
