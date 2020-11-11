#include<stdio.h>
//Criar um algoritmo para um caixa eletrônico. O usuário entrará com o valor
//a ser retirado da conta e o programa mostrará quantas notas de 2, 5, 10, 20, 50 e 100 reais serão liberadas.
//Lembre-se que não temos moedas, então só podem ser aceitos valores inteiros
//acima e múltiplos de 2. Considerar o menor número de cédulas possível.

int saque, nota2 = 0, nota5 = 0, nota10 = 0, nota20 = 0, nota50 = 0, nota100 = 0;


int main(){
	
	printf("Digite o valor do seu saque: R$");
	scanf("%i", &saque);
	
	while(saque == 3 || saque == 1){
		printf("NAO PODERA SER SACADO ESSE VALOR, POR FAVOR DIGITE SEU SAQUE NOVAMENTE: ");
		scanf("%i", &saque);
	}
	if(saque %2 == 1){
		saque -= 5;
		nota5++;
	}
	while(saque >= 100){
		nota100++;
		saque -= 100;
	}
	while(saque >= 50){
		nota50++;
		saque -= 50;
	}
	while(saque >= 20){
		nota20++;
		saque -= 20;
	}
	while(saque >= 10){
		nota10++;
		saque -= 10;
	}
	while(saque >= 2){
		nota2++;
		saque -= 2;
	}
	printf("\n%i notas de R$100 serao imprimidas", nota100);
	printf("\n%i notas de R$50 serao imprimidas", nota50);
	printf("\n%i notas de R$20 serao imprimidas", nota20);
	printf("\n%i notas de R$10 serao imprimidas", nota10);
	printf("\n%i notas de R$5 serao imprimidas", nota5);
	printf("\n%i notas de R$2 serao imprimidas", nota2);
}
