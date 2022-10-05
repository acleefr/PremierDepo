#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "enzyme.h"

struct enzyme {
    char *nom;
    int poids;
};

ptr_enzyme creerenzyme() {
    ptr_enzyme enz = (ptr_enzyme) malloc (sizeof(struct enzyme));
    return enz;
}

ptr_enzyme saisie_enzyme(ptr_enzyme item) {
    item = creerenzyme();
    item->nom=(char *)malloc(sizeof(char) * 30);
    printf("Veuillez entrez le nom\n");
    scanf("%s", item->nom);
    printf("Veuillez entrez le poids\n");
    scanf("%d", &item->poids);
    item=creer_enzyme(item->nom,item->poids);
    return item;
}

ptr_enzyme creer_enzyme(char *_nom, int _poids) {
    ptr_enzyme enz = (ptr_enzyme) malloc(sizeof(struct enzyme));
    enz->nom=(char *) malloc(sizeof(char) * 30);
    strcpy(enz->nom, _nom);
    enz->poids=_poids;
    return enz;
}

void affiche(ptr_enzyme enz) {
    printf("Enzyme: %s, poids : %d\n", enz->nom, enz->poids);
}

void sauvegarde(ptr_enzyme enz, FILE* out) {
    fprintf(out,"%s %d ", enz->nom, enz->poids);
}
