#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(){
	int a, b, c, d, soma;
	
	printf("Informa 4 valores em sequencia: \n");
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	scanf("%d", &d);
	
	soma = a + b + c + d;
	printf("Valores somados: %d.", soma);
	
	system("pause");
}
