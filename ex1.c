#include <stdio.h>

int somaNumeros(int N);

int main()
{
    int n, soma;
    scanf("%d", &n);
    soma = somaNumeros(n);
    printf("Valor N = %d\n",n);
    printf("Somatória dos N primeiros números: %d\n",soma);
    return 0;
}

int somaNumeros(int X){
    int i, res;
    res=0;
    for (i=1; i<= X; i++){
        //res = res + i;
        res += i;
    }
    return res;
}
