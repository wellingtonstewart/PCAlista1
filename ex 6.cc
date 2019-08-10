#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float soma (float num1, float num2);
float subtracao (float num1, float num2);
float multiplicacao(float num1, float num2);
float divisao(float num1, float num2);

int main ()
{
	float n1,n2,o1,o2,o3,o4;
	printf("Digite dois numeros para realizar as operacoes basicas: ");
	scanf("%f %f", &n1, &n2);
	o1 = soma(n1,n2);
	printf("%.2f + %.2f = %.2f\n",n1,n2,o1);
	o2 = subtracao(n1,n2);
	printf("%.2f - %.2f = %.2f\n",n1,n2,o2);
	o3 = multiplicacao(n1,n2);
	printf("%.2f * %.2f = %.2f\n",n1,n2,o3);
	if (n2!=0)
	{
		o4 = divisao (n1,n2);
		printf("%.2f / %.2f = %.2f\n",n1,n2,o4);	
	}
	else
	{
		printf("Nao e possivel dividir por 0!\n");
	}
	system("pause");
	return 0;
}

float soma (float num1, float num2)
{
	return (num1+num2);
}
float subtracao (float num1, float num2)
{
	return (num1-num2);
}
float multiplicacao(float num1, float num2)
{
	return (num1*num2);
}
float divisao(float num1, float num2)
{
	return (num1/num2);
}
