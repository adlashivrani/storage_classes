#include<stdio.h>
#if 0 //auto storage class
int main()
{
	auto int i = 1;
	{
		auto int i = 2;
		{
    		auto int i = 3;
			printf("%d\n", i);
		}
		printf("%d\n", i);
	}
	printf("%d\n", i);
	return 0;
}
#endif
#if 0 //extern storage class
extern int i = 1
int main() 
{
	int i = 3;
	printf("%d\n", i);
	fun();
	return 0;
}
fun()
{
	printf("%d\n", i);
}
#endif
#if 0 //static storage class
int main()
{
	inc();
	inc();
	inc();
	return 0;
}
inc() 
{
	static int i = 1;
	printf("%d", i);
	i++;
}
#endif
#if 1 //register storage class
int main()
{
	register int i;
	for ( i = 1; i <= 5; i++)		
	{
		printf("%d ", i);
	}
	return 0;
}
#endif
