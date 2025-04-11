
#include <stdio.h>
int main(){
    double a,b;
    char d;
    scanf("%d %d %c",&a,&b,&d);
    int sum=a+b;
    int sub=a-b;
    int m=a*b;
    int d=a/b;
    if(d=='+'){printf("%d",sum);}
    else if(d=='-'){printf("%d",sub);}
    else if(d=='*'){printf("%d",m);}
    else if(d=='/'){printf("%d",d);}
    else{printf("error");}
   return 0;}


