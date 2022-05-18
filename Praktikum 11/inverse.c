/*Nama File     : inverse.c*/
/*Deskripsi     : Sebuah mesin abstrak yang me-inverse atau membalikkan urutan karakter pada pita karakter*/
/*Pembuat       : Naufal Dzaki Imtiyaz - 24060121120014*/
/*Tgl Pembuatan : Rabu. 18 Mei 2022*/

#include<stdio.h>
#include<conio.h>
#include"mesinKarPlus.c"

int main(){
/*Kamus*/
    char arrayChar[100]; /*array penampung karakter pada pita*/
    int i = 0; /*counter pengisian array character*/

/*Algoritma*/
    printf("Pita asli:\n");
    START();
    while(!EOP()){
		printf("%c",CC);
        arrayChar[i] = CC;
        ADV();
        i++;
    }

    printf("\n\nPita setelah di-inverse:\n");
    INVERSE(arrayChar);

    getch();
	return 0;
}