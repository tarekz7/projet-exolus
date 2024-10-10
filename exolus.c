#include <stdio.h>
#include <stdlib.h>
#include "exolus.h"
#include <glib.h>
void bonjour() {
    printf("Hello, world!\n");  
}

int date()
{
     GDateTime *date_time = g_date_time_new_now_local();
    if (!date_time)
        return 1;
    gchar *date_time_string = g_date_time_format(date_time, "%H:%M:%S %F");
    g_print("%s\n", date_time_string ? date_time_string : "it is null\n");
    g_free(date_time_string);
    g_date_time_unref(date_time);

    gchar *histoire="voici l'heure et la date ";

    g_print("%s\n",histoire);
}

Liste *initialisation()
{
    Liste *liste = malloc(sizeof(*liste));
    Element *element = malloc(sizeof(*element));

    if (liste == NULL || element == NULL)
    {
        exit(EXIT_FAILURE);
    }

    element->nombre = 0;
    element->suivant = NULL;
    liste->premier = element;

    return liste;
}

void insertion(Liste *liste, int nvNombre)
{
    /* Création du nouvel élément */
    Element *nouveau = malloc(sizeof(*nouveau));
    if (liste == NULL || nouveau == NULL)
    {
        exit(EXIT_FAILURE);
    }
    nouveau->nombre = nvNombre;

    /* Insertion de l'élément au début de la liste */
    nouveau->suivant = liste->premier;
    liste->premier = nouveau;
}


void suppression(Liste *liste)
{
    if (liste == NULL)
    {
        exit(EXIT_FAILURE);
    }

    if (liste->premier != NULL)
    {
        Element *aSupprimer = liste->premier;
        liste->premier = liste->premier->suivant;
        free(aSupprimer);
    }
}

void afficherListe(Liste *liste)
{
    if (liste == NULL)
    {
        exit(EXIT_FAILURE);
    }

    Element *actuel = liste->premier;

    while (actuel != NULL)
    {
        printf("%d -> ", actuel->nombre);
        actuel = actuel->suivant;
    }
    printf("NULL\n");
}


   
