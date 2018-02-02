#include <stdio.h>

int main(){
	char m[1000], aux;
	int n, i, j, k, len;

	scanf("%d", &n);
	getchar();

	for(i = 0; i < n; i++){

		gets(m);

		len = 0;
		while(m[len] != '\0') len++;

		for(j = 0; j < len; j++)
			if( (m[j] >= 65 && m[j] <= 90) || (m[j] >= 97 && m[j] <= 122) )
				m[j] = m[j]+3;

		for(j = 0; j < len/2; j++){
			aux = m[j];
			m[j] = m[len-j-1];
			m[len-j-1] = aux;
		}

		for(j = len/2; j < len; j++) m[j] = m[j]-1;
		
		printf("%s\n", m);
	}

	return 0;
}
