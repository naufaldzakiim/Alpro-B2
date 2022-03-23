/*Nama File     : 19CekPrima.c*/
/*Deskripsi     : Menentukan suatu bilangan integer positif termasuk bilangan prima atau bukan*/
/*Pembuat       : Naufal Dzaki Imtiyaz - 24060121120014*/
/*Tgl Pembuatan : Selasa. 15 Maret 2022*/

#include <stdio.h> /*Header file*/

int main(){ /*Program Utama*/
/*Kamus*/
    int N; /*bilangan*/
    int i; /*counter*/
    int banyakFaktor; /*banyaknya faktor bilangan N*/

/*Algoritma*/
    printf("Program Cek Bilangan Prima \n");
    printf("Masukkan nilai N = ");
    scanf("%d", &N);

    if (N <= 0){
        printf("N harus positif");
    }
    
    else{
        banyakFaktor = 0;
        for(i = 1; i <= N; i++){
            if ((N % i) == 0){
                banyakFaktor = banyakFaktor + 1;
            }
        }
    }
    
    if (banyakFaktor == 2){
        printf("N = %d adalah bilangan prima", N);
    }

    else{
        printf("N = %d adalah bukan bilangan prima", N);
    }

    return 0;
}