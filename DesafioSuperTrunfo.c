#include <stdio.h>
int main() {
    int populacao;
    int ponto_t;
    int populacao2;
    int ponto_t2;
    int cidade;
    int city;
    float area;
    float PIB;
    float area2;
    float PIB2;
    char estado [20];
    char state [20];
    char nome [30];
    char nome_ [30];
        //variáveis bem separadas para facilitar sua identificação
        //Seções separadas po espaços em branco para melhor organizar
    printf ("Bem vindo ao Super Trunfo! \n");
    printf ("Neste jogo, teremos que cadastrar cartas de cidades com suas informações e atributos.\n");
    printf ("Agora vamos cadastrar duas cartas. \n");

    printf("Primeiro, escolha uma letra de A até H, ela definirá o seu estado: \n");
    scanf("%s", &estado);
    printf("Escolha também um número de 1 até 4, ele definirá o código da sua cidaede \n");
    scanf("%d", &cidade);
    printf("Agora nomeie a sua cidade: \n");
    scanf("%s", &nome);
    printf ("Agora, informe a população da sua cidade: \n");
    scanf ("%d", &populacao);
    printf ("Agora nos informe quantos pontos turísticos a sua cidade tem: \n");
    scanf ("%d", &ponto_t);
    printf ("Ótimo, agora vamos cadastrar a área. Informe quantos quilômetros quadrados a sua cidade possui: \n");
    scanf ("%f", &area);            
    printf("Excelente! Por último, informe o PIB (em milhão) da sua cidade: \n");
    scanf("%f", &PIB);
    printf(" \n");
    printf ("Finalizamos a primeira carta! Agora vamos criar a segunda. \n");
    printf(" \n");

    printf("Primeiro, escolha uma letra de A até H, ela definirá o seu estado: \n");
    scanf("%s", &state);
    printf("Escolha também um número de 1 até 4, ele definirá o código da sua cidaede \n");
    scanf("%d", &city);
    printf("Agora nomeie a sua cidade: \n");
    scanf("%s", &nome_);
    printf ("Agora, informe a população da sua cidade: \n");
    scanf ("%d", &populacao2);
    printf ("Agora nos informe quantos pontos turísticos a sua cidade tem: \n");
    scanf ("%d", &ponto_t2);
    printf ("Ótimo, agora vamos cadastrar a área. Informe quantos quilômetros quadrados a sua cidade possui: \n");
    scanf ("%f", &area2);            
    printf("Excelente! Por último, informe o PIB (em milhão) da sua cidade: \n");
    scanf("%f", &PIB2);
    printf(" \n");

    printf("Agora que cadastramos as suas duas cartas, vamos vizualizar o resultado \n");
    printf("===================================== \n");
    printf("Código do município: %s%d \n", estado, cidade);
    printf("Estado: %s \n", estado);
    printf("Cidade: %d \n", cidade);
    printf("Nome: %s \n", nome);
    printf("População: %d habitantes \n", populacao);
    printf("Quantidade de pontos turísticos: %d \n", ponto_t);
    printf("Área da cidade: %.2f quilômetros quadrados \n", area);
    printf("PIB da cidade: %.3f milhões de reais \n", PIB);
    printf("===================================== \n");
    printf(" \n");
    printf("===================================== \n");
    printf("Código do município: %s%d \n", state, city);
    printf("Estado: %s \n", state);
    printf("Cidade: %d \n", city);
    printf("Nome: %s \n", nome_);
    printf("População: %d habitantes \n", populacao2);
    printf("Quantidade de pontos turísticos: %d \n", ponto_t2);
    printf("Área da cidade: %.2f quilômetros quadrados \n", area2);
    printf("PIB da cidade: %.3f milhões de reais \n ", PIB2);
    printf("===================================== \n");
    printf(" \n");
        return 0;
    }