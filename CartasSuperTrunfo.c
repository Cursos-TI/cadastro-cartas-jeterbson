#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
 int Carta = 1;
 char Estado = 'A';
 char Codigo[10] = "A01";
 char Cidade[50] = "Alvorada d' Oeste";
 int População = 13117;
 float Área = 3029.19;
 float PIB = 2553982;
 int Turistico = 2;

 printf("Carta %d\n", Carta);
 printf("Estado: %c\n", Estado);
 printf("Codigo: %s\n", Codigo);
 printf("Nome da Cidade: %s\n", Cidade);
 printf("Polupação: %d\n", População);
 printf("Area: %.2fkm²\n", Área);
 printf("PIB: %.2f vinte e cimco mil reais\n", PIB);
 printf("Numero de Pontos Turisticos: %i\n", Turistico);
  // Área para entrada de dados

  // Área para exibição dos dados da cidade

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
