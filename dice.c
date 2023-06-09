#include<stdio.h>
#include<stdlib.h>

int main(){
    int a,b;
    printf("Rolling dice...\n");
    a = rand()%6 +1;
    b = rand()%6 +1;
    printf("Die 1: %d\nDie 2: %d\nTotal value: %d\n",a,b,a+b);
}