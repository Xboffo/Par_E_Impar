#include <stdio.h>
#include <stdlib.h>

/* Escreva um programa que permita ao usuario digitar um numero inteiro.
   O Programa deve analisar esse numero e imprimir uma das seguintes mensagens:
   
   "Numero Ímpar" ou "Numero Par" 
   
   			Para conseguir fazer a divisao e saber o resto é necessario usar % */
   			
   			
void ParOuImpar (int n){
	
	if (n % 2 == 0)
		printf ("%d eh um numero par", n);
		else 
		printf ("%d eh um numero impar", n);
}

int main(void) {
	
	int n;
	
	printf ("Por favor digite um numero:\n");
	scanf ("%d", &n);
	
	ParOuImpar(n);
	
	return 0;
}
