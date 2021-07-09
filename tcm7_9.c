//3.11 编程练习
#include <stdio.h>
int main()
{
	char ch = 54;
	printf("十进制：%d，八进制：%o,十六进制：%x", ch, ch, ch);
	char ch = '/023';
	char ch = '/x23';
	char ch = '/r';

	return 0;
}
int main()
{
	int a;
	scanf_s("%d", &a);
	printf("What you wrote just now is %d and char is %c.\n", a,a);
	return 0;
}

int main()
{
	printf("\aStarted by the sudden sound,Sally shouted,\n");
    printf("\"By the Great Pumpkin,what was that!\"");
	return 0;
}

int main()
{
	float a;
	printf("Enter a floating-point value:");
	scanf_s("%f", &a);
	printf("fixed-point notation:%f\n", a);
	printf("exponential notation:%e\n", a);
	printf("p notation:%a\n", a);
	return 0;
}

#define SEC_PER_YEAR 3.156E7
float age,a;
int years();
int main()
{
	printf("What's your age?");
	scanf_s("%f", &age);
	years();
	return 0;
}
int years()
{   
	float a = age * SEC_PER_YEAR;
	printf("The second you have stayed is %e\n ", a);
	return 0;
}
#define quality 3.0e-23
#define quark 950
int main()
{
	float a;
	printf("Enter how many quart:" );
	scanf_s("%f", &a);
	float quantity = a * quark / quality;
	printf("There are %e molecule.\n", quantity);
	return 0;
}
#define _inch_to_cm_ 2.54
int main()
{  
	float inch,cm;
	printf("Enter the inch of your height:");
	scanf_s("%f", &inch);
    cm = inch * _inch_to_cm_;
	printf("Your height is %.2f cm.\n", cm);
    return 0;
}
