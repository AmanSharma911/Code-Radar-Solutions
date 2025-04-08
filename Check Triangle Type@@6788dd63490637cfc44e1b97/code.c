// Your code here...
int a,b,c;
scanf("%d %d %d",&a,&b,&c);
if(a==b && b==c && c==a){printf("Equilateral");}
else if(a!=b && b!=c && c!=a){prinf("Scalene");}
else{printf("Isosceles");}