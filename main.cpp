#include <iostream>

int main() {
#include <iostream>
#include "Contacto.h"
int main() {
    Contacto contacto1 = *new Contacto();
    Contacto contacto2 = *new Contacto();
    Contacto contacto4 = *new Contacto();

    contacto1.setNombre("Vanessa");
    contacto1.setEdad("20");
    contacto1.setCorreo("vannychal23@hotmail.com");
    contacto1.setTelefono("9211517065");
    std::cout << contacto1.getNombre() << " " << contacto1.getEdad() << " años " << "\n Correo "
              << contacto1.getCorreo() << "\n Número " << contacto1.getTelefono()<<"\n";


    int *arreglo = NULL;
    int cantidad;
    std::string valor;


    std::cout << "\n ¿Cuántos usuarios son? " << "\n";
    std::cin >> cantidad;

    arreglo = new int[cantidad];

    for (int i = 0; i < cantidad; i++) {
        std::cout << "DATOS DEL CONTACTO " << i+1<<": ";
        std::cout<<"\n NOMBRE DEl USUARIO:";
        std::cin >> valor;
        std::cout<<"\n";
        std::cout<<"EDAD:";
        std::cin >> valor;
        std::cout<<"\n";
        std::cout<<"EMAIL:";
        std::cin >> valor;
        std::cout<<"\n";
        std::cout<<"CELULAR:";
        std::cin >> valor;
        std::cout<<"\n";


    }
}
