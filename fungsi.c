#include "header.h"
int max2 (int a, int b)
{
    if (a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

// MAX3
int max3 (int a, int b, int c)
{
   return max2 (max2(a,b),c);

}
// MAX4
int max4 (int a, int b, int c, int d)
{
   return max2 (max3(a,b,c),d);
   /*
   return max2 (max2(a,b),max2(c,d));
   */

}

//PROCEDURE
void coba ()
{
    X=10;
  //  printf ("%d",X);
}

//PROCEDURE DENGAN VARIABLE LOKAL PRINTF HARUS DI PROCEDURENYA
void coba2 ()
{
    int a;
    a = 20;
     printf ("%d\n",a);
}

//MENU
void foodmenu ()
{
    printf ("1. Fried Rice\n");
    printf ("2. Capcay\n");
    printf ("3. Kwetiaw\n");
    printf ("4. Fried Chicken\n");
}

void selectmenu ()
{
    int pilih;
    scanf ("%d",&pilih);
    if (pilih==1)
    {
        printf ("1. Fried Rice\n");
    }
   else if (pilih==2)
    {
    printf ("2. Capcay\n");
    }

    else if (pilih==3)
    {
    printf ("3. Kwetiaw\n");
    }

    else if (pilih==4)
    {
    printf ("4. Fried Chicken\n");
    }
    else
    {
        printf ("Pilihan tak tersedia\n");
    }
}
