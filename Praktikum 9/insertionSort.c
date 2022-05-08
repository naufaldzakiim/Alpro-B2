/*Nama File     : insertionSort.c*/
/*Deskripsi     : Melakukan sorting sebuah urutan angka dengan algoritma insertion sort dari bilangan terkecil ke terbesar*/
/*Pembuat       : Naufal Dzaki Imtiyaz - 24060121120014*/
/*Tgl Pembuatan : Sabtu. 07 Mei 2022*/

/*Header file*/
#include <stdio.h>
#include <math.h>

int main(){ /*Program Utama*/
/*Kamus*/
	int N; /*banyaknya bilangan atau panjang array*/
	int i; /*counter loop input bilangan yang ingin diurutkan*/
	void insertionSort(int array[], int panjangArray); /*deklarasi prosedur insertionSort*/
	void printArray(int array[], int panjangArray);    /*deklarasi prosedur printArray*/

/*Algoritma*/
	printf("Program Insertion Sort \n");
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
	
	insertionSort(arr, N); /*memanggil prosedur insertionSort untuk mengurutkan array*/
	
	printf("\nArray setelah diurutkan : \n");
	printArray(arr, N); /*mencetak array setelah diurutkan*/
	
	return 0;
}

void insertionSort(int array[], int panjangArray){ /*prosedur untuk menjalankan insertion sort*/
/*Kamus lokal*/
	int i; /*counter loop siklus sorting*/
	int j; /*counter loop memindahkan posisi*/
	int key; /*variabel penampung untuk elemen yang dijadikan poros*/
	
/*Algoritma*/
	/*looping siklus sorting array yang belum terurut*/
	for (i = 1; i < panjangArray; i++){
		/*menentukan elemen yang dijadikan sebagai poros*/
		key = array[i];
		
		j = i - 1;

		/*memindahkan posisi elemen yang lebih besar dari key ke posisi kanan atau selanjutnya dari posisi saat ini*/
		while (j >= 0 && array[j] > key){
			array[j + 1] = array[j];
			j -= 1;
		}
		
		/*key dipindahkan ke posisi yang tepat yaitu sebelah kiri dari elemen yang lebih besar dari key dan sebelah kanan dari elemen yang lebih kecil dari key*/
		array[j + 1] = key;
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