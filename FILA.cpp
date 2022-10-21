#include <iostream>
#include <stdlib.h>
#include <string>
#define TAM 10

using namespace std;

void imprime_vetor(int vetor[TAM], int tamanho){

    //Auxiliar contador
    int cont;

    cout << "\n";

     //Imprime o vetor
    for(cont = 0; cont < TAM; cont++){
        cout << vetor[cont] << " - ";
    }
}

void fila_construtor(int *frente, int *tras){
    *frente = 0;
    *tras = -1;
}

bool fila_vazia(int frente, int tras){
    if(frente > tras){
        return true;
    }else{
        return false;
    }
}

bool fila_cheia(int tras){

    if(tras == TAM -1){
        return true;
    }else{
        return false;
    }
}

void fila_enfileirar(int fila[TAM], int valor, int *tras){

    if(fila_cheia(*tras)){
        cout << "Fila cheia!";
    }else{
        *tras = *tras + 1;
        fila[*tras] = valor;
        cout << "\n\nO valor: " << fila[*tras] << " foi adicionado";
    }

}

void fila_desenfileirar(int fila[TAM], int *frente, int tras){

    if(fila_vazia(*frente, tras)){
        cout << "\nImpossivel desenfileirar uma lista vazia";
    }else{
        cout << "\n\nO valor: " << fila[*frente] << " foi removido";
        fila[*frente] = 0;
        *frente = *frente + 1;
    }

}

int fila_tamanho(int tras, int frente){
    return (tras - frente) + 1;
}

int main(){

    int fila[TAM] = {0,0,0,0,0,0,0,0,0,0};
    int frente,tras;
    int valor;

    fila_construtor(&frente, &tras);

    fila_enfileirar(fila, 1, &tras);
    imprime_vetor(fila, fila_tamanho(tras,frente)) ;
    fila_enfileirar(fila, 2, &tras);
    imprime_vetor(fila, fila_tamanho(tras,frente)) ;
    fila_enfileirar(fila, 3, &tras);
    imprime_vetor(fila, fila_tamanho(tras,frente)) ;
    fila_enfileirar(fila, 4, &tras);
    imprime_vetor(fila, fila_tamanho(tras,frente)) ;
    fila_enfileirar(fila, 5, &tras);
    imprime_vetor(fila, fila_tamanho(tras,frente)) ;
    fila_enfileirar(fila, 6, &tras);
    imprime_vetor(fila, fila_tamanho(tras,frente)) ;
    fila_enfileirar(fila, 7, &tras);
    imprime_vetor(fila, fila_tamanho(tras,frente)) ;
    fila_enfileirar(fila, 8, &tras);
    imprime_vetor(fila, fila_tamanho(tras,frente)) ;
    fila_enfileirar(fila, 9, &tras);
    imprime_vetor(fila, fila_tamanho(tras,frente)) ;
    fila_enfileirar(fila, 10, &tras);
    imprime_vetor(fila, fila_tamanho(tras,frente)) ;
    fila_desenfileirar(fila,&frente, tras);
    imprime_vetor(fila, fila_tamanho(tras,frente)) ;
    fila_desenfileirar(fila,&frente, tras);
    imprime_vetor(fila, fila_tamanho(tras,frente)) ;
    fila_desenfileirar(fila,&frente, tras);
	imprime_vetor(fila, fila_tamanho(tras,frente)) ;
	fila_desenfileirar(fila,&frente, tras);
	imprime_vetor(fila, fila_tamanho(tras,frente)) ;

  
    return 0;
}
