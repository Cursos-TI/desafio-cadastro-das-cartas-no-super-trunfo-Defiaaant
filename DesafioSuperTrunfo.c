#include <stdio.h>

int main() {
    //Variáveis para o cadastro de diferentes atributos para as cartas
    unsigned long int populacao, populacao2;
    int ponto_, ponto_2;
    int cidade, city;
    float area, area2;
    float PIB, PIB2;
    char estado [30], state [30];
    char nome [30], nome_ [30];
    float pib_;
    float pib_2;
    float demo;
    float demo2;
    float super_poder, SUPER_PODER;
    int carta = 1;

    //Breve apresentação do jogo
    printf ("Bem vindo ao Super Trunfo! \n");
    printf ("Neste jogo, teremos que cadastrar cartas de cidades com suas informações e atributos.\n");
    printf ("Em seguida faremos uma comparação das cartas com base nos atributos apresentados.\n");
    printf ("Agora vamos cadastrar duas cartas. \n");

    //Incio do espaço de interação´
    //Cadastro da primeira carta com o armazenamento dos valores nas variáveis
    printf("Primeiro, escolha uma letra de A até H, ela definirá o seu estado: \n");
    scanf("%s", &estado);
    printf("Escolha também um número de 1 até 4, ele definirá o código da sua cidade \n");
    scanf("%d", &cidade);
    printf("Agora nomeie a sua cidade: \n");
    scanf("%s", &nome);
    printf ("Agora, informe a população da sua cidade: \n");
    scanf ("%ld", &populacao);
    printf ("Agora nos informe quantos pontos turísticos a sua cidade tem: \n");
    scanf ("%d", &ponto_);
    printf ("Ótimo, agora vamos cadastrar a área. Informe quantos Km² a sua cidade possui: \n");
    scanf ("%f", &area);            
    printf("Excelente! Por último, informe o PIB (em bilhão) da sua cidade: \n");
    scanf("%f", &PIB);
    printf(" \n");
    printf ("Finalizamos a primeira carta! Agora vamos criar a segunda. \n");
    printf(" \n");

    //cadastro da segunda carta, utilizando o mesmo processo que a primeira
    printf("Primeiro, escolha uma letra de A até H, ela definirá o seu estado: \n");
    scanf("%s", &state);
    printf("Escolha também um número de 1 até 4, ele definirá o código da sua cidade \n");
    scanf("%d", &city);
    printf("Agora nomeie a sua cidade: \n");
    scanf("%s", &nome_);
    printf ("Agora, informe a população da sua cidade: \n");
    scanf ("%ld", &populacao2);
    printf ("Agora nos informe quantos pontos turísticos a sua cidade tem: \n");
    scanf ("%d", &ponto_2);
    printf ("Ótimo, agora vamos cadastrar a área. Informe quantos Km² a sua cidade possui: \n");
    scanf ("%f", &area2);            
    printf("Excelente! Por último, informe o PIB (em bilhão) da sua cidade: \n");
    scanf("%f", &PIB2);
    printf(" \n");

    //Exibição das cartas cadastradas
    printf("Agora que cadastramos as suas duas cartas, vamos vizualizar o resultado da comparação: \n");
    printf(" \n");
    //1º carta
    printf("Código do município: %s%d \n", estado, cidade);
    printf("Estado: %s \n", estado);
    printf("Cidade: %d \n", cidade);
    printf("Nome: %s \n", nome);
    printf("População: %ld habitantes \n", populacao);
    printf("Quantidade de pontos turísticos: %d \n", ponto_);
    printf("Área da cidade: %.2f Km² \n", area);
    printf("PIB da cidade: %.3f bilhões de reais \n", PIB);

    demo = populacao / area; //Cálculo da densidade demográfica

    printf("Densidade demográfica da cidade: %.3f habitantes por Km² \n", demo);

    pib_ = (PIB*1000000000  / populacao); //Cálculo do pib per capita
    
    //2º carta
    printf("PIB Per Capita da cidade: %.3f reais \n", pib_);
    printf(" \n");
    printf("Código do município: %s%d \n", state, city);
    printf("Estado: %s \n", state);
    printf("Cidade: %d \n", city);
    printf("Nome: %s \n", nome_);
    printf("População: %ld habitantes \n", populacao2);
    printf("Quantidade de pontos turísticos: %d \n", ponto_2);
    printf("Área da cidade: %.2f Km² \n", area2);
    printf("PIB da cidade: %.3f bilhões de reais \n", PIB2);

    demo2 =  populacao2 / area2; //Cálculo da densidade demográfica
    
    printf("Densidade demográfica da cidade: %.3f habitantes por Km² \n", demo2);

    pib_2 = (PIB2*1000000000 / populacao2); //Cálculo do pib per capita
    
    printf("PIB Per Capita da cidade: %.3f reais \n", pib_2);
    printf(" \n");
    //Fim da exibição das cartas

    //Cálculo dos "super poderes das cartas"
    super_poder = (populacao + area + PIB + pib_ + (1 / demo));
    SUPER_PODER = (populacao2 + area2 + PIB2 + pib_2 + (1 / demo2));

    //início da comparação utilizando lógica de "maior que" e "menor que"
    printf("==================================== \n");
    printf("RESULTADO DA COMPARAÇÃO \n");
    printf("População: Carta %d venceu! (%d) \n", (carta + (populacao < populacao2)), (populacao < populacao2)); 
    printf("Área: Carta %d venceu! (%d) \n", (carta + (area < area2)), (area < area2));
    printf("PIB: Carta %d venceu! (%d) \n", (carta + (PIB < PIB2)), (PIB < PIB2));
    printf("Pontos turísticos: Carta %d venceu! (%d) \n", (carta + (ponto_ < ponto_2)), (ponto_ < ponto_2));
    printf("Densidade populacional: Carta %d venceu! (%d) \n", (carta + (demo > demo2)), (demo > demo2));
    printf("PIB Per Capita: Carta %d venceu! (%d) \n", (carta + (pib_ < pib_2)), (pib_ < pib_2));
    printf("Super poder: Carta %d venceu! (%d) \n", (carta + (super_poder < SUPER_PODER)), (super_poder < SUPER_PODER));
    printf("==================================== \n");
    //Fim da exibição.
        return 0;
}
