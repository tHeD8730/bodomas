#include<stdio.h>
int main()
{
int a,b;
char c;
scanf("%d", &a);
scanf(" %c", &c);
scanf("%d", &b);
switch (c)
{
case '+': printf("Sum of both numbers are %d", a+b);
break;
case '-': printf("Difference of both numbers are %d", a-b);
break;
case '*': printf("Product of both numbers are %d", a*b);
break;
case '/': printf("Divide of both numbers are %d", a/d);
break;
}

}