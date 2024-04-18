# Ejercicio - S5A1 / Manejo de Excepciones

Resuelve el ejercicio opcional **S5A1 - Manejo de Excepciones**. Revisa los requisitos en el documento ```S5A1Exc.pdf```.

## Diagrama de clases UML

Construye aquí el **Diagrama de clases UML** de tu solución. Puedes apoyarte con el [Editor Mermaid](https://mermaid.live/).

```mermaid
classDiagram
    class Fraccion
    class ExcDenZero
    Fraccion : -int num
    Fraccion : -int den

    Fraccion : +Fraccion()

    Fraccion : -simplifica()

    Fraccion : +operator+(Fraccion)
    Fraccion : +operator-(Fraccion)
    Fraccion : +operator*(Fraccion)
    Fraccion : +operator/(Fraccion)

    Fraccion : +operator<(Fraccion)
    Fraccion : +operator>(Fraccion)
    Fraccion : +operator==(Fraccion)

    Fraccion : +print()
    Fraccion : +print(int)
    Fraccion : +fprint()

    ExcDenZero : +what()
```

## Sobre el repositorio

La carpeta contiene el código fuente y el archivo de construcción ```make```.

La carpeta `build` contiene el codigo binario generado por el archivo de construcción ```make```.

Consulta el archivo ```assignments/README.md``` para instrucciones sobre la compilación, ejecución y depuración de tu proyecto.
