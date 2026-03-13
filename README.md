# Tetris Bitwise C++ - Proyecto de Curso

Este repositorio alberga el desarrollo incremental del juego Tetris para la asignatura de **Informática II (UdeA)**. El proyecto se centra en el manejo eficiente de memoria, lógica de bajo nivel y programación orientada a objetos.

## 🚩 Estado Actual: Desafío I (Fundamentos y Core)
En esta primera etapa, se ha establecido la arquitectura base y la gestión de datos principal:

- **Programación Modular**: Estructura de archivos definida en `/src` con separación de interfaces (`.h`) e implementaciones (`.cpp`).
- **Memoria Dinámica**: Implementación de la grilla del juego mediante punteros y gestión en el Heap para permitir tableros de tamaño variable.
- **Lógica de Bits (Bitwise)**: Configuración del tablero utilizando `uint16_t`, optimizando cada fila a una representación binaria de 16 bits.
- **Documentación**: Inclusión del informe técnico preliminar en la carpeta `/informe`.

## 📁 Estructura del Repositorio
- `/src`: Lógica central (Core) del motor del juego.
- `/informe`: Entregables teóricos y avances por desafío.
- `/docs`: Documentación técnica y diagramas de arquitectura.

## 👥 Integrantes
- Bernardo Patiño
- Mario de Hoyos

----
*Próximamente: Integración con Qt Framework y lógica de colisiones.*
