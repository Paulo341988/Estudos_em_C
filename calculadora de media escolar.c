#include <stdio.h>
#include <stdlib.h>

int main()
{
   float nota1, nota2, nota3, nota4, media;
   nota1 = nota2 = nota3 = nota4 = media = 0;

   printf("======== Media Escolar =========\n");
   printf("Nota primeiro Bimestre:");
   scanf("%f", &nota1);
   printf("Nota segundo Bimestre:");
   scanf("%f", &nota2);
   printf("Nota terceiro Bimestre:");
   scanf("%f", &nota3);
   printf("Nota quarto Bimestre:");
   scanf("%f", &nota4);

   media = (nota1 + nota2 + nota3 + nota4) /4;

   printf ("A sua media escolar foi de: %f\n\n", media);

   if (media >= 7)
   {
       printf("Voce foi aprovado");
          }
    else{
        printf("Voce foi reprovado!");
          }
    return 0;
}
