c语言编程练习 2.12
#include <stdio.h>
int main()
{
	printf("my name is tvchme。\n");
	return 0;
}


void jolly(void);
void deny(void);
int main()
{
	jolly();
	jolly();
	deny();
	return 0;
}
void jolly(void)
{
	printf("For he's a jolly good fellow!\n");
}
void deny(void)
{
	printf("Which nobody can deny!");
}


int br(void);
int ic(void);
int main()
{
	printf("Brazil,Russia,India,China\n");
	 ic();
	 br();
    return 0;
}
int br(void)
{
	printf("Brazil,Russia\n");
	return 0;
}
int ic(void)
{
	printf("India,China\n");
	return 0;
}


int main()
{ 
	int toes = 10;
     printf("toes:%d\n",toes);
     printf("double toes:%d\n", 2 * toes);
     printf("toes' square:%d\n", toes * toes);
    return 0;
}


int main()
{
    printf("Smile!Smile!Smile!\n");
    printf("Smile!Smile!\n");
    printf("Smile!\n");
    return 0;
}


int smile();
int main()
{
	smile(); smile(); smile();
		printf("\n");
		smile(); smile();
		printf("\n");
	smile();
	return 0;
}
int smile()
{
	printf("Smile!");
	return 0;
}


int one_three();
int two();
int main()
{
	printf("starting now:\n");
	one_three();
	printf("done!");
	return 0;
}
int one_three()
{
	printf("one\n");
	two();
	printf("three\n");
	return 0;
}
int two()
{
	printf("two\n");
	return 0;
}
