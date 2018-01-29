int main() {
 
    double m[12][12], resultado;
    int i, j, cont = 0, l = 12;
    char o;
   
    scanf("%c", &o);
    
    for(i = 0; i < 12; i++){
        for(j = 0; j < 12; j++){
            scanf("%lf", &m[i][j]);
        }
    }

    for(i = 0; i < 12; i++){
        for(j = 0+l; j < 12-l; j++){
            resultado = resultado + m[i][j];
            cont++;
        }
        l--;
    }
    if(o == 'M'){
        resultado = resultado/cont;
    }

    printf("%.1lf\n", resultado);

    return 0;
}
