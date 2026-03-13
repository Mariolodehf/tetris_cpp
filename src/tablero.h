#ifndef TABLERO_H
#define TABLERO_H

#include <cstdint> // Necesario para usar uint16_t (enteros de ancho fijo)

/**
 * Estructura principal que define el estado del juego.
 * Cumple con el requisito de MEMORIA DINÁMICA y BITWISE.
 */
struct Juego {
    // uint16_t usa 16 bits. Como el Tetris tiene 10 columnas, 
    // cada bit representará si una celda está ocupada (1) o vacía (0).
    uint16_t* grilla; 
    
    int filas;    // Número de filas (alto del tablero)
    int columnas; // Número de columnas (ancho del tablero, usualmente 10)
};

//  PROTOTIPOS DE FUNCIONES 

/**
 * Reserva el espacio en la memoria RAM para el tablero.
 */
void inicializarTablero(Juego &j, int f, int c);

/**
 * Libera la memoria solicitada con 'new' para evitar fugas de memoria.
 */
void liberarMemoria(Juego &j);

#endif // TABLERO_H
