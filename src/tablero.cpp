#include "tablero.h"

// Función para pedir memoria dinámica (new)
void inicializarTablero(Juego &j, int f, int c) {
    j.filas = f;
    j.columnas = c;
    // REQUISITO: Memoria dinámica en el HEAP
    j.grilla = new uint16_t[f]; 
    
    for(int i = 0; i < f; i++) {
        j.grilla[i] = 0; // Limpiar filas
    }
}

// Función para liberar la memoria (delete)
void liberarMemoria(Juego &j) {
    if (j.grilla != nullptr) {
        delete[] j.grilla;
        j.grilla = nullptr;
    }
}
