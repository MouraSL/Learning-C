#include <stdio.h>

int main(){
	float salario, aumento;
	printf("Informe o salário: \n");
	scanf("%f", &salario);
	
	aumento = (25.0 / salario) * 100.0 + salario;

	printf("Salario com aumento: %.2f. \n", aumento);
}
