//Leitura de arquivo
#include <stdio.h>
#include <conio.h>
 
int main(void)
{
  FILE *pont_arq;
  char texto_str[20];
 
  //abrindo o arquivo_frase em modo "somente leitura"
  pont_arq = fopen("arquivo_palavra.txt", "r");
 
  //enquanto n�o for fim de arquivo o looping ser� executado
  //e ser� impresso o texto
  while(fgets(texto_str, 20, pont_arq) != NULL)
    printf("%s", texto_str);
 
  //fechando o arquivo
  fclose(pont_arq);
 
  getch();
  return(0);
}
