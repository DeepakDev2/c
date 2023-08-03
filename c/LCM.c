#include<stdio.h>
int main()
{
    printf("Enter a number: \n");
    int a,b=2;
    scanf("%d",&a);
    for(b=2;a>=b;b++)
    {
        if(a%b==0){
            printf("%d \n",b);
            a = a/b ;
            b=1;
        }
    }


}