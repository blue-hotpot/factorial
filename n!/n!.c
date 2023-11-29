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

int factorial1(int value)
{
    if(value<=1)
        return 1;
    return (value*factorial(value-1));
}

int main(int argc, char const *argv[])
{
    int data;
    int sum=0;
    printf("请输入数\n");
    scanf("%d",&data);
    // for(;data>0;data--)
    // {
    //     sum=sum+factorial1(data);
    // }
    sum=factorial1(data);
    printf("%d\n",sum);
    return 0;
}
