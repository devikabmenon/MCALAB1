#include<stdio.h>
int b=5;
int display()
{
	int a=10;
	static c=15;
	register d=5;
	 printf("Register variable is d value= %d\n",d);
	 printf("local variable a= %d\n",a);
	 printf("static variable c=%d\n",c);
	 printf("Global variable b=%d\n",b);
}

int main()
{
display();
return 0;
}

