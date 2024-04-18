# Ejercicio - S2A1 / Herencia

Resuelve el ejercicio opcional **S2A1 - Herencia**. Revisa los requisitos en el documento ```S2A1Herencia.pdf```.

## Diagrama de clases UML

Construye aquí el **Diagrama de clases UML** de tu solución. Puedes apoyarte con el [Editor Mermaid](https://mermaid.live/).

```mermaid
classDiagram
    Envio <|-- Sobre
    Envio <|-- Paquete

    Envio : # string re_nombre
    Envio : # string re_direccion
    Envio : # string re_ciudad
    Envio : # string re_estado
    Envio : # string re_cp

    Envio : # string de_nombre
    Envio : # string de_direccion
    Envio : # string de_ciudad
    Envio : # string de_estado
    Envio : # string de_cp

    Envio : # double largo
    Envio : # double ancho
    Envio : # double costo

    Envio : +Envio()
    Envio : +calculaCosto()

    Paquete : - double profundo

    Paquete : - double peso
    Paquete : - double costoXKg

    Paquete : + Paquete()
    Paquete : + calculaCosto()

    Sobre : - double cargoAdicional
    Sobre : + Sobre()
    Sobre : + calculaCosto()
```

## Sobre el repositorio

La carpeta contiene el código fuente y el archivo de construcción ```make```.

La carpeta `build` contiene el codigo binario generado por el archivo de construcción ```make```.

Consulta el archivo ```assignments/README.md``` para instrucciones sobre la compilación, ejecución y depuración de tu proyecto.
