#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int main()
{
    int pilih;
   //GLOBAL
    printf ("%d\n",max2(3,2));
    printf ("%d\n",max3(3,2,6));
    printf ("%d\n",max4(3,2,6,7));

    // KALAU PRINTF YANG SUDAH DI DECLARASIKAN VARIABLE GLOBAL TAPI DIATAS PROSEDURE MANGGILNYA
     printf ("%d\n",X);
    // MANGGIL VARIABLE GLOBAL
    coba();
    printf ("%d\n",X);

    //MANGGIL COBA2
    coba2();

    //MENU
     printf ("----------------------------------------------- \n");
    foodmenu ();

    printf ("----------------------------------------------- \n");
    // SELECT MENU
    printf ("Select Menu : ");
    selectmenu ();

    return 0;

}
