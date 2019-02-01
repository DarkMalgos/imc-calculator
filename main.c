#include <stdio.h>
#include <ctype.h>

void result(float imc) {
    if (imc < 16) {
        printf("Anorexie ou dénutrition\n");
    } else if (imc < 18.5) {
        printf("maigreur\n");
    } else if (imc < 25) {
        printf("Corpulence normale\n");
    } else if (imc < 30) {
        printf("Surpoids\n");
    } else if (imc < 35) {
        printf("Obésité modérée (Classe 1)\n");
    } else if (imc < 40) {
        printf("Obésité élevé (Classe 2)\n");
    } else {
        printf("Obésite morbide ou massive\n");
    }
}

void getInfo(float *i) {
    char c;

    while (scanf("%f", i) != 1) {
        while (!isspace(c = getchar()));
        ungetc(c, stdin);
        printf("essaye encore.\n");
        continue;
    }
}

int main(int argc, char *argv[]) {
    float taille = 0;
    float poid = 0;
    float imc = 0;

    printf("entre ta taille: ");
    getInfo(&taille);
    
    printf ("Entrez votre poid\n");
    getInfo(&poid);

    imc = poid / (taille*taille);
    result(imc);
    return 0;
}