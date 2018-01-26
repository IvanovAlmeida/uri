#include <stdio.h>
 
int main() {
    int n[10], x, i;
    
    scanf("%d", &x);
    
    n[0] = x;
    for(i = 1; i < 10; i++){
        x = x * 2;
        n[i] = x;
    }
    for(i = 0; i < 10; i++){
        printf("N[%d] = %d\n", i, n[i]);
    }
    
    return 0;
}
