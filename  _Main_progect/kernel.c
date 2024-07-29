#include <stdio.h>
#include <stdlib.h>
#include "modificatore_cavia/Modificatore_cavia.h"
#include "Attivatore_cavia.h"

int main()
{
    int eventi = 1;

    // eventi generati rappresenta il numero di eventi
    for(int i=0;i<eventi;i++)
    {
        //modifica della cavia
        funzionetmp();// -> Modificatore_cavia.h

        perror("\nmodificatore della cavia");

        //attivazione cavia
        /*attivatore_cavia();*/// -> Attivatore_cavia.h
    }


}



