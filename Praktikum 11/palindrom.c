/*Nama File     : palindrom.c*/
/*Deskripsi     : Sebuah mesin abstrak yang mengecek apakah kata pada pita karakter sebuah palindrom*/
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
    printf("Kata pada pita:\n");
    START();
    while(!EOP()){
		printf("%c",CC);
        arrayChar[i] = CC;
        ADV();
        i++;
    }

    if(PALINDROM(arrayChar)){
        printf("\nMerupakan Palindrom");
    }

    else{
        printf("\nBukan Palindrom");
    }

    getch();
	return 0;
}