# Ejercicio - S4A1 / Sobrecarga de operadores

Resuelve el ejercicio opcional **S4A1 - Sobrecarga de Operadores**. Revisa los requisitos en el documento ```S4A1SobOp.pdf```.

## Diagrama de clases UML

Construye aquí el **Diagrama de clases UML** de tu solución. Puedes apoyarte con el [Editor Mermaid](https://mermaid.live/).

```mermaid

classDiagram
    class Fraccion
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

    Fraccion : +operator<<()
    Fraccion : +print(int)
    Fraccion : +fprint()

```


## Sobre el repositorio

La carpeta contiene el código fuente y el archivo de construcción ```make```.

La carpeta `build` contiene el codigo binario generado por el archivo de construcción ```make```.

Consulta el archivo ```assignments/README.md``` para instrucciones sobre la compilación, ejecución y depuración de tu proyecto.
