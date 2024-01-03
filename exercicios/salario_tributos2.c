#include <stdio.h>

int main(){
	float salario;
	printf("Informe o salário base: \n");
	scanf("%f", &salario);
//pemdas
	salario = salario + 600 - salario*0.1;
	printf("Salário a receber: %.2f.", salario);
	
}
