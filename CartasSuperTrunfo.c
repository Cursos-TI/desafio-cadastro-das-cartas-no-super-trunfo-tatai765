#include <stdio.h>
int main () {  
 
    // variaveis
    
int populacao01,populacao02;
float area01,area02;
float pib01,pib02; 
int numeroPontosTuristicos01,numeroPontosTuristicos02;
 
    // lendo as informações da carta

printf("Digite o número da População carta - 01: \n");
scanf("%d" , &populacao01);

printf("Digite o número da área carta - 01: \n");
scanf("%f" , &area01 );

printf("Digite o número do PIB carta - 01: \n");
scanf("%f" , &pib01 ); 

printf("Digite o número de pontos turíscos carta - 01: \n");
scanf("%f" , &numeroPontosTuristicos01);


printf("Digite o número da População carta - 02: \n");
scanf("%d" , &populacao02);

printf("Digite o número da área carta - 02: \n");
scanf("%f" , &area02 );

printf("Digite o número do PIB carta - 02: \n");
scanf("%f" , &pib02 ); 

printf("Digite o número de pontos turíscos carta - 02: \n");
scanf("%f" , &numeroPontosTuristicos02);
    
    // mostrando informações recebidas pelos usuario

printf ("Carta - 01 \n");
printf ("Quantidade da população: %d - Número da área: %f \n", populacao01, area01);
printf ("Números de PIB: %f - Números de pontos turísticos: %f \n" , pib01, numeroPontosTuristicos01);

printf ("Carta - 02 \n");
printf ("Quantidade da população: %d - Número da área: %f \n", populacao02, area02);
printf ("Números de PIB: %f - Números de pontos turísticos: %f \n" , pib02, numeroPontosTuristicos02);

return 0;
} 
