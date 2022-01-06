#include<stdio.h>
void swap(int*a,int*b){
int temp;
temp=a;
a=b;
b=temp;
}
int main(){
int a,b;
printf("value of a:");
scanf("%d",&a);
printf("value of b:");
scanf("%d",&b);
swap(&a,&b);
printf("a=%d,b=%d",a,b);
}

