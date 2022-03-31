/*Nama File     : 25Tetris2.c*/
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
    printf("Program Tetris 2\n");
    printf("Masukkan nilai N = ");
    scanf("%d", &N);

    if (N <= 0){
        printf("N harus positif");
    }
    
    else{
        for (i = 1; i <= N; i++){       /*looping 1 sampai N*/
            for (j = 1; j <= i; j++){
                printf("*");
                if (j == i){
                    printf(" --%d", j);
                }
            }
            printf("\n");
        }

        for (i = (N-1); i >= 1; i--){       /*looping (N-1) sampai 1*/
            for (j = 1; j <= i; j++){   
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