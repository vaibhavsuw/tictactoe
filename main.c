#include <stdio.h>
int main()
{

    int c,i,sum,value;
    printf("Enter the no value: ");
    scanf("%d",&c);
    printf("Enter %d values\n",c);
    for (i=1;i<=c;i++)
    {
        scanf("%d", &value);
        sum = sum + value;
    }
    printf("sum :%d",sum);
}
