#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int array[100];
int arrayDez[10000];
long arrayCinquenta[50000];
long arrayCem[100000];

void MontaArray(int array[], int tamanho);
void PrintArray(int array[], int tamanho);
void ShellSort(int array[], int tamanho);

void MontaArrayLong(long array[], long tamanho);
void PrintArrayLong(long array[], long tamanho);
void ShellSortLong(long array[], long tamanho);

int main(int argc, char** argv){
	
	ShellSortLong(arrayCem, 100000);
	PrintArrayLong(arrayCem, 100000);
	
}


void ShellSort(int array[], int tamanho){	
	for(int gap = tamanho/2; gap >= 1; gap = gap/2){
		for(int j = gap; j < tamanho;j++){
			for(int i = j - gap; i >= 0; i = i - gap){
				if(array[i + gap] > array[i]){
					break;
				}else{
					int aux = array[i];
					array[i] = array[i+gap];
					array[i+gap] = aux;
				}				
			}	
		}
	}
}

void MontaArray(int array[], int tamanho){	
	for(int i = 0;i < tamanho;i++){
		array[i] = rand();
	}
}

void PrintArray(int array[], int tamanho){
	for(int i = 0;i < tamanho;i++){
		printf("\n%d", array[i]);
	}
}


void MontaArrayLong(long array[], long tamanho){	
	for(long i = 0;i < tamanho;i++){
		array[i] = rand();
	}
}

void PrintArrayLong(long array[], long tamanho){
	for(long i = 0;i < tamanho;i++){
		printf("\n%d", array[i]);
	}
}

void ShellSortLong(long array[], long tamanho){	
	for(long gap = tamanho/2; gap >= 1; gap = gap/2){
		for(long j = gap; j < tamanho;j++){
			for(long i = j - gap; i >= 0; i = i - gap){
				if(array[i + gap] > array[i]){
					break;
				}else{
					long aux = array[i];
					array[i] = array[i+gap];
					array[i+gap] = aux;
				}				
			}	
		}
	}
}
