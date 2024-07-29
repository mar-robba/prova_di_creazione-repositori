#include <stdio.h>
#include <stdlib.h>
#include <time.h>

  char str[500];


static void f(int a,int b,FILE *cavia,FILE *el_mut,  int i)
{


  for(i=0;i<a;i++)fgets(str,500,el_mut);

  for (i=0; i<b; i++){
  fgets(str,500,el_mut);
  fprintf(cavia,"%s",str);
  }

}



void funzionetmp(void)
{
    int a,b;
    int i;
//gestione file

   //apertura in scrittura con la cavia
   FILE *cavia = fopen("cavia/Cavia.c" , "w");
   //apertura del file con gli elementi mutageni
   FILE *el_mut = fopen("modificatore_cavia/elementi_mutageni.txt","r");

   //controllo apertura file
   if (cavia == NULL)  {printf("\nERROR: apertura file \"cavia\" FAILED");return;}
   if (el_mut == NULL)  {printf("\nX\nERROR: apertura file \"elementi_mutageni.txt\" FAILED\nX\n");return;}
//
   //genera numero casuale
   srand(time(NULL));

for (int j=0;j<100;j++)// TMP
{
   int x = rand() % 3;
   printf("\na=%d\n",x);
   fseek(el_mut,0,SEEK_SET);

    switch(x)
    {
        case 0:{
            a=0,b=5;
            f(a,b,cavia,el_mut,i);
            break;  }

        case 1:{
          a=5,b=3;
          f(a,b,cavia,el_mut,i);
          break;    }

        case 2:{
            a=8,b=4;
            f(a,b,cavia,el_mut,i);
            break;  }

        default: printf("\nERROR: di generazione numero");
    }
}//fine ciclo

  fclose(cavia);
  fclose(el_mut);
}
