#include <stdio.h>
#include <math.h>
typedef struct ponto{
float x;
float y;
}Ponto;

int distancia(Ponto* p, Ponto* q){
float dist;
dist = sqrt((q->x - p->x)*(q->x - p->x) + (q->y - p->y)*(q->y - p->y));
return dist;
}

