#include<stdio.h>

    void areSame(int a, int b)
{
    if (a ^ b)
        {
          printf("Not Same");
        }
    else{
         printf("Same");
    }

}
int main()
{
     int a,b;

    printf("Enter two numbers\n");
    scanf("%d %d", &a,&b);
    areSame(a, b);
    return 0;
}
