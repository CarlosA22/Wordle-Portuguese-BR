// Carlos Augusto Mallmann Serena, Felipe
//ATENÇÃO: código foi testado APENAS no Visual Studio Enterprise 2022, utilizando o compilador MSVC incluido nesta IDE.
// pode haver problemas ao utilizar outros compiladores
// para abrir o código corretamente abra o arquivo SLN no Visual Studio Enterprise 2022.
// O código foi feito para ser executado no terminal do Windows 10/11, não foi testado em outros sistemas operacionais. 
// 

#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "dicionario.hpp"

void menuWordle()
{
    int opcao = 0;
    do {
        // Exibe o menu
        cout << "===== W O R D L E ! (v0.1) =====" << endl;
        cout << "1. Iniciar Novo Jogo" << endl;
        cout << "2. Sobre" << endl;
        cout << "Escolha uma opção: ";
        cin >> opcao;

        // Processa a escolha do jogador
        switch (opcao) {
        case 1:
            cout<<"Com quantas palavras simultaneas voce deseja jogar? (1, 2, 3 ou 4): ";
            // Lógica para iniciar um novo jogo
            break;
        case 2:
            cout << "Alunos: Carlos Augusto Mallmann Serena\n Felipe" << endl;
            cout<< "Disciplina: Algoritmos e Programação II" << endl;
            cout << "Professor: Marcos Carrard" << endl;
            cout << "Instituição: UNIVALI" << endl;
            cout << "Ano: 2023" << endl;
            cout << "Versão: 0.1" << endl;
            cout << "REGRAS: " << endl;
            cout << "1. O jogo consiste em adivinhar uma palavra sorteada pelo computador." << endl;
            cout << "2. O jogador tem 7 tentativas para acertar a palavra." << endl;
            cout << "3. O jogador pode escolher entre 4 níveis de dificuldade: 1 palavra, 2 palavras, 3 palavras ou 4 palavras simultaneas" << endl;

            // Creditos e mais informações sobre o jogo
            break;
        default:
            cout << "Opção inválida. Tente novamente." << endl;
            break;
        }
    } while (opcao != 3);
}

int dificuldade(int qntPalavras = 1)
{
    do {
		cout << "Com quantas palavras simultaneas voce deseja jogar? (1, 2, 3 ou 4): ";
		cin >> qntPalavras;
        if (qntPalavras < 1 || qntPalavras > 4)
        {
			cout << "Quantidade de palavras invalida";
		}
	} while (qntPalavras < 1 || qntPalavras > 4);
	
    return qntPalavras;
}

int tentativas()
{
    int  num_tentativas = 0;
    int  num_palavras = 0;


}

void mapaArray1()
{
    int mapa[5][7];
	int i, j;
    for (i = 0; i < 5; i++) {
		for (j = 0; j < 7; j++)
			mapa[i][j] = 0;
	}
    for (i = 0; i < 5; i++) {
		for (j = 0; j < 7; j++)
			cout << mapa[i][j] << " ";
		cout << endl;
	}
}


void palavrasDicionario()
{
    string p1 = lista[rand() % TAM_LISTA];
    string p2 = lista[rand() % TAM_LISTA];
    string p3 = lista[rand() % TAM_LISTA];
    string p4 = lista[rand() % TAM_LISTA];
}

int enquantoJoga(int mapa[5][7], bool& jogando)
{

}

int main()
{
    srand(time(NULL));


    menuWordle();

    return 0;
}