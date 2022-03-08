/*Nama File     : 08CekHari.c*/
/*Deskripsi     : Menampilkan pada layar nama-nama hari dari sebuah masukan nomor hari 1 sampai 7*/
/*Pembuat       : Naufal Dzaki Imtiyaz - 24060121120014*/
/*Tgl Pembuatan : Selasa. 8 Maret 2022*/

#include <stdio.h> /*Header file*/

int main(){ /*Program Utama*/
/*Kamus*/
    int i; /*nilai yang dibaca*/

/*Algoritma*/
    printf("Program Cek Hari \n");
    printf("Masukkan nilai i = ");
    scanf("%d", &i);

    if (i >= 1 && i <= 7){  /*validasi masukan sudah benar atau belum*/
        if (i == 1){
            printf("Hari Minggu");
        }
        else if (i == 2){
            printf("Hari Senin");
        }
        else if (i == 3){
            printf("Hari Selasa");
        }
        else if (i == 4){
            printf("Hari Rabu");
        }
        else if (i == 5){
            printf("Hari Kamis");
        }
        else if (i == 6){
            printf("Hari Jum'at");
        }
        else if (i == 7){
            printf("Hari Sabtu");
        }
    }
    
    else{
        printf("Masukan nomor hari tidak tepat");
    }
    
    return 0;
}