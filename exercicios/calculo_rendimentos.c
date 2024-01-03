#include <stdio.h>

int main(){
	float deposito, juros, rendimento;
	
	printf("Valor do investimento: \n ");
	scanf("%f", &deposito);
	
	printf("Qual é a taxa? \n");
	scanf("%f", &juros);
	
	rendimento = deposito + (deposito*juros / 100);
	
	printf("Rendimento: %.2f. \n", rendimento-deposito);
	printf("Valor total: %.2f. \n", rendimento);
}
