// Your code here...
#include <stdio.h>
int main(){
    scanf("%d %d",&a,&b);
    a=a&(~(1<<b));
    printf("%d",a);
    
}