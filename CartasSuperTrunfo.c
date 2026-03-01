#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  int Carta = 2;
  char Estado = 'A';
  char Código[10] = "A02";
  char Cidade[50] = "Ji-Parana";
  int População = 139359;
  float Área = 6896.65;
  float PIB = 5800000000;
  int Turístico = 4;

  printf("Carta %d\n", Carta);
  printf("Estado: %c\n", Estado);
  printf("Código: %s\n", Código);
  printf("Nome da Cidade: %s\n", Cidade);
  printf("Polupação: %d\n", População);
  printf("Área: %.2fkm²\n", Área);
  printf("PIB: %.2f bilhões\n", PIB);
  printf("Número de Pontos Turísticos: %i\n", Turístico);

  float Dencidade;
  float PIPperCapito;

   Dencidade = (População / Área);
   printf("Dencidade Populacional: %.2f hab/km²\n", Dencidade);
 
   PIPperCapito = (PIB / População);
   printf("PIB per Capita: %.2f reais\n", PIPperCapito);

                    // Área para entrada de dados

                      // Área para exibição dos dados da cidade

                      return 0;
                      } 
