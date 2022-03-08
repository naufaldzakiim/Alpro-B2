/*Nama File     : 10CekSeriPositif.c*/
/*Deskripsi     : Menghitung total 3 tahanan yang dirangkai seri dan menampilkan pada layar sebuah pesan kesalahan jika salah satu masukan tahanan bernilai negatif*/
/*Pembuat       : Naufal Dzaki Imtiyaz - 24060121120014*/
/*Tgl Pembuatan : Selasa. 8 Maret 2022*/

#include <stdio.h> /*Header file*/

int main(){ /*Program Utama*/
/*Kamus*/
    int i; /*nilai tahanan 1*/
    int j; /*nilai tahanan 2*/
    int k; /*nilai tahanan 3*/

/*Algoritma*/
    printf("Program Cek Seri Positif \n");
    printf("Masukkan nilai tahanan 1 = ");
    scanf("%d", &i);
    printf("Masukkan nilai tahanan 2 = ");
    scanf("%d", &j);
    printf("Masukkan nilai tahanan 3 = ");
    scanf("%d", &k);

    if (i >= 0 && j >= 0 && k >= 0){  /*validasi semua tahanan bernilai negatif*/
        printf("Total tahanan jika dirangkai seri = %d", i+j+k);
    }
    
    else{ /*terdapat salah satu tahanan yang bernilai negatif*/
        printf("Masukan tahanan tidak boleh negatif");
    }
    
    return 0;
}