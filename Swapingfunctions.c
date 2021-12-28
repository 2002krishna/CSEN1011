#include<stdio.h>
void swap(int a,int b)
{
int temp;
temp=a;
a=b;
b=temp;
}
int main()
{
int a=25;
int b=15;
printf("before swap value of a :%d\n",a);
printf("before swap value of b :%d\n",b);
printf("after swap value of a :%d\n",a);
printf("after swap value of b :%d\n",b);
swap(a,b);
}
