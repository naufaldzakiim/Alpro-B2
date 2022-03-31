/*Nama File     : 24Tetris1.c*/
/*Deskripsi     : Menampilkan susunan karakter '*' pada layar*/
/*Pembuat       : Naufal Dzaki Imtiyaz - 24060121120014*/
/*Tgl Pembuatan : Selasa. 29 Maret 2022*/

#include <stdio.h> /*Header file*/

int main(){ /*Program Utama*/
/*Kamus*/
    int i; /*counter pertama*/
    int j; /*counter kedua*/
    int N; /*banyaknya baris*/

/*Algoritma*/
    printf("Program Tetris 1 \n");
    printf("Masukkan nilai N = ");
    scanf("%d", &N);

    if (N <= 0){
        printf("N harus positif");
    }
    
    else{
        for (i = N; i >= 1; i--){       /*looping baris*/
            for (j = 1; j <= i; j++){   /*looping kolom*/
                printf("*");
                if (j == i){
                    printf(" --%d", j);
                }
            }
            printf("\n");
        }
    }

    return 0;
}