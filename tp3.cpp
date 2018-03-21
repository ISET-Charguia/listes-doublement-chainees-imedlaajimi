#include<stdio.h>
#include<stdlib.h>
typedef struct monome
{
    float coef;
    int degre;
 struct monome *suiv;
 struct monome *prec;
}monome;
typedef struct liste
{
    monome *debut;
    monome *fin;
}liste;


//affichage du polynome//

void affichage_dec(liste *poly)
{
monome *tmp;
tmp=poly->debut;
printf("\nP=");

while(tmp!=NULL)
{
printf("(%.2f)X^%d",tmp->coef,tmp->degre);
if(tmp->suiv!=NULL && tmp->suiv->coef>=0)
{
printf(" + ");
}
else
{
if(tmp->suiv!=NULL && tmp->suiv->coef<0)
printf(" - ");
}
tmp=tmp->suiv;
}
}


poly *ajoutentet(poly *l,int v,float x){
poly *first=(poly*)malloc(sizeof(poly));
if(first==NULL)exit(0);
first->d=v;
first->c=x;
first->next=l;
}

list sommedpoly(poly *l, poly *m){
poly *p, *t, *som;
p=l; t=m;
int min,ml=0;
float c;
for(p=l ; p!=NULL ; p=p->next){
min=p->d;
c=p->c;
for(t=m ; t!=NULL ; t=t->next){
if(min == t->d){
c+=t->c;
som=ajoutentet(som,min,c);
}
else{
 t=t->next;
}
}
//c=t->c;
//som=ajoutentet(som,min,c);
   }
   return som;
}

int main(void){
	
void affichage_dec(liste *poly);
poly *ajoutentet(poly *l,int v,float x);
list sommedpoly(poly *l, poly *m);	
	return 0;
}


