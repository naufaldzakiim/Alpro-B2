#ifndef MESINKARPLUS_H
#define MESINKARPLUS_H

#ifndef MARK
#define MARK '.'
#endif

#ifndef SPACE
#define SPACE ' '
#endif

#ifndef ENTER
#define ENTER 10
#endif

char CC; /* definisi states */

/*Prototype*/
void START();
/* I.S. sembarang */
/* F.S. CC adalah karakter pertama pita */
/*      Jika CC==MARK, EOP menyala(true) */
/*      Jika CC!=MARK, EOP padam(false) */

void ADV();
/* I.S. CC!=MARK */
/* F.S. CC adalah karakter berikutnya CC pada I.S */
/*      Jika CC==MARK, EOP menyala(true) */

int EOP();
/* true jika CC==MARK */

int charCount();
/*menghitung jumlah karakter pada pita*/

int PALINDROM(char arrayChar[]);
/*true jika character pada array adalah sebuah palindrom*/

void INVERSE(char arrayChar[]);
/*me-inverse atau membalikkan urutan character pada array*/

#endif // MESINKAR_H_INCLUDED
