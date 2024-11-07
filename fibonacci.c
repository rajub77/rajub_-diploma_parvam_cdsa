#include<stdio.h>
int main(){
    int n1=0;
    int n2=1;
    int n5=5;//scanf 10
    for(int i=1; i<=n; i++){
        int n3=n1+n2;
        printf("%d ",n1);//0
        n1=n2;//1
        n2=n3;//1
    }
    return 0;
}