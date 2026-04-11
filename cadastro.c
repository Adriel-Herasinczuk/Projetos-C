#include <stdio.h>
#include <string.h>

void cadastrarUsuario() {
     char nome [50];
     int idade;

     printf("digite seu nome: ");
     scanf(" %[^\n]", nome);

     printf("digite sua idade: ");
     scanf ("%d", &idade);

     printf("\n--- DADOS CADASTRADOS ---\n");
     scanf(" %[^\n]", nome);
     printf("Idade: %d\n", idade);

     if (idade < 18) {
         printf("Classificação: Menor De idade \n");        
     } else {
        printf("Classificação: maior de idade\n");
     }     
 }  

 int main() {
    int opcao;

    do {
        printf("\n=== MENU ===\n");
        printf("1 - Cadastrar usuario\n");
        printf("0 - sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        switch (opcao) {
           case 1:
                cadastrarUsuario();
                break;
           case 0:
                printf("Saindo...\n");
                break;
           default:
                printf("opção inválida!\n");
                 }
         } while (opcao != 0 );

         return 0;
 }