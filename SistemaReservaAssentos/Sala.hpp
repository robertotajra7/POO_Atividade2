#ifndef SALA_HPP
#define SALA_HPP

#include <string>
#include <vector>
#include "Assento.hpp"

class Sala {
private:
    std::string nome;
    std::vector<Assento> assentos;
    Assento* buscarAssento(int numero);

public:
    Sala(const std::string& nome, int quantidadeAssentos);
    bool reservar(int numero);
    bool cancelar(int numero);
    void exibirMapa() const;
    int consultarDisponibilidade() const;
};

#endif