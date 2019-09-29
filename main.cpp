#include <iostream>
#include <string.h>
#include "persona.cpp"

using namespace std;

int main()
{
    Persona pedro, alicia;
    alicia = *new Persona("Alicia",int(22),"Costarricense");
    pedro = *new Persona("Pedro",int(24),"Peruano");

    string intercambio = alicia.saludar(pedro);

    cout << intercambio << endl;

    return 0;
}
