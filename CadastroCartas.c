#include<stdio.h>
int main (void)
{
        //Mensagem de inicialização do jogo.
        printf("Inicializando jogo SuperTrunfo... \n\n\n\n");

        //Entrada de dados da carta 1.
        
        char estado1 = 'A'  ;
        int numero1 = 1;
        char cidade1[200] = "" ;
        int populacao1 = 0; 
        float area1 = 0;
        float PIB1 = 0;
        int pontos_turisticos1 = 0;
        float desidadePopulacional1 = 0;
        float pibPerCapita1 = 0;

      
        printf("Insira os dados da primeira carta.\n\n");
        printf("Insira uma letra entre A e H para representar o estado.\n");
        scanf("%c", &estado1);
        printf("Insira um número entre 1 e 4.\n");
        scanf("%i", &numero1);
        char codigo1[] = {estado1, '0', (numero1 + '0')};
        printf("Insira o nome da cidade.\n");
        scanf("%s", &cidade1);
        printf("Insira a população.\n");
        scanf("%i", &populacao1);
        printf("Insira a área em km².\n");
        scanf("%f", &area1);
        printf("Insira o PIB.\n");
        scanf("%f", &PIB1);
        printf("Insira o número de pontos turísticos.\n");
        scanf("%i", &pontos_turisticos1);

        // Processamento de dados

        desidadePopulacional1 = populacao1/area1;
        pibPerCapita1 = PIB1 / populacao1;

        
        //Saída de dados da carta 1

        

        printf("Exibindo informações da carta 1...\n\n\n");
        printf("Carta1\n\n");
        printf("Estado:%c\n",estado1);
        printf("Código:%s\n",codigo1);
        printf("Nome da Cidade:%s\n",cidade1);
        printf("População:%i\n",populacao1);
        printf("Área:%.2f km²\n",area1);
        printf("PIB:%.2f\n",PIB1);
        printf("Número de Pontos Turísticos:%i\n",pontos_turisticos1);
        printf("Densidade Populacional: %2.f hab/km²\n", desidadePopulacional1);
        printf("PIB Per Capita:%2.f reais\n\n\n\n\n", pibPerCapita1);
        

       //Entrada de dados da carta 2.
        
       char estado2 = 'A'  ;
       int numero2 = 1;
       char cidade2[200] = "" ;
       int populacao2 = 0; 
       float area2 = 0;
       float PIB2 = 0;
       int pontos_turisticos2 = 0;
       float desidadePopulacional2 = 0;
        float pibPerCapita2 = 0;

     
       printf("Insira os dados da segunda carta.\n\n");
       printf("Insira uma letra entre A e H para representar o estado.\n");
       scanf("%c", &estado2);
       printf("Insira um número entre 1 e 4.\n");
       scanf("%i", &numero2);
       char codigo2[] = {estado2, '0', (numero2 + '0')};
       printf("Insira o nome da cidade.\n");
       scanf("%s", &cidade2);
       printf("Insira a população.\n");
       scanf("%i", &populacao2);
       printf("Insira a área em km².\n");
       scanf("%f", &area2);
       printf("Insira o PIB.\n");
       scanf("%f", &PIB2);
       printf("Insira o número de pontos turísticos.\n");
       scanf("%i", &pontos_turisticos2);

       // Processamento de dados

        desidadePopulacional2 = populacao2/area1;
        pibPerCapita2 = PIB2 / populacao2;

       //Saída de dados da carta 2

       

       printf("Exibindo informações da carta 2...\n\n\n");
       printf("Carta2\n\n");
       printf("Estado:%c\n",estado2);
       printf("Código:%s\n",codigo2);
       printf("Nome da Cidade:%s\n",cidade2);
       printf("População:%i\n",populacao2);
       printf("Área:%.2fkm²\n",area2);
       printf("PIB:%.2f\n",PIB2);
       printf("Número de pontos turísticos:%i\n\n\n\n\n",pontos_turisticos2);
       printf("Densidade Populacional: %2.f hab/km²\n", desidadePopulacional2);
       printf("PIB Per Capita:%2.f reais\n", pibPerCapita2);


        return 0;
}