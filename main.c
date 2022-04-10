#include <stdio.h>

int main(void) {
  
  int idade, quantidade = 1, soma = 0, media = 0;
  int maior = 0, menor = 0, i = 0;

  do{
    printf("Entre com a idade %d (Digite 0 para terminar):\n", quantidade++);
    scanf("%d", &idade);
    soma = soma + idade;
    if(i == 0){
       maior = idade;
       menor = idade;
       i++;
    }else if(idade > maior){
       maior = idade;
    }else if(idade < menor && idade != 0){
       menor = idade;
    }
  }while(idade !=  0);
 
    if(idade >= 0){
      printf("Foram inseridas %d idades\n\n", quantidade-2);
    }
 
     if(quantidade > 0){
      quantidade = quantidade - 2;
      media = (soma/quantidade);
      printf("A média de idades é: %d\n", media);
     } 
   
      printf("A maior idade é %d\n", maior);
      printf("A menor idade é: %d\n", menor);
     

  return 0;
}