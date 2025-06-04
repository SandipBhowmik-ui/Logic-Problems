#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct pid_tag{
unsigned int inactive :1;
unsigned int :1;
unsigned int refcount :6;
unsigned int :0;
struct pid_tag *link;
short pid_id;
short :4;
int :0;
int :8;
};
main(){
struct pid_tag p;
printf("%d",sizeof(p));
}
