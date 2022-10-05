#ifndef __PATHWAY__
#define __PATHWAY__
#include <stdlib.h>
#include <stdio.h>
typedef struct pathway *ptr_pathway;
extern ptr_pathway creerpathway();
extern void saisie_voie(ptr_pathway);
extern void affichage_voie(ptr_pathway);
extern void ouvrir_voie(ptr_pathway, FILE*);
extern void sauvegarder_voie(ptr_pathway, FILE*);

#endif 
