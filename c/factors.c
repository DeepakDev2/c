#include <stdio.h>
int main()
{
    printf("Enter a number: \n");
    int a,b,c=0;
    scanf("%d",&a);
    printf("Searcin for factors: \n");
    for(b=2;a>b;b++){
        if(a%b==0 && a!=b){
            printf("%d \n",b);
            c++;
        }
        
    
    }
    if(c>0){
        printf(" \n \n%d factors found \n",c);
    }
    if(c==0){
        printf(" \n \n No factors found \n");
    }
    scanf("%d",&c);
}