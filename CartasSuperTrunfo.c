#include <stdio.h>


    char nomeUsuario[50], nomeUsuario1[50];
    char estado[50], estado1[50];
    char nomeDaCidade[50], nomeDaCidade1[50];
    int populacao, populacao1;
    float areaKM, areaKM1;
    float pib, pib1;
    int pontosTuristicos, pontosTuristicos1;

//variaveis globais para cada carta, chamadas em cada scanf e printf para o desenvolvimento das cartas.

int main() {
    
    printf("\n");

    printf("Seja bem vindo ao super trunfo cidades!\nPreencha corretamente os dados de cada cidade,\nmas primeiramente me diga seu nome:\n");

        scanf("%s", nomeUsuario);

        
        printf("\n"); /////////////////////////////////////////////////

        printf("Muito prazer %s, vamos la:\n", nomeUsuario);

        printf("\n"); //////////////////////////////////////////////////

        

    printf("Digite o nome do estado:\n");
    scanf("%s", estado);

    printf ("Agora digite o nome de uma cidade desse estado: \n");
    scanf("%s", nomeDaCidade);

    printf("A populacao dessa cidade: \n");
    scanf("%d", &populacao);

    printf("A area em KM2 dessa cidade: \n");
    scanf("%f", &areaKM);

    printf("Estamos quase la, me diga o pib dessa cidade: \n");
    scanf("%f", &pib);

    printf("Por fim, os pontos turisticos: \n");
    scanf("%d", &pontosTuristicos);

    printf("\n");

      

    //////////////////////////////////////////////////////////////////////////////

   
        printf("Ok %s, Agora vamos para a carta 02\n", nomeUsuario);

        

    printf("Digite o nome do estado:\n");
    scanf("%s", estado1);

    printf ("Agora digite o nome de uma cidade desse estado: \n");
    scanf("%s", nomeDaCidade1);

    printf("A populacao dessa cidade: \n");
    scanf("%d", &populacao1);

    printf("A area em KM2 dessa cidade: \n");
    scanf("%f", &areaKM1);

    printf("Estamos quase la, me diga o pib dessa cidade: \n");
    scanf("%f", &pib1);

    printf("Por fim, os pontos turisticos: \n");
    scanf("%d", &pontosTuristicos1);

    printf("\n");

    

    printf("beleza %s, acabamos de criar suas cartas, da uma olhadinha:\n", nomeUsuario);

    printf("\n");

    printf("Codigo: A01\n");
    printf("Estado: %s \nCidade: %s \n", estado, nomeDaCidade);
    printf("Populacao da cidade: %d\nArea KM2: %.5f \n", populacao, areaKM);
    printf("Pib: %.5f \nQuantidade de pontos turisticos: %d\n", pib, pontosTuristicos);

    printf("\n");

    printf("ok %s, criamos a carta 2 tambem:", nomeUsuario);

    printf("\n");

    printf("Codigo: B02\n");
    printf("Estado: %s \nCidade: %s \n", estado1, nomeDaCidade1);
    printf("Populacao da cidade: %d\nArea KM2: %.5f \n", populacao1, areaKM1);
    printf("Pib: %.5f \nQuantidade de pontos turisticos: %d\n", pib1, pontosTuristicos1);

    printf("\n");


return 0;

}

