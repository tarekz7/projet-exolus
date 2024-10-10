#include <stdio.h>
#include <stdlib.h>
#include "exolus.h"
#include <glib.h>
int main() {
   bonjour();  
   date();
Liste *maListe = initialisation();

insertion(maListe, 4);
insertion(maListe, 8);
insertion(maListe, 15);
suppression(maListe);

afficherListe(maListe);
return 0;

}

