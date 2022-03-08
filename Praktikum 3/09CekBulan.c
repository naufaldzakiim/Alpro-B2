/*Nama File     : 09CekBulan.c*/
/*Deskripsi     : Menampilkan pada layar nama-nama bulan dari sebuah masukan nomor bulan dari 1 sampai 12*/
/*Pembuat       : Naufal Dzaki Imtiyaz - 24060121120014*/
/*Tgl Pembuatan : Selasa. 8 Maret 2022*/

#include <stdio.h> /*Header file*/

int main(){ /*Program Utama*/
/*Kamus*/
    int i; /*nilai yang dibaca*/

/*Algoritma*/
    printf("Program Cek Bulan \n");
    printf("Masukkan nilai i = ");
    scanf("%d", &i);

    if (i >= 1 && i <= 12){  /*validasi masukan sudah benar atau belum*/
        if (i == 1){
            printf("Bulan Januari");
        }
        else if (i == 2){
            printf("Bulan Februari");
        }
        else if (i == 3){
            printf("Bulan Maret");
        }
        else if (i == 4){
            printf("Bulan April");
        }
        else if (i == 5){
            printf("Bulan Mei");
        }
        else if (i == 6){
            printf("Bulan Juni");
        }
        else if (i == 7){
            printf("Bulan Juli");
        }
        else if (i == 8){
            printf("Bulan Agustus");
        }
        else if (i == 9){
            printf("Bulan September");
        }
        else if (i == 10){
            printf("Bulan Oktober");
        }
        else if (i == 11){
            printf("Bulan November");
        }
        else if (i == 12){
            printf("Bulan Desember");
        }
    }
    
    else{
        printf("Masukan nomor bulan tidak tepat");
    }
    
    return 0;
}