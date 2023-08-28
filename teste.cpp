#include <iostream>
using namespace std;
#include <stdlib.h>
#include <time.h>
#include "dicionario.hpp"

int main(){
    srand(time(NULL));

    string p1 = lista[rand()%TAM_LISTA];
    string p2 = lista[rand()%TAM_LISTA];
    string p3 = lista[rand()%TAM_LISTA];
    cout << "Palavra 1: " << p1 << endl;
    cout << "Palavra 2: " << p2 << endl;
    cout << "Palavra 3: " << p3 << endl;
}
