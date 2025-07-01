#include <iostream>
using namespace std;

void bubblesort(int* vetor, int tam) {
    for (int i = tam - 1; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            int* atual = vetor + j;
            int* proximo = vetor + j + 1;
            if (*atual > *proximo) {
                int aux = *atual;
                *atual = *proximo;
                *proximo = aux;
            }
        }
    }
}

void selectionSort(int* vetor, int tam) {
    for (int* i = vetor; i < vetor + tam - 1; i++) {
        int* menor = i;
        for (int* j = i + 1; j < vetor + tam; j++) {
            if (*j < *menor) {
                menor = j;
            }
        }
        if (menor != i) {
            int aux = *i;
            *i = *menor;
            *menor = aux;
        }
    }
}

void insertionSort(int* vetor, int tam) {
    for (int* i = vetor + 1; i < vetor + tam; i++) {
        int valor = *i;
        int* j = i - 1;
        while (j >= vetor && *j > valor) {
            *(j + 1) = *j;
            j--;
        }
        *(j + 1) = valor;
    }
}

void listagem(int* vetor, int tam) {
    cout << "[ ";
    for (int i = 0; i < tam; i++) {
        cout << vetor[i] << " ";
    }
    cout << "]" << endl;
}
