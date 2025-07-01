/*
Projeto: Ordenação com Ponteiros.
Autor: Otavio Augusto Miguel        Matricula: 2025.1.08.041
Disciplina: Algoritmo e estrutura de dados
Criado em 17/06/25
Local: Universidade Federal de Alfenas
Objetivo: Desenvolver um algoritmo que utiliza os principais métodos de ordenação (Bubble Sort, 
Selection Sort e Insertion Sort) utilizando ponteiros 
*/

#include <iostream>
#include <windows.h> // Biblioteca para acentuação no Windows
#include "Biblioteca.h" // Biblioteca da ordenação

using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8); // Permite acentuação no Windows

    const int tam = 6;
    int vetor[tam];

    // Escrita dos elementos de um vetor
    cout << "Escreva 6 elementos de um vetor:\n";
    for (int i = 0; i < tam; i++) {
        cin >> vetor[i];
    }

    // Mostra o vetor original
    cout << "\nVetor original:\n";
    listagem(vetor, tam);

    // Bubble Sort
    bubblesort(vetor, tam);
    cout << "\nVetor após ordenação por Bubble Sort:\n";
    listagem(vetor, tam);

    // Selection Sort
    selectionSort(vetor, tam);
    cout << "\nVetor após ordenação por Selection Sort:\n";
    listagem(vetor, tam);

    // Insertion Sort
    insertionSort(vetor, tam);
    cout << "\nVetor após ordenação por Insertion Sort:\n";
    listagem(vetor, tam);

    return 0;
}
