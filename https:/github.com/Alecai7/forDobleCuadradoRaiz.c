int main() {
    int numero[5];
    int doble;
    int cuadrado;
    float raizCuadrada;
      
    for (int i=0; i<=4; i++){
        printf ("ingrese un numero: ");
        scanf ("%d", &numero[i]);
    }
    for (int i=0; i<=4; i++){
    doble= 2* numero[i];
    printf ("\nel doble de los numeros es de: %d", doble);
        cuadrado= numero[i]*numero[i];
    printf ("\nel cuadrado de los numeros es de: %d", cuadrado);
    
    raizCuadrada= pow (numero[i],0.5);
    printf ("\nla raiz cuadrada de los numeros es de: %.2f", raizCuadrada);
    }
    return 0;
}
