#include<stdio.h>
int main(){
// 1. if(x<0){
//         printf("the num is -ve")
//     }

// 2. if(cond){
//     }
//     else{
//     }

// 3. if(cond){
//     }
//     else if(cond){
//     }
int a;
printf("Enter value of a:");
scanf("%d",&a);
    printf("a is:  %d\n",a);
if(a>0){
    printf("a is greater than 0");
}
else if(a==0){
    printf("a is equal to 0");
}
else{
    printf("a is lesser than 0");
}


    
}