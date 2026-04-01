#include "Assento.hpp"

Assento::Assento(int numero) : numero(numero), reservado(false) {
}

void Assento::reservar() {
    reservado = true;
}

void Assento::liberar() {
    reservado = false;
}

bool Assento::estaReservado() const {
    return reservado;
}

int Assento::getNumero() const {
    return numero;
}