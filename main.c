#include <stdio.h>
#include <time.h>
int portaPremiada, portaEsolhida, portaVazia;
char opcao;



srand(time(NULL));
 int portaPremiada = rand() % 3 + 1;
  printf (" A porta premiada é: %d", portaPremiada);

  printf ("Bem vindo ao jogo Monty Fall!");
  printf (" Escolha uma porta de 1 a 3:");
  scanf ("%d", &portaEsolhida);
if (portaEcolhida =0; >=4)
  break;
// Apresentador abre a porta vazia
 
printf(" Você deseja trocar de porta? (s/n)");
  if (opcao == 's')
   printf ("Para qual porta deseja troca?:");
  scanf( "%d", &portaEscolhida);
if (portaEscolhida == portaPremiada);
printf ("Você acertou!")
  else{
prnitf ("Você errou!"); 
  }
    
  }
  
  return 0;
}