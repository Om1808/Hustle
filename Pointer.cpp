#include <stdio.h>
#include<iostream>
void update(int *a,int *b) {
    // Complete this function 
    int d , c;  
    d=*a;
    *a=*a+*b;
    c=*b;
    if(d>*b)
    {
        *b=d-c;
    }
    else 
    {
        *b=c-d;
    }
    
   
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
