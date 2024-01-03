#include <stdio.h>

int main(){
	float salario;
	printf("Insira o salário base: \n");
	scanf("%f", &salario);
	// pemdas
	salario = salario +(salario * 0.05 - salario * 0.07);
	printf("Salario a receber: %.2f.",salario);
}
