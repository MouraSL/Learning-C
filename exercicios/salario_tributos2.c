#include <stdio.h>

int main(){
	float salario;
	printf("Informe o sal�rio base: \n");
	scanf("%f", &salario);
//pemdas
	salario = salario + 600 - salario*0.1;
	printf("Sal�rio a receber: %.2f.", salario);
	
}
