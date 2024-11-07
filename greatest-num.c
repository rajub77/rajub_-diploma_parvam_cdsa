#include<stdio.h>
int main(){


     int a,b,c;
printf("Enter three numbers:");
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
    printf("a is:  %d\n",a);

if(a>b && a>c){
    printf("a is greatest of 3 nos.");
}
else if(b>a && b>c){
    printf("b is greatest of 3 nos.");
}
else{
    printf("c is greatest of 3 nos.");
}
}