#include<stdio.h>
int size, start;


printf("enter  the start value");
scanf("%d",&start);

printf("enter size:");
scanf("%d",&size);
if(start<=9 && size<=9)
{
    for(int i=1;i<=size;i++)
    {
        for(int j=1;j<=size+1-i;j++)
        {
            printf("%d",start);
            start++;

            if(start==10)
                start=1;

        }
        printf("\n");
    }
    return 0;
}
