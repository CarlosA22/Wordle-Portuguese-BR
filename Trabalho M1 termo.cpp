// Carlos Augusto Mallmann Serena, Felipe
//ATENÇÃO: código foi testado APENAS no Visual Studio Enterprise 2022, utilizando o compilador MSVC incluido nesta IDE.
// pode haver problemas ao utilizar outros compiladores
// para abrir o código corretamente abra o arquivo SLN no Visual Studio Enterprise 2022.
// O código foi feito para ser executado no terminal do Windows 10/11, não foi testado em outros sistemas operacionais. 
// Caso o professor insistir em utilizar um IDE/Compilador de terceiros e o programa não executar como esperado, o mesmo estará afirmando que o Gremio nunca chegara aos pes do Internacional SC.

#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <vector>
#include "dicionario.hpp"

void menuWordle()
{
    int qntPalavras = 0;
    int opcao = 0;
    do {
        // Exibe o menu
        cout << "===== W O R D L E ! (v0.1) =====" << endl;
        cout << "1. Iniciar Novo Jogo" << endl;
        cout << "2. Sobre" << endl;
        cout << "Escolha uma opção: ";
        cin >> opcao;

        // Processa a escolha do jogador
        switch (opcao) 
        {
        case 1:
            system("cls");
            cout<<"Com quantas palavras simultaneas voce deseja jogar? (1, 2, 3 ou 4): ";
            cin >> qntPalavras;
            tentativas(qntPalavras);
            break;
        case 2:
            system("cls");
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
            system("cls");
            cout << "Opção inválida. Tente novamente." << endl;
            break;
        }
    } while (opcao != 3);
}


void tentativas(int NUM_PALAVRAS = 1)
{
    static int vet1[1], vet2[1], vet3[1], vet4[1], vet5[1], vet6[1], vet7[1], vet8[1], vet9[1];
    static int mapa = 0;
    static int tentativas = 0;

    if (NUM_PALAVRAS == 1)
    {
		tentativas = 7;
	}
    else if (NUM_PALAVRAS == 2)
    {
		tentativas = 7;
	}
    else if (NUM_PALAVRAS == 3)
    {
		tentativas = 8;
	}
    else if (NUM_PALAVRAS == 4)
    {
		tentativas = 9;
	}
    else
    {
        system("cls");
		cout << "Opção inválida. Tente novamente." << endl;
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