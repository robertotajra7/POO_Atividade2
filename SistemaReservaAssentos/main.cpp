#include <iostream>
#include "Sala.hpp"

int main() {
    Sala sala("Sala 1", 10);

    //Reservar alguns assentos
    sala.reservar(1);
    sala.reservar(3);
    sala.reservar(5);

    //Tentar reservar um assento já reservado
    sala.reservar(3);

    //Cancelar uma reserva
    sala.cancelar(3);

    //Exibir o mapa de assentos
    sala.exibirMapa();

    //Consultar disponibilidade
    std::cout << "\nAssentos disponiveis: "
              << sala.consultarDisponibilidade() << std::endl;

    return 0;
}