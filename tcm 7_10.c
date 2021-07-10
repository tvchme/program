5.11编程练习
#include <stdio.h>
int main()
{
	double current, total;
	int i = 1;
	current = total = 1;
	while (i<=64)
	{
		printf("%d      current:%.2e,     total:%.2e\n",i,current,total);
		current = 2 * current;
		total = current + total;
		i++;
	}
	return 0;
}
#define END 'g'
int main()
{
	char n = 'a'-1;
	while (n++ < END)
		printf("%c", n);
	return 0;
}

#define min_to_hour 60
int main()
{
	printf("Convey minutes to hours.\n");
	printf("Please enter the number of minute(<=0 to quit).\n");
	int min;
	scanf("%d", &min);
	while (min> 0)
	{
		float a = min;
		float hour = a / min_to_hour;
		printf("%dmin is equal to %.1fhour\n", min, hour);
		scanf("%d", &min);
	}
	return 0;
}

int main()
{
	int number;
	printf("Enter a number,comeputer will give you next 10 number.");
	scanf("%d", &number);
	int i = 0;
	while (i++ <= 10)
	{
		printf("%d\n", number);
			number++;
	}
	return 0;
#define LEFT day%7
int main()
{
	int day,left;
	printf("Please enter a number of day:");
	scanf("%d", &day);
	int week = day / 7;
	printf("%d days are %d weeks,%d days.",day, week,LEFT);
	return 0;
}
#define INCH_TO_CM 2.54
#define FEET_TO_CM 30.48
int main()
{
	int CM;
	float inch;
	printf("Enter a height in centimeters(<=0 to quit):");
	scanf("%d",&CM);
	while (CM > 0)
	{
		float cm = CM;
		int feet = CM / FEET_TO_CM;
		inch = (CM - feet * FEET_TO_CM) / INCH_TO_CM;
		printf("%.1fcm = %d feet,%.1finches\n", cm, feet, inch);
		printf("\nEnter a height in centimeters(<=0 to quit):");
		scanf("%d", &CM);
	}
	printf("Game is over.");
	return 0;
}

int main()
{
	printf("Enter a day to computer your total money:");
	int num;
	scanf("%d", &num);
	int count = 1;
	int i = 0;
	int sum=0;
	while (i++< num) {
		sum = count + sum;
		count = count * 2;
		
	}
	printf("Your total money is %d.", sum);

	return 0;
}

int main()
{
	printf("Enter a day to computer your total money:");
	int num;
	scanf("%d", &num);
	int count = 0;
	int i = 0;
	int sum= 0;
	int c = 0;
	while (i++< num) {
		count++;
		sum = count * count + sum;
		
	}
	printf("Your total money is %d.", sum);

	return 0;
}
void cube();
double t, n;
int main()
{
	printf("Please enter a type of double number:");
	scanf("%lf", &n);
	cube();
	
	return 0;
}
void cube()
{
	 t = n * n * n;
	 printf("cube n=%.3lf", t);
}
int main()
{
	int a, b, c;
	printf("Enter an integer to serve as the second operand:");
	scanf("%d", &a);
	printf("Now,enter the first operand:");
	scanf("%d", &b);
	
	while( b > 0) 
	{
		c = b % a;
		printf("%d %% %d is %d", b, a, c);
		printf("\nEnter next number for first operand(<=0 to quit):");
		scanf("%d",&b);
	}
	
		return 0;
}
