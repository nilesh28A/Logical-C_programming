#include<stdio.h>
#include<stdlib.h>

int main(){
    float *ptr;
    ptr = (float*) calloc(5, sizeof(float));

    ptr[0] = 1;
    ptr[1] = 3;
    ptr[2] = 5;
    ptr[3] = 7;
    ptr[4] = 9;

    ptr = realloc(ptr,8);

    ptr[0] = 1;
    ptr[1] = 3;
    ptr[2] = 5;
    ptr[3] = 7;
    ptr[4] = 9;
    ptr[5] = 7;
    ptr[6] = 3;
    ptr[7] = 1;

    for (int i=0; i<=7; i++){
        printf("%f\n",ptr[i]);
    }

}