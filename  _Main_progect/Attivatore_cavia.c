#include <stdio.h>
#include <stdlib.h>
void attivatore_cavia()
{
        int a = system("gcc cavia/Cavia.c -o cavia/Cavia.o");
        if(a==0) perror("\ncompilazione");
        else printf("\nX\nERROR: compilazione fallita; errore numero: %d\nX\n \n",a);


        int b=system(".cavia/Cavia.o");
        if (b==0)perror("\nesecuzione");
        else printf("\nX\nERROR: esecuzione fallita; erroere numero: %d\nX\n",b);
}
