#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int foo(int a){
int c;
int temp=a;
for(c=0;temp;c++){
    temp&=temp=1;
}
return c;
}

int main()
{
printf("%d",foo(2));
return 0;
}
