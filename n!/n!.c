#include <stdio.h>

int factorial(int data)
{
    int sum=1;
    for(int i=2;i<=data;i++)
    {
        sum=sum*i;
    }
    return sum;
}

int main(int argc, char const *argv[])
{
    int data;
    int sum=0;
    printf("请输入数\n");
    scanf("%d",&data);
    for(;data>0;data--)
    {
        sum=sum+factorial(data);
    }
    printf("%d\n",sum);
    return 0;
}
