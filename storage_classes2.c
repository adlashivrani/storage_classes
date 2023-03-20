#include <stdio.h>
int a = 10;
int func1()
{	extern int d;
     printf("a=%d,d=%d\n", a, d);
}
int func2()
{
	extern int d;
    printf("a=%d,d=%d\n", a, d);
}
int func3()
{	extern int c;
    printf("a=%d,c=%d\n", a, c);
}
int func4()
{	extern int b;
    printf("a=%d,b=%d\n", a, b);
}
int func5()
{	
	extern int b;
    printf("a=%d,b=%d", a, b);
}
int b = 20;
int c = 30;
int d = 40;
int main()
{
    func1();
    func2();
    func3();
    func4();
    func5();
    return 0;
}
