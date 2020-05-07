#include <stdio.h>
main ()
{   
    int num[50];
    int y;
    FILE*random;
    random = fopen ("randnum.txt","r");
    FILE*abva;
    abva = fopen ("solute.txt","w");
    for (y=0;y<=9;y++)
    {
        fscanf (random,"%i",&num[y]);
    }
    num[1]=num[1]*-1;
    num[3]=num[3]*-1;
    for (y=0;y<=9;y++)
    {
        if (num[y]>20)
        {
            fprintf (abva, num[y], " ");
        }
    } 
    printf ("The process has finished for file abva.txt\n");
return 0;
}
    
    
    
   
    
