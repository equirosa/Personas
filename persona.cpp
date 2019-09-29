#include "persona.h"
#include <string>

using namespace std;

Persona::Persona()
{

}

Persona::Persona(string pNombre, int pEdad, string pNacionalidad){
    nombre = pNombre;
    edad = pEdad;
    nacionalidad = pNacionalidad;
}

string Persona::getNombre(){
    return nombre;
}

string Persona::getEdad(){
    return edad;
}

string Persona::getNacionalidad(){
    return nacionalidad;
}

string Persona::saludar(Persona amigo){
    string saludo = string("Hola!") + amigo.getNombre();
    string respuesta = amigo.devolverSaludo(saludo);
    return (saludo << string("\n") << respuesta);
}

string Persona::devolverSaludo(string saludo){
    string respuesta = string("Quien?");
    if (saludo == string("Hola!") + getNombre())
    respuesta = string("Buenos días");
    return (respuesta);
}
