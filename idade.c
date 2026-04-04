#include <stdio.h>

int main() {
    int idade;
    
    printf("digite sua idade: ");
    scanf("%d", &idade);
        
  if (idade >= 60) {
      printf("você é idoso\n");
  }   else if (idade >= 18) {
      printf("você é adulto\n");
  }   else {
      printf("você é menor de idade\n");
  }

     return 0;


}