//
// Created by Graphic Design on 10/04/18.
//

#ifndef FINALPARTIALHWK_CONTACTO_H
#define FINALPARTIALHWK_CONTACTO_H

#include <iostream>

class Contacto {
private:
    std::string Nombre,Telefono,Correo,Edad;

public:
    Contacto();
    std::string getNombre();
    std::string getTelefono();
    std::string getCorreo();
    std::string getEdad();
    void setNombre(std::string Nombre);
    void setTelefono(std::string Telefono);
    void setCorreo(std::string Correo);
    void setEdad(std::string Edad);

};


#endif //FINALPARTIALHWK_CONTACTO_H
