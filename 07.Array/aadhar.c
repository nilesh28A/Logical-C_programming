#include<stdio.h>
int main(){
    int aadhar[5];
    for(int i=1; i<=5; i++){
        printf("%d index:~",i);
        scanf("%d",&aadhar[i]);
    }

    for(int i=1; i<=5; i++){
        printf("%d index:~%d\n",i,aadhar[i]);
    }
}