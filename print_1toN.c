/**1. Write a program to Print 1 to N using recursion and also draw the diagram .**/

#include<stdio.h>
void print_1toN(int n)
{

    if(n==0)
        return ;
    print_1toN(n-1);
    printf("%d\n",n);

}
int main()
{
    int num;
    printf("enter the number\n");
    scanf("%d",&num);
    print_1toN(num);

}
