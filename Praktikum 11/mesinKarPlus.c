#ifndef MESINKARPLUS_C
#define MESINKARPLUS_C

#include <stdio.h>
#include "mesinKarPlus.h"

/* definisi Pita */
char Pita_karakter[100]="pitakar.txt";
static FILE *FILEKU;
static int retval;

/*Body Prototype*/
void START()
/* I.S. sembarang */
/* F.S. CC adalah karakter pertama pita */
/*      Jika CC==MARK, EOP menyala(true) */
/*      Jika CC!=MARK, EOP padam(false) */


{
   FILEKU=fopen(Pita_karakter,"r");
   retval=fscanf(FILEKU,"%c",&CC);
   //printf("%d ",retval);
   //printf("%c ",CC);

}

void ADV()
/* I.S. CC!=MARK */
/* F.S. CC adalah karakter berikutnya CC pada I.S */
/*      Jika CC==MARK, EOP menyala(true) */
{
   retval=fscanf(FILEKU,"%c",&CC);
   //printf("%d ",retval);
   //printf("%c ",CC);

   if(CC==MARK)
   {
      fclose(FILEKU);
   }
}

int EOP()
/* true jika CC==MARK */
{
   return(CC==MARK);
}

int charCount()
/*menghitung jumlah karakter pada pita*/
{
/*Kamus lokal*/
   int i=0; /*counter jumlah karakter*/
   
/*Algoritma*/
   START();
   while(!EOP()){
      ADV();
      i++;
   }
   return i;
}

int PALINDROM(char arrayChar[])
/*true jika character pada array adalah sebuah palindrom*/
{
/*Kamus lokal*/
   int panjangArray; /*jumlah dari karakter atau panjang array*/
   int i; /*counter*/
   int isPalindrom = 1; /*boolean pengecekan palindrom*/

/*Algoritma*/
   panjangArray = charCount();
   for (i = 0; i < panjangArray; i++) {
      if (arrayChar[i] != arrayChar[panjangArray - i - 1]){
         isPalindrom = 0;
         break;
      }
   }

   return isPalindrom;
}

void INVERSE(char arrayChar[])
/*me-inverse atau membalikkan urutan character pada array*/
{
/*Kamus lokal*/
   int panjangArray; /*jumlah dari karakter atau panjang array*/
   int i; /*counter*/

/*Algoritma*/
   panjangArray = charCount();
   for (i = (panjangArray - 1); i >= 0; i--) {
      printf("%c", arrayChar[i]);
   }
}

#endif