#include<stdio.h>
void main(){
char *s[]={"black","white","yellow","violtet"};
char **ptr[]={s+3,s+2,s+1,s},***p;
p=ptr;
**++p;
printf("%s\n",*--*++p+3);

}
