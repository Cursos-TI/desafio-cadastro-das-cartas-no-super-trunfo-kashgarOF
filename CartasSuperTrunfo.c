#include <stdio.h>

///////////////////////////////////////VARIAVEIS GLOBAIS//////////////////////////////////////////////////////////////////////////////////////////        


    char nomeUsuario[50], nomeUsuario1[50];
    char estado[50], estado1[50];
    char nomeDaCidade[50], nomeDaCidade1[50];
    unsigned long int populacao, populacao1;
    float areaKM, areaKM1;
    float pib, pib1;
    int pontosTuristicos, pontosTuristicos1; 



int main() {
    
//////////////////////////////////////////////APRESENTAÇÃO///////////////////////////////////////////////////////////////////////////////////        

    printf("\n");

    printf("Seja bem vindo ao super trunfo cidades!\nPreencha corretamente os dados de cada cidade,\nmas primeiramente me diga seu nome:\n");

        scanf("%s", nomeUsuario);


        printf("\n"); 

        printf("Muito prazer %s, vamos la:\n", nomeUsuario);

        printf("\n"); 
        
        
////////////////////////////////////////////////CARTA 01//////////////////////////////////////////////////////////////////////////////

        

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

    float densidadepop = populacao / areaKM;
    float pibp = pib / populacao;
    float superPoder = (areaKM / populacao ) + pib + pibp + populacao + areaKM + pontosTuristicos;

    printf("\n");

  
/////////////////////////////////////////CARTA 02////////////////////////////////////////////////////////

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

    float densidadepop1 = populacao1 / areaKM1;
    float pibp1 = pib1 / populacao1;
    float superPoder1 = (areaKM1 / populacao1 ) + pib1 + pibp1 + populacao1 + areaKM1 + pontosTuristicos1;


    printf("\n");

    /////////////////////////////////////////PRINTF//////////////////////////////////////////////

    printf("beleza %s, acabamos de criar suas cartas, da uma olhadinha:\n", nomeUsuario);

    printf("\n");

    printf("Codigo: A01\n");
    printf("Estado: %s \nCidade: %s \n", estado, nomeDaCidade);
    printf("Populacao da cidade: %d (%d)\nArea KM2: %.5f (%d) \n", populacao, populacao > populacao1, areaKM, areaKM > areaKM1);
    printf("Pib: %.5f (%d) \nQuantidade de pontos turisticos: %d (%d)\n", pib, pib > pib1, pontosTuristicos, pontosTuristicos > pontosTuristicos1);
    printf("Densidade Populacional: %.5f (%d)\n", densidadepop, densidadepop > densidadepop1);
    printf("pib per capita: %.5f (%d) \n", pibp, pibp > pibp1 );
    printf("Super poder: %.5f (%d)\n", superPoder, superPoder > superPoder1);

    printf("\n");

    printf("ok %s, criamos a carta 2 tambem:", nomeUsuario);

    printf("\n");

    printf("Codigo: B02\n");
    printf("Estado: %s \nCidade: %s \n", estado1, nomeDaCidade1);
    printf("Populacao da cidade: %d (%d) \nArea KM2: %.5f (%d) \n", populacao1, populacao1 > populacao, areaKM1, areaKM1 > areaKM);
    printf("Pib: %.5f (%d) \nQuantidade de pontos turisticos: %d (%d) \n", pib1, pib1 > pib, pontosTuristicos1, pontosTuristicos1 > pontosTuristicos);
    printf("Densidade Populacional: %.5f (%d) \n", densidadepop1, densidadepop1 > densidadepop);
    printf("pib per capita: %.5f (%d) \n", pib1, pib1 > pib);
    printf("Super poder: %.5f (%d) \n", superPoder1, superPoder1 > superPoder);

    printf("\n");

    if(superPoder > superPoder1) {
        printf("Carta 01 venceu!\n");
    } else {
        printf("Carta 02 venceu!\n");
    };


return 0;

}

