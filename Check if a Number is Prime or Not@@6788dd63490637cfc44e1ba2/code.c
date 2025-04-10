// Your code here...
#include <stdio.h>
int main(){
    int a;
    int b=0;
    scanf("%d",&a);
    for(int i=2;i<=a-1;i++){
        
        if(a%i==0){b=1;
        break;}
        }
        if(b==0) printf("Prime");
        else printf("Not Prime");
        
    
}