#include <stdio.h>

int main(){
	int par[5], impar[5], contPar = 0, contImpar = 0, i, j, x;

	for(i = 0; i < 15; i++){
		scanf("%d", &x);
		if(x%2==0){
			par[contPar] = x;
			contPar++;
		}else{
			impar[contImpar] = x;
			contImpar++;
		}

		if(contPar >=5){
			for(j = 0; j < 5; j++)
				printf("par[%d] = %d\n", j, par[j]);
			contPar = 0;
		}
		if(contImpar >=5){
			for(j = 0; j < 5; j++)
				printf("impar[%d] = %d\n", j, impar[j]);
			contImpar = 0;
		}
	}
	for(j = 0; j < contImpar; j++)
		printf("impar[%d] = %d\n", j, impar[j]);
	for(j = 0; j < contPar; j++)
		printf("par[%d] = %d\n", j, par[j]);

	return 0;
}
