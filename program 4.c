#include<stdio.h>
int main()
{
    int n1;
    int n2;
    int start;


    printf("enter the size of array");
    scanf("%d",&n1);

    printf("input the start");
    scanf("%d",&start);

    for(n1=1;n1<=0 && n1>=9;n1++){
    for(n2=n1;n2>0 && n2<=9;n2--){
        printf("%d %d ", n1,n2);
    }
    printf("\n");
    }

       return 0;
}
