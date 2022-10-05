#ifndef __LISTE__
#define __LISTE__
#include "pathway.h"

typedef struct element *liste;
extern void ajouter(liste, void*);
extern liste creerliste();
extern void afficherliste(liste);
extern int case_vide(liste);
extern liste case_suivante(liste);
extern ptr_pathway retourcontenu(liste);
extern liste supprimer(liste);

#endif
