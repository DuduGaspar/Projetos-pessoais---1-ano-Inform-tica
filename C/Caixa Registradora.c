#include<stdio.h>
#include<string.h>
float preco, total;
char resp[1];
int x, y;
main(){
printf("!CAIXA REGISTRADORA!\n\n");
while(x<1){
	printf("Deseja adicionar um produto?\nDigite: S = Sim ou N = N�o\n");
	while(y<1){
		gets(resp);
		if(strcmp(resp,"N")!=0 && strcmp(resp,"S")!=0){
			printf("Digite S ou N! Letra Maiuscula!!!");
		} else {
			y=1;
		}
	}
	if(strcmp(resp,"N")==0){
		x=1;
	}
	if(strcmp(resp,"S")==0){
	printf("Digite o pre�o do produto:\n");
	scanf("%f",&preco);
	total=total+preco;
	}
}
printf("Total a pagar = %0.2f",total);
}
