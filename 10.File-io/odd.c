#include<stdio.h>
int main(){
    FILE *odd;
    odd = fopen("odd.txt","w");

    int n;
    printf("enter n:~");
    scanf("%d",&n);

    for(int i=1; i<=n; i++){
        if(i%2!=0){
            fprintf(odd,"%d\n",i);
        }
    }

    fclose(odd);
}