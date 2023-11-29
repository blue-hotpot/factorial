#include <stdio.h>

int main(int argc, char const *argv[])
{
    int data;
    int ret=1;
    int sum=0;
    printf("请输入数");
    scanf("%d",&data);
    for(int i=1;i<=data;i++)
    {
        ret=ret*i;
        sum=sum+ret;
    }
    printf("sum=%d",sum);
    return 0;
}
