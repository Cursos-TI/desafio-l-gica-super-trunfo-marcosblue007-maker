#include <stdio.h>
 
int main() {
    //Carta01
    int carta1 = 01;
    char nome1[20] = "Fortaleza";
    char estado1 = 'Ceara';
    int populacao1 = '2.5';
    int pontosT1 = '35';
    float pib1 = '1,5';

    //Carta02
    int carta2 = 02;
    char nome2[20] = "Teresina";
    char estado2 = 'Piaui';
    int populacao2 = '9.5';
    int pontosT2 = '25';
    float pib2 = '2,5';

    printf("Nome da carta 01: %s\n", nome1);
    printf("Nome da carta 02: %s\n", nome2);

    if ( populacao1 > populacao2 ){
    printf("Carta 01 tem a maior população. \n");
   } else {
    printf ("Carta 02 tem a maior população. \n");

   }
   if ( pontosT1 > pontosT2 ){
    printf("Carta 01 tem mais pontos turisticos. \n");
   } else {
    printf ("Carta 02 tem mais pontos turisticos. \n");

   }

   if ( pib1 > pib2 ){
    printf("Carta 01 tem o maior PIB. \n");
   } else {
    printf ("Carta 02 tem o maior PIB. \n");

   }

    if ( pib1 > pib2 ){
    printf("Carta 01 venceu!! \n");
   } else {
    printf ("Carta 02 venceu!! \n");

   }
    
    return 0;
}