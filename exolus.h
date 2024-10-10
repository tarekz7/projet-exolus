#ifndef EXOLUS_H  
#define EXOLUS_H

void bonjour();  

int date();

typedef struct Element Element;
struct Element{

    int nombre;
	Element *suivant;
};

typedef struct Liste Liste;
struct Liste
{
    Element *premier;
};

Liste *initialisation();
void insertion(Liste *liste, int nvNombre);
void suppression(Liste *liste);
void afficherListe(Liste *liste);


#endif 

