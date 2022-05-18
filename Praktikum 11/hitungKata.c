/*Nama File     : hitungKata.c*/
/*Deskripsi     : Sebuah mesin abstrak yang menghitung jumlah kata pada pita karakter*/
/*Pembuat       : Naufal Dzaki Imtiyaz - 24060121120014*/
/*Tgl Pembuatan : Rabu. 18 Mei 2022*/

#include<stdio.h>
#include<conio.h>
#include"mesinKarPlus.c"

int main(){
/*Kamus*/
    char C1, C2; /*variabel penampung karakter pada pita*/
    int wordCount; /*jumlah kata*/

/*Algoritma*/
	printf("awal pita\n");
    START();
    if(EOP()){ /*jika pita kosong*/
        wordCount = 0;
    }
    
    else{
        wordCount = 0;
        while(!EOP()){
            printf("%c",CC);
            C1 = CC;
            ADV();
            C2 = CC;
            
            if(C1 == SPACE && C2 != SPACE){
            wordCount++;
            }
        }
        
        wordCount += 1; /*+1 untuk menghitung kata terakhir*/
    }

    printf("\nakhir pita\n");
    printf("\nJumlah kata: %d", wordCount); 

	getch();
	return 0;
}