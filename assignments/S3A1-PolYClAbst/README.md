# Ejercicio - S3A1 / Polimorfismo y Clases Abstractas

Resuelve el ejercicio opcional **S3A1 - Polimorfismo y Clases Abstractas**. Revisa los requisitos en el documento ```S3A1PolyClAbst.pdf```.

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

    Envio : # double costo
    
    Envio : # double largo
    Envio : # double ancho

    Envio : +Envio()
    Envio : virtual ~Envio()
    Envio : +print_reDir()
    Envio : +print_deDir()
    Envio : +virtual calculaCosto()

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
