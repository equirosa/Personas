#ifndef PERSONA_H
#define PERSONA_H

#include <string>

using namespace std;

class Persona
{
public:
    Persona();
    Persona(string nombre, int edad, string nacionalidad);
    string getNombre();
    string getEdad();
    string getNacionalidad();
    string saludar(Persona amigo);
    string devolverSaludo(string saludo);
private:
    string nombre, nacionalidad;
    int edad;
};

#endif // PERSONA_H
