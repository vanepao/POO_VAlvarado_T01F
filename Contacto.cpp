//
// Created by Graphic Design on 10/04/18.
//

#include "Contacto.h"
Contacto::Contacto() {
    this->Correo="";
    this->Edad="";
    this->Nombre="";
    this->Telefono="";
}
std::string Contacto::getNombre() {
    return this->Nombre;
}

std::string Contacto::getTelefono() {
    return this->Telefono;
}

std::string Contacto::getCorreo() {
    return this->Correo;
}

std::string Contacto::getEdad() {
    return this->Edad;
}

void Contacto::setNombre(std::string Nombre) {
    this->Nombre=Nombre;

}
void Contacto::setTelefono(std::string Telefono) {
    this->Telefono=Telefono
}
void Contacto::setCorreo(std::string Correo) {
    this->Correo=Correo;
}
void Contacto::setEdad(std::string Edad) {
    this->Edad=Edad;
}

