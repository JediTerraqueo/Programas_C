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

typedef struct circulo{
  Ponto centro;
  float raio;
}Circulo;

int interior(Circulo* c, Ponto* p){
  float dist = distancia(&c->centro, p); //ponteiro para o centro do circulo
  return ( dist < c->raio); // retorna 0 ou 1
}

int main(){
  Circulo c1;
  Ponto p1;

  printf("Digite as coordenadas do centro e o raio do circulo: ");
  scanf("%f %f %f", &c1.centro.x, &c1.centro.y, &c1.raio);

  printf("Digite as coordenadas do ponto: ");
  scanf("%f %f", &p1.x, &p1.y);

  printf("Pertence ao interior = %i\n", interior(&c1,&p1));
  return 0;
}

