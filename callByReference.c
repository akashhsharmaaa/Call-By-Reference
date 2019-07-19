//waf to pass two variable and check lesser value and initialize to 0
#include <stdio.h>
void small_zero(int *x,int *y);
int main(void) {
 int a,b;
 a=10;
 b=20;
 printf("before calling\n");
 printf("a=%d b=%d \n",a,b);
 small_zero(&a,&b);
 printf("after calling\n");
 printf("a=%d b=%d",a,b); 
	return 0;
}
small_zero(int *x,int *y)
{
    if(*x>*y)
    {
        *y=0;
    }
    else
    {
        *x=0;
    }
}


