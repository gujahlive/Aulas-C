/*39 – Escreva um algoritmo em C que receba uma String e depois outra String e
verifique se a segunda string está contida na primeira.
*/
#include<stdio.h>
#include<string.h>
main(){
	char n[20],conf[20],other[20],letra;
	int tam,i;
	printf("Insira um nome: ");
	gets(n);
	tam = strlen(n);
	printf("Insira outro nome: ");
	gets(other);
	for(i=0 ; i<tam; i++){
		if(n[i] == other[i]){
			letra = n[i];
			printf("A letra igual: %c",letra);
		}else printf("Não tem letra igual");
	}
	
}
