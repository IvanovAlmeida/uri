#include <stdio.h>

int main(){
	float m[12][12], resultado;
	int l, i, j;
	char t;

	scanf("%d", &l);
	getchar();
	scanf("%c", &t);

	for(i = 0; i < 12; i++){
        for(j = 0; j < 12; j++){
            scanf("%f", &m[i][j]);
            //m[i][j] = j+1;
        }
    }

    for(i = 0; i < 12; i++){
        resultado = resultado + m[i][l];
    }

    if(t == 'M'){
    	resultado = resultado/12;
    }

    printf("%.1f\n", resultado);

    return 0;
}
