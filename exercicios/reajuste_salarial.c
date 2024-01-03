#include <stdio.h>
int main(){
	float salario, porcent, novo_salario, v_aumento;
	printf("|CALCULO DE REAJUSTE SALARIAL| \n");
	printf("Informe seu salário atual: \n");
	scanf("%f", &salario);
	printf("Informa o percentual de reajuste: \n");
	scanf("%f", &porcent);
	novo_salario = salario + (salario * porcent / 100);
	v_aumento = novo_salario - salario;
	printf("Valor do reajuste: %.2f. \n", v_aumento);
	printf("Novo salário: %.2f.", novo_salario);
}
