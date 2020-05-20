
#ifndef UNTITLED_PERSONA_H
#define UNTITLED_PERSONA_H


class Persona {
    private:
        char nombres[100];
        char apellidos[100];
        char nacionalidad[100];
    public:
       Persona();
       Persona(char [],char [],char []);
       void toString();
};


#endif //UNTITLED_PERSONA_H
