//Y=x-x^3/3!+x^5/5!-
#include<stdio.h>
int main(){
   int x, n, c;
    printf("Enter a value for x");
    scanf("%d", &x);
    printf("Enter a value for n");
    scanf("%d", &n);
    int fc=1, sign=1;
    float r=0, y=0;
    for(c=1;c<=n;c++){
        fc=fc*c;
        if(c%2!=0){
            int pw=1;
            for(int p=1; p<=c;p++){
                pw=pw*x;
            }
        r=sign*1.0*pw/fc;
        y=y+r;
        sign=sign*-1;
        }
    }
     printf("Y= %.3f", y);
        return 0;
}
