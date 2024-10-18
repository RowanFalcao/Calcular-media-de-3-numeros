#include<stdio.h>

int main(){
    float nota1, nota2, nota3, media;

    printf("Insiras as notas do aluno: ");
    scanf("%f %f %f", &nota1, &nota2, &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    printf("Nota %.2f\n", media);

    if (media >= 7){
        printf("Aluno aprovado!\n");
    }else {
        printf("Aluno reprovado!\n");
    }


   return 0;
}
