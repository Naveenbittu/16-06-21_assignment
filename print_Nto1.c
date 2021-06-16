/**1. Write a program to Print N to 1 using recursion and also draw the diagram .**/

#include<stdio.h>
void print_Nto1(int n)
{

    if(n==0)
        return ;
    printf("%d\n",n);
    print_Nto1(n-1);

}
int main()
{
    int num;
    printf("enter the number\n");
    scanf("%d",&num);
    print_Nto1(num);

}


