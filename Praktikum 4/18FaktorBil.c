/*Nama File     : 18FaktorBil.c*/
/*Deskripsi     : Menentukan faktor-faktor bilangan dari suatu bilangan integer positif*/
/*Pembuat       : Naufal Dzaki Imtiyaz - 24060121120014*/
/*Tgl Pembuatan : Selasa. 15 Maret 2022*/

#include <stdio.h> /*Header file*/

int main(){ /*Program Utama*/
/*Kamus*/
    int N; /*bilangan*/
    int i; /*counter*/

/*Algoritma*/
    printf("Program Faktor Bilangan \n");
    printf("Masukkan nilai N = ");
    scanf("%d", &N);
    printf("N = %d, faktor bilangannya adalah : \n", N);

    if (N <= 0){
        printf("N harus positif");
    }
    
    else{
        for(i = 1; i <= N; i++){
            if ((N % i) == 0){
                printf(" %d", i);
            }
        }
    }

    return 0;
}