#ifndef _ENZYME_H
#define _ENZYME_H
#include <stdlib.h>
#include <stdio.h>
typedef struct enzyme *ptr_enzyme;

extern ptr_enzyme creerenzyme();
extern ptr_enzyme saisie_enzyme(ptr_enzyme);
extern ptr_enzyme creer_enzyme(char*, int);
extern void affiche(ptr_enzyme);
extern void sauvegarde(ptr_enzyme, FILE*);

#endif
