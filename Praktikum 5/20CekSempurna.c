/*Nama File     : 20CekSempurna.c*/
/*Deskripsi     : Menentukan suatu bilangan integer positif termasuk bilangan sempurna atau bukan*/
/*Pembuat       : Naufal Dzaki Imtiyaz - 24060121120014*/
/*Tgl Pembuatan : Selasa. 15 Maret 2022*/

#include <stdio.h> /*Header file*/

int main(){ /*Program Utama*/
/*Kamus*/
    int N; /*bilangan*/
    int i; /*counter*/
    int jumlahFaktor; /*jumlah faktor-faktor bilangan N kecuali faktor yang nilainya sebesar N*/

/*Algoritma*/
    printf("Program Cek Bilangan Sempurna \n");
    printf("Masukkan nilai N = ");
    scanf("%d", &N);

    if (N <= 0){
        printf("N harus positif");
    }
    
    else{
        jumlahFaktor = 0;
        for(i = 1; i <= (N-1); i++){
            if ((N % i) == 0){
                jumlahFaktor = jumlahFaktor + i;
            }
        }
    }
    
    if (jumlahFaktor == N){
        printf("N = %d adalah bilangan sempurna", N);
    }

    else{
        printf("N = %d adalah bukan bilangan sempurna", N);
    }

    return 0;
}