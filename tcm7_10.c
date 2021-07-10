4.8编程练习
#include <stdio.h>
#define BOOK "War and peace"
int main()
{
	float coast = 12.99;
	float percent = 80.0;
	printf("This copy of \"%s\" sells for $%.2f.\n", BOOK,coast);
	printf("That is %.0f%% of list.",percent);
	return 0;
}
int main()
{
	int a;
	scanf("%d",&a);
	float b;
	scanf("%e", &b);
	char c[20];
	scanf("%s", c);
	int d1;
	char d2[10];
	scanf("%s %d", d2, &d1);
	int e1;
	char e2[10];
	scanf("%*s %d", e2, &e1);
	return 0;
}

int main()
{
	char first_name[10];
	char last_name[10];
	printf("your first name:");
	scanf("%s", first_name);
	printf("\nyour last name:");
	scanf("%s", last_name);
	printf("Welcome!%s,%s", first_name, last_name);
	return 0;
}
int main()
{
	char name[20];
	printf("your name :" );
	scanf("%s", name);
	printf("Welcome, \"%s \"\n",name);
	printf("\"%20s\"\n", name);
	printf("\"%-20s\"\n", name);
	printf("\"%13s\"", name);
   return 0;
}
int main()
{
	float a;
	scanf("%f", &a);
	printf("The input is %.1f or %.1e\n", a,a);
	float b;
	scanf("%f", &b);
	printf("The input is %.3f or %.3E\n", b, b);
	return 0;
}
#define cm_to_m 100 
int main()
{
	char name[10];
	float height;
	printf("your name:");
	scanf("%s", name);
	printf("\nyour height:");
	scanf("%f", &height);
	float Height = height / cm_to_m;
	printf("\n%s,you are %.3fm tall", name,Height);

	return 0;

int main()
{
	float Mb,MB,Time;
	printf("Please input the speed（Mb/s）:");
	scanf("%f", &Mb);
	printf("Please input the size（MB）:");
	scanf("%f", &MB);
	Time = MB * 8 / Mb;
	printf("At %.2f megabits per second,a file of %.2f megabytes\n",Mb,MB);
	printf("downloads in %.2f seconds", Time);

	return 0;
}
#include <string.h>
int main()
{
	char first_name[20];
	char last_name[20];
	printf("Please enter your first name :");
	scanf("%s", first_name);
	printf("\nPlease enter your last name :");
	scanf("%s", last_name);
	printf("%s %s", first_name, last_name);
	printf("\n%*d %*d", 
	strlen(first_name), strlen(first_name), strlen(last_name), strlen(last_name));
	return 0;
}

#include <float.h>
int main()
{
	double a = 1.0 / 3.0;
	float b = 1.0 / 3.0;
	printf("%.6f,%.12f,%.16f\n", a, a, a);
	printf("%.6f,%.12f,%.16f\n", b, b, b);
	printf("%d,%d", FLT_DIG, DBL_DIG);
	return 0;
}
#define gallon_to_liter 3.785
#define miles_to_km 1.609
int main()
{
	float miles, gallon;
	printf("Enter how far you have driven(miles):");
	scanf("%f", &miles);
	printf("Enter how much oil you have consumed(gallon):");
	scanf("%f", &gallon);
	printf("In USA,your oil wear is %.1fM/G\n", miles / gallon);
	printf("In Europe,your oil wear is %.1fL/km",
		(gallon * gallon_to_liter) / (miles * miles_to_km / 100));
	return 0;
}
