#include <stdio.h>

int main() {

	// Exebição de dados da Carta 1

	int Carta = 1;
	char Estado = 'A';
	char Codigo[10] = "A01";
	char Cidade[50] = "Alvorada d' Oeste";
	unsigned long int Populacao = 13117;
	float Area = 3029.19;
	float PIB = 2553982;
	int Turistico = 2;

	// Exebição de dados da carta 1 usando printf

	printf("Carta %d\n", Carta);
	printf("Estado: %c\n", Estado);
	printf("Código: %s\n", Codigo);
	printf("Nome da Cidade: %s\n", Cidade);
	printf("Polupação: %lu\n", Populacao);
	printf("Área: %.2fkm²\n", Area);
	printf("PIB: %.2f vinte e cimco mil reais\n", PIB);
	printf("Número de Pontos Turísticos: %i\n", Turistico);

	// Adicionamento de dados de (Dencidade Populacional e PIB per Capito) da Carta 1

	float Dencidade;
	float PIPperCapito;

	Dencidade = (Populacao / Area);
	printf("Dencidade Populacional: %.2f hab/km²\n", Dencidade);
	PIPperCapito = (PIB / Populacao);
	printf("PIB per Capita: %.2f reais\n", PIPperCapito);

	// Calculo do "Super Poder" da Carta 1

	float SuperPoder;

	SuperPoder = (Populacao + Area + PIB + Turistico + Dencidade + PIPperCapito);
	printf("Super Poder: %.2f\n", SuperPoder);

	printf("\n");
	// Exebição de dados da Carta 2

	int Carta_2 = 2;
	char Estado_2 = 'A';
	char Codigo_2[10] = "A02";
	char Cidade_2[50] = "Ji-Párana";
	unsigned long int Populacao_2 = 139359;
	float Area_2 = 6896.65;
	float PIB_2 = 5800000000;
	int Turistico_2 = 4;

	// Exebição de dados da carta 2 usando printf

	printf("Carta %d\n", Carta_2);
	printf("Estado: %c\n", Estado_2);
	printf("Código: %s\n", Codigo_2);
	printf("Nome da Cidade: %s\n", Cidade_2);
	printf("População: %lu\n", Populacao_2);
	printf("Área: %.2fkm²\n", Area_2);
	printf("PIB: %.2f bilhões\n", PIB_2);
	printf("Número de Pontos Turísticos: %i\n", Turistico_2);

	// Adicionamento de dados de (Dencidade Populacional e PIB per Capito) da Carta 2

	float Dencidade_2;
	float PIPperCapito_2;

	Dencidade_2 = (Populacao_2 / Area_2);
	printf("Dencidade Populacional: %.2f hab/km²\n", Dencidade_2);
	PIPperCapito_2 = (PIB_2 / Populacao_2);
	printf("PIB per Capita: %.2f reais\n", PIPperCapito_2);
	
	// Calculo do "Super poder" da Carta 2

	float SuperPoder_2;
	SuperPoder_2 = (Populacao_2 + Area_2 + PIB_2 + Turistico_2 + Dencidade_2 + PIPperCapito_2);
	printf("Super Poder: %.2f\n", SuperPoder_2);
	printf("\n");

	// Calculo comparativo dos valores da "Carta 1" e "Carta 2"

	printf("Calculo comparativo de valor de carta\n");
	printf("População < População_2: %d\n", Populacao < Populacao_2);
	printf("Área < Área_2: %d\n", Area < Area_2);
	printf("PIB < PIB_2: %d\n", PIB < PIB_2);
	printf("Turístico < Turístico_2: %d\n", Turistico < Turistico_2);
	printf("Dencidade Popuçacional < Dencidade Populaciona_2: %d\n", Dencidade < Dencidade_2);
	printf("PIB per Capito < PIB per Capito_2: %d\n", PIPperCapito < PIPperCapito_2);
	printf("Super Poder < Super Poder_2: %d\n", SuperPoder < SuperPoder_2);
	printf("\n");

	// Exibição dos Resultados da Comparação de Dados da "Carta 1" e "Carta 2"

	printf("*Resultado da Comparação de Cartas*\n");
	printf("População: Carta 2 venceu (1)\n");
	printf("Área: Carta 2 venceu (1)\n");
	printf("PIB: Carta 2 venceu (1)\n");
	printf("Pontos Turísticos: Carta 2 venceu (1)\n");
	printf("Dencidade Populacional: Carta 1 venceu (1)\n");
	printf("PIB per Capita: Carta 2 venceu (1)\n");
	printf("Super Poder: Carta 2 venceu (1)\n");
	printf("\n");

	return 0;


}