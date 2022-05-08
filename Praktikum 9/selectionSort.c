/*Nama File     : selectionSort.c*/
/*Deskripsi     : Melakukan sorting sebuah urutan angka dengan algoritma selection sort dari bilangan terkecil ke terbesar*/
/*Pembuat       : Naufal Dzaki Imtiyaz - 24060121120014*/
/*Tgl Pembuatan : Sabtu. 07 Mei 2022*/

/*Header file*/
#include <stdio.h>

int main(){ /*Program Utama*/
/*Kamus*/
	int N; /*banyaknya bilangan atau panjang array*/
	int i; /*counter loop input bilangan yang ingin diurutkan*/
	void swap(int* xp, int* yp); 					   /*deklarasi prosedur swap*/
	void selectionSort(int array[], int panjangArray); /*deklarasi prosedur selectionSort*/
	void printArray(int array[], int panjangArray);    /*deklarasi prosedur printArray*/

/*Algoritma*/
	printf("Program Selection Sort \n");
    printf("Banyaknya bilangan yang ingin diurutkan = ");
    scanf("%d", &N);
	
	int arr[N]; /*deklarasi array integer*/
	
	printf("\nMasukkan bilangan-bilangan yang ingin diurutkan :\n");
	for(i = 0; i < N; i++){ /*input bilangan-bilangan yang ingin diurutkan*/
		printf("Bilangan ke-%d = ", i+1);
		scanf("%d", &arr[i]);
	}

	printf("\nArray sebelum diurutkan : \n");
	printArray(arr, N); /*mencetak array sebelum diurutkan*/
	
	selectionSort(arr, N); /*memanggil prosedur selectionSort untuk mengurutkan array*/
	
	printf("\nArray setelah diurutkan : \n");
	printArray(arr, N); /*mencetak array setelah diurutkan*/
	
	return 0;
}

void swap(int* xp, int* yp){ /*prosedur untuk swap atau menukar posisi*/
/*Kamus lokal*/
	int temp; /*variabel penampung*/

/*Algoritma*/
	temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void selectionSort(int array[], int panjangArray){
/*Kamus lokal*/
	int i; /*counter loop siklus sorting*/
	int j; /*counter loop pencarian elemen terkecil*/
	int smolElement; /*elemen terkecil dari array yang belum terurut*/

/*Algoritma*/
	/*looping siklus sorting array yang belum terurut*/
	for (i = 0; i < panjangArray-1; i++){
		smolElement = i;
		
		/*looping mencari elemen terkecil dari array yang belum terurut*/
		for (j = i+1; j < panjangArray; j++){
			if (array[j] < array[smolElement])
				smolElement = j;
		}

		/*menukar posisi elemen terkecil dengan elemen pertama array yang belum terurut*/
		swap(&array[smolElement], &array[i]);
	}
}

void printArray(int array[], int panjangArray){ /*prosedur untuk mencetak array*/
/*Kamus lokal*/
	int i; /*counter*/

/*Algoritma*/
	/*loop mencetak setiap elemen dalam sebuah array*/
	for (i = 0; i < panjangArray; i++){
		printf("%d ", array[i]);
	}

	printf("\n");
}