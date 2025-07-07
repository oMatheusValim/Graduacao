/*Você foi contratado por uma revendedora de veículos para desenvolver um programa que ajude a identificar o carro mais barato dentre uma lista de carros disponíveis para venda. Cada carro é descrito por cinco informações: fabricante, modelo, ano, cor e preço.

Seu programa deverá ler os dados de N carros e informar, ao final, o modelo do carro mais barato.
Entrada

A entrada consiste de:

    Um número inteiro N (1 ≤ N ≤ 100), representando a quantidade de carros.
    Em seguida, N linhas contendo as informações de cada carro, uma por linha, no seguinte formato:

fabricante modelo ano cor preco

    fabricante: uma string sem espaços (máximo 20 caracteres).
    modelo: uma string sem espaços (máximo 20 caracteres).
    ano: um número inteiro entre 1900 e 2100.
    cor: uma string sem espaços (máximo 20 caracteres).
    preco: um número real positivo com no máximo duas casas decimais.

Saída

Seu programa deve imprimir uma única linha contendo o modelo do carro mais barato. Se houver mais de um carro com o menor preço, imprima o modelo do primeiro deles que apareceu na entrada.*/
#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

struct Carro{
    string fabricante, modelo, cor;
    int ano;
    double preco;
};

int main(){
    int numCarros;
    cin >> numCarros;

    vector<Carro> car(numCarros);
    for(int i=0; i<numCarros; i++){
        cin >> car[i].fabricante >> car[i].modelo >> car[i].ano >>  car[i].cor >>  car[i].preco;
    }

    string modeloBarato = car[0].modelo;
    double precoBarato = car[0].preco;

    for(int i=1; i<numCarros; i++){
        if(precoBarato > car[i].preco){
            precoBarato = car[i].preco;
            modeloBarato = car[i].modelo;
        }
    }
    cout << modeloBarato << endl;

}