// Carlos Augusto Mallmann Serena, Felipe
//ATEN��O: c�digo foi testado APENAS no Visual Studio Enterprise 2022, utilizando o compilador MSVC incluido nesta IDE.
// pode haver problemas ao utilizar outros compiladores
// para abrir o c�digo corretamente abra o arquivo SLN no Visual Studio Enterprise 2022.
// O c�digo foi feito para ser executado no terminal do Windows 10/11, n�o foi testado em outros sistemas operacionais. 
// Caso o professor insistir em utilizar um IDE/Compilador de terceiros e o programa n�o executar como esperado, o mesmo estar� afirmando que o Gremio nunca chegara aos pes do Internacional SC.

//tem que mostrar todos os chutes.
#include <iostream> //para usar o cout e cin
#include <stdlib.h> //para usar o system("cls") e rand
#include <time.h> //para gerar numeros aleatorios
#include "dicionario.hpp" //inclui o arquivo dicionario.hpp

void menuWordle()
{
    int qntPalavras = 0;
    int opcao = 0;
    do {
        // Exibe o menu
        cout << "===== W O R D L E ! (v0.1) =====" << endl;
        cout << "1. Iniciar Novo Jogo" << endl;
        cout << "2. Sobre" << endl;
        cout << "Escolha uma op��o: ";
        cin >> opcao;

        // Processa a escolha do jogador
        switch (opcao) 
        {
        case 1: // Inicia um novo jogo
            system("cls");
            cout<<"Com quantas palavras simultaneas voce deseja jogar? (1, 2, 3 ou 4): ";
            cin >> qntPalavras;
            enquantoJoga(qntPalavras, qntPalavras);
            break;
        case 2: // Creditos e mais informa��es sobre o jogo
            system("cls");
            cout << "Alunos: Carlos Augusto Mallmann Serena\n Felipe" << endl;
            cout<< "Disciplina: Algoritmos e Programa��o II" << endl;
            cout << "Professor: Marcos Carrard" << endl;
            cout << "Institui��o: UNIVALI" << endl;
            cout << "Ano: 2023" << endl;
            cout << "Vers�o: 0.1" << endl;
            cout << "REGRAS: " << endl;
            cout << "1. O jogo consiste em adivinhar uma palavra sorteada pelo computador." << endl;
            cout << "2. O jogador tem 7 tentativas para acertar a palavra." << endl;
            cout << "3. O jogador pode escolher entre 4 n�veis de dificuldade: 1 palavra, 2 palavras, 3 palavras ou 4 palavras simultaneas" << endl;

            // Creditos e mais informa��es sobre o jogo
            break;
        case 3: // Sair do jogo
			system("cls");
			cout << "Obrigado por jogar!" << endl;
			break;
        default: // Op��o inv�lida
            system("cls");
            cout << "Op��o inv�lida. Tente novamente." << endl;
            break;
        }
    } while (opcao != 3);  // Enquanto o jogador n�o escolher a op��o 3, o jogo continua, 3 seria o SAIR.
}


int tentativas(int NUM_PALAVRAS = 1) //fun��o que define a quantidade de tentativas de acordo com a quantidade de palavras escolhidas pelo jogador
{
    //static int vet1[1], vet2[1], vet3[1], vet4[1], vet5[1], vet6[1], vet7[1], vet8[1], vet9[1];
    static int mapa = 0;
    static int tentativas = 0;

    if (NUM_PALAVRAS == 1) //se o jogador escolher 1 palavra, ele ter� 7 tentativas
    {
		tentativas = 7;
	}
    else if (NUM_PALAVRAS == 2) //se o jogador escolher 2 palavras, ele ter� 7 tentativas
    {
		tentativas = 7;
	}
    else if (NUM_PALAVRAS == 3) //se o jogador escolher 3 palavras, ele ter� 8 tentativas
    {
		tentativas = 8;
	}
    else if (NUM_PALAVRAS == 4) //se o jogador escolher 4 palavras, ele ter� 9 tentativas
    {
		tentativas = 9;
	}
    else
    {
        system("cls");
		cout << "Op��o inv�lida. Tente novamente." << endl;
	}


    return tentativas;
}


int enquantoJoga(int qntPalavras, int qntPalavras2) 
{
    static string vet1[5], vet2[5], vet3[5], vet4[5], vet5[5], vet6[5], vet7[5], vet8[5], vet9[5];
    int qntTentativas = 0;

    string p1 = lista[rand() % TAM_LISTA]; //sorteia uma palavra da lista
    string p2 = lista[rand() % TAM_LISTA]; 
    string p3 = lista[rand() % TAM_LISTA];
    string p4 = lista[rand() % TAM_LISTA];

    qntTentativas = qntPalavras; 
    tentativas(qntPalavras); //chama a fun��o tentativas para definir a quantidade de tentativas de acordo com a quantidade de palavras escolhidas pelo jogador


    if (qntTentativas == 7 and qntPalavras2 == 1) //se o jogador escolher 1 palavra, ele ter� 7 tentativas
    {
        for (int i = 0; i < 7; i++)
        {
            cout << "digite uma palavra: ";
			cin >> vet1[i];
            if (vet1[i] == p1)
            {
                cout << "voce acertou";
            }
            else
            {
                cout << "voce errou";
            }
		}

    }
    else  if (qntTentativas == 7 and qntPalavras2 == 2) //se o jogador escolher 2 palavras, ele ter� 7 tentativas
    {
        for (int i = 0; i < 7; i++)
        {
            cout << "digite uma palavra: ";
            cin >> vet1[i];
            if (vet1[i] == p1 or vet1[i] == p2)
            {
                cout << "voce acertou";
            }
            else
            {
                cout << "voce errou";
            }
        }

    }
    else if (qntTentativas == 8 and qntPalavras2 == 3) //se o jogador escolher 3 palavras, ele ter� 8 tentativas
    {
        for (int i = 0; i < 8; i++)
        {
			cout << "digite uma palavra: ";
            cin >> vet1[i];
            if (vet1[i] == p1)
            {
				cout << "voce acertou";
			}
            else
            {
				cout << "voce errou";
			}
        }
    }
    else if (qntTentativas == 9 and qntPalavras2 == 4) // se o jogador escolher 4 palavras, ele ter� 9 tentativas
    {
        for (int i = 0; i < 9; i++)
        {
            cout<<"digite uma palavra: ";
            cin >> vet1[i];
            if (vet1[i] == p1) 
            {
				cout << "voce acertou";
			}
            else
            {
				cout << "voce errou";
			}
        }
    }
    
}

int main()
{
    srand(time(NULL)); // inicializa a semente de n�meros aleat�rios


    menuWordle();

    return 0;
}