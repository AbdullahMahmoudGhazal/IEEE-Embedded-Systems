#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function    
    *a = *a + *b;
    int k = ((*a-*b)-*b);
    *b = (k>0)? k : -1*k;
    
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}