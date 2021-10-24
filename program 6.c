#include<stdio.h>
int main()
{
    int n,s;
    printf("enter the value of n:");
    scanf("%d",&n);
    printf("enter the value ofs:");
    scanf("%d",&s);

    for(int i=0;i<=n;i++)
    {
        for(int j=n;j>=i;j--)
        {
            if(s>9)
                s=1;
            printf("%d",s);
            s++;
        }
        printf("\n");
    }
    return 0;
}
