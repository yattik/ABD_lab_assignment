#include<stdio.h>
int sum()
{
     FILE *pntr;
     int x,sum=0;
     pntr = fopen("C:\\Users\\MSIS\\Desktop\\n_numbers.txt","r+");
    if(pntr == NULL)
    {
        printf("There are no numbers in the file");
    }
    else
    {
        printf("#1 The file is now open");
        while(!feof(pntr))
        {
            fscanf(pntr,"%d",&x);
            sum+=x;

        }
        printf("\nThe sum is = %d ",sum);
    }
    return sum;
}
int sq()
{
    int square,n;
    FILE *pntr;
    pntr = fopen("C:\\Users\\MSIS\\Desktop\\square.txt","r+");
    if(pntr == NULL)
    {
        printf("There are no numbers in the file");
    }
    else
    {
        printf("\n#2 The file is now open");
        fscanf(pntr,"%d",&n);
        square=n*n;
        printf("\nThe square is = %d",square);
       // fprintf()
    }


}
int reverse()
{
    FILE *ptr
    ptr = fopen("C:\Users\MSIS\Desktop\ABD Lab assignment\reverse.txt","r+")
    if(ptr== NULL)
    {
        printf("The file is empty")
    }
    else
    {
      printf("The file is now open")

    }
}
