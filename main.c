#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int sum();
int main()
{
   /* FILE *pntr;
    int x,sum=0;
    pntr = fopen("C:\\Users\\MSIS\\Desktop\\n_numbers.txt","r+");
    if(pntr == NULL)
    {
        printf("There are no numbers in the file");
    }
    else
    {
        printf("The file is now open");
        while(!feof(pntr))
        {
            fscanf(pntr,"%d",&x);
            sum+=x;

        }
        printf("\nThe sum is = %d ",sum);
    }*/
    sum();
    sq();
    return 0;
}
