#include <stdio.h>

void prepare(int* x,int* n){
    scanf("%d",x);
    scanf("%d",n);
}

int task2(int x,int n){
    x=x>>(n-1);
    return(x&1);
}

int task3(int x,int n,int t){
    int t1=1<<(n-1);
    if(t==1){return x|t1;}
    else{return x&(~t1);}
}

int task4(int x){
    return (x&(-x));
}

int task5(unsigned int a,unsigned int b){
    int i=0;
    while(a!=b && i<100){
        a>>=1;
        b>>=1;
        i++;
    }
    return a<<i;
}

int hasCommonChar(const char *s1, const char *s2) {
    int mask1 = 0;
    int mask2 = 0;
    for(int i=0;s1[i]!='\0';i++){
        mask1|(1<<(s1[i]-'a'));
    }
    for(int i=0;s2[i]!='\0';i++){
        mask2|(1<<(s2[i]-'a'));
    }
    if(mask1&mask2){return 1;}
    return 0;
}


int main(){
    int x,n,t,a,b;

    prepare(&x,&n);
    printf("%d",task2(x,n));

    prepare(&x,&n);
    scanf("%d",&t);
    printf("%d",task3(x,n,t));

    scanf("%d",&x);
    printf("%d",task4(x));

    prepare(&a,&b);
    a=(unsigned int)a;
    b=(unsigned int)b;
    printf("%d",task5(a,b));

    while(getchar() != '\n');
    getchar();
    return 0;
}