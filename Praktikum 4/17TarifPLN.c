/*Nama File     : 17TarifPLN.c*/
/*Deskripsi     : Menghitung besarnya tarif biaya listrik yang dikenakan*/
/*Pembuat       : Naufal Dzaki Imtiyaz - 24060121120014*/
/*Tgl Pembuatan : Rabu. 9 Maret 2022*/

#include <stdio.h> /*Header file*/

int main(){ /*Program Utama*/
/*Kamus*/
    int golongan; /*golongan tarif, 1 s/d 2*/
    int daya;  /*pemakaian daya listrik, dalam kWH, daya > 0*/
    int tarif;  /*tarif yang dikenakan*/

/*Algoritma*/
    printf("Program Tarif PLN \n");
    printf("Masukkan golongan tarif = ");
    scanf("%d", &golongan);
    printf("Masukkan daya pemakaian = ");
    scanf("%d", &daya);

    if (golongan == 1){
        if (daya < 100){
            tarif = 100 * 1000;
        }
        else if (daya >= 100 && daya < 1000){
            tarif = daya * 1000;
        }
        else{
            tarif = daya * 1000 * 110/100;
        }
    }

    else{
        if (daya < 100){
            tarif = 100 * 2000;
        }
        else if (daya >= 100 && daya < 1000){
            tarif = daya * 2000;
        }
        else{
            tarif = daya * 2000 * 110/100;
        }
    }

    printf("Golongan %d, pemakaian %d kWH, maka jumlah bayarnya %d", golongan, daya, tarif);
    
    return 0;
}