#include <stdio.h>

int main(){
	float n1, n2, n3, media;
	
	printf("Informa três notas e obtenha a média: \n");
	scanf("%f", &n1);
	scanf("%f", &n2);
	scanf("%f", &n3);
	
	media = (n1 + n2 + n3) / 3;
	printf("Média airitmética: %f", media);
}
