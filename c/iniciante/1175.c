#include <stdio.h>
 
int main() {
    
    int n[20], i, aux;
    
    for(i = 0; i < 20; i++){
        scanf("%d", &n[i]);
        //n[i] = i+1;
    }
    for(i = 0; i < 10; i++){
        aux = n[i];
        n[i] = n[20-1-i];
        n[20-1-i] = aux;
    }

    for(i = 0; i < 20; i++){
        printf("N[%d] = %d\n", i, n[i]);
    }

    return 0;
}
