// Your code here...
#include<stdio.h>
int main(){
    int a,b,result;
    scanf("%d %d",&a,&b);
    int r=~(1<<b);
    result=t&a;
    printf("%d",result);
    return 0;
}