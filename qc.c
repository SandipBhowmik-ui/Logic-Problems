#include<stdio.h>
#include<string.h>

void main(){
char str[30]="12345678910111213";
printf("%d",strrchr(str,'2')-str);
}

