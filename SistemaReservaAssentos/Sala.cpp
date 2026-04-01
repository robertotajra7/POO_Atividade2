#include "Sala.hpp"
#include <iostream>

Sala::Sala(const std::string& nome, int quantidadeAssentos) : nome(nome) {
    for (int i = 1; i <= quantidadeAssentos; i++) {
        assentos.push_back(Assento(i));
    }
}

Assento* Sala::buscarAssento(int numero) {
    if (numero < 1 || numero > assentos.size()) {
        return nullptr;
    }
    return &assentos[numero - 1];
}

bool Sala::reservar(int numero) {
    Assento* a = buscarAssento(numero);

    if (a == nullptr) {
        std::cout << "Assento inexistente.\n";
        return false;
    }

    if (a->estaReservado()) {
        std::cout << "Erro: assento ja esta reservado.\n";
        return false;
    }

    a->reservar();
    std::cout << "Assento reservado com sucesso.\n";
    return true;
}

bool Sala::cancelar(int numero) {
    Assento* a = buscarAssento(numero);

    if (a == nullptr) {
        std::cout << "Assento inexistente.\n";
        return false;
    }

    if (!a->estaReservado()) {
        std::cout << "Erro: assento nao esta reservado.\n";
        return false;
    }

    a->liberar();
    std::cout << "Reserva cancelada com sucesso.\n";
    return true;
}

void Sala::exibirMapa() const {
    std::cout << "\nMapa de assentos da sala " << nome << ":\n";

    for (const auto& a : assentos) {
        std::cout << "Assento " << a.getNumero() << ": ";
        if (a.estaReservado()) {
            std::cout << "[X]\n";
        } else {
            std::cout << "[ ]\n";
        }
    }
}

int Sala::consultarDisponibilidade() const {
    int livres = 0;

    for (const auto& a : assentos) {
        if (!a.estaReservado()) {
            livres++;
        }
    }

    return livres;
}