#include<stdio.h>
int main()
{
    long long int N,rem,Temp,rev=0;
    int T;
    scanf("%d",&T);
    int i=1;
    while(i<=T)
    {
        scanf("%lld",&N);
        Temp=N;

        while(Temp !=0)
        {
            rem=Temp%10;
            // printf("%lld",rem);
            rev=rev*10+rem;
            Temp/=10;


        }
        //printf("\n");
        printf("%lld\n",rev);
        if (N==rev)
        {
            printf("Palindrome\n");
        }
        else
            printf("Not Palindrome\n");
        rev=0;
        i++;
    }

    return 0;
}
