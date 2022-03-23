#include<stdio.h>
int main()
{
    int num1,num2,i,j,sum=0,k;
    printf("Enter your Two digit : ");
    scanf("%d %d",&num1,&num2);

    for(i=num1; i<=num2; i++)
    {

        for(j=2; j<=9; j++)
        {
            if(i%j==0)
            {
                sum++;
                break;
            }
            sum=0;
        }
        if(sum==0)
        {
            printf(" %d \n",i);
        }
    }

    return 0;
}
