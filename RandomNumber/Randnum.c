#include <stdio.h>
main()
{
    int y,n;
    int num[10]={23,-47,4,-29,32,7,-2,11,19,-1};
    FILE*random;
    random = fopen("randnum.txt","w");
    for (y=0;y<=9;y++)
    {
        fprintf (random, num[y]," ");
    }
   
return 0;
}

