#include <stdio.h>
 
int main() {
 
    float m[12][12], resultado;
    int i, j, cont = 0, l = 0;
    char o;
   
    scanf("%c", &o);
    
    for(i = 0; i < 12; i++){
        for(j = 0; j < 12; j++){
            scanf("%f", &m[i][j]);
        }
    }
 
    for(i = 0; i < 11; i++){
        l++;
        for(j = l; j < 12; j++){
            //m[i][j] = 0; 
            resultado = resultado + m[i][j];
            cont++;
        }
    }

    if(o == 'M'){
        resultado = resultado/cont;
    }

    printf("%.1f\n", resultado);

    return 0;
}
