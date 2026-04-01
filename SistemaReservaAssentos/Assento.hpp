#ifndef ASSENTO_HPP
#define ASSENTO_HPP

class Assento {
private:
    int numero;
    bool reservado;

public:
    Assento(int numero);
    void reservar();
    void liberar();
    bool estaReservado() const;
    int getNumero() const;
};

#endif