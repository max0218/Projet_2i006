#ifndef __CIRCUIT_H__
#define __CIRCUIT_H__

#include"Grille.h"

typedef struct cell_circuit{
LDC L;
int jmin , jmax;
struct cell_circuit *suiv;
} Cell_circuit;


typedef struct{
int nb_circuit;
Cell_circuit *premier;
Cell_circuit *dernier;
} Lcircuit;

//Permet d'afficher un ensemble de circuits couvrant les sommets non-noirs de H
void Graphe_Rech_Circuit(Graphe *H);

//Retourne une liste de circuits de H couvrant les sommets non-noirs
void Graphe_Rech_Circuit_v2(Graphe *H, Lcircuit *LC);

#endif