#include <stdio.h>
#include <stdlib.h>
int n;
int num=0;

void QUEEN(int* a,int k,int g,int b,int j){
    for(int i=0;i<n;i++){
        *a=1<<i;
        if(*a&k){continue;}
        if(*a&g){continue;}
        if(*a&b){continue;}
        if(j==n-1){
            num++;
            return;}
        else{
            QUEEN(++a,k|*a,(g|*a)<<1,(b|*a)>>1,j+1);
            a--;
        }
    }
}

int QueenNum(int n){
    int* a=malloc(sizeof(int)*n);
    QUEEN(a,0,0,0,0);
    return num;
}

int main(){
    scanf("%d",&n);
    printf("%d",QueenNum(n));
    while(getchar() != '\n');
    getchar();
    return 0;
}