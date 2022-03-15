/*Nama File     : 16TunjAnak.c*/
/*Deskripsi     : Menghitung besarnya tunjangan anak yang diberikan*/
/*Pembuat       : Naufal Dzaki Imtiyaz - 24060121120014*/
/*Tgl Pembuatan : Rabu. 9 Maret 2022*/

#include <stdio.h> /*Header file*/

int main(){ /*Program Utama*/
/*Kamus*/
    int jumlahAnak; /*banyaknya anak, jumlahAnak >= 0*/
    int gajiPokok;  /*gaji pokok, gajiPokok > 0*/
    int tunjangan;  /*tunjangan yang diberikan*/

/*Algoritma*/
    printf("Program Tunjangan Anak \n");
    printf("Masukkan jumlah anak = ");
    scanf("%d", &jumlahAnak);
    printf("Masukkan gaji pokok = ");
    scanf("%d", &gajiPokok);

    if (jumlahAnak <= 3){
        tunjangan = jumlahAnak * (gajiPokok * 10/100);
    }

    else{
        tunjangan = 3 * (gajiPokok * 10/100);
    }

    printf("Tunjangan yang diberikan = %d", tunjangan);

    return 0;
}