#!/usr/bin/env python
# _*_ coding: utf8 _*_

def main():
    # creacion de un diccionario basico
    diccionario = {"Nombre": "Frank", "Edad": 19, "Carrera": "Computacion"}
    print("\nCompleto")
    print(diccionario)

    # Agregar llaves
    diccionario["Ciclo"] = 4
    print("\nSe agrego una nueva llave")
    print(diccionario)

    # Eliminar llaves
    del diccionario["Edad"]
    print("\nSe elimino una llave")
    print(diccionario)

    # Modificar un valor
    diccionario["Nombre"] = "Joel"
    print("\nSe modifico una llave")
    print(diccionario)

    # Obtener solo el valor
    valor1 = diccionario["Nombre"]
    valor2 = diccionario.get("f", "Error")
    print(valor1)
    print(valor2)

    # Obtener todas las llaves
    llaves = list(diccionario.keys())
    print("\nImpresion de llaves")
    print(llaves)

    # Ontener los valores
    valores = list(diccionario.values())
    print("\nImpresion de valores")
    print(valores)

    # Extender el diccionario
    diccionario2 = {"Apellido": "Saca", "Cedula": "451521"}
    diccionario.update(diccionario2)
    print("\nDiccionario actualizado")
    print(diccionario)


if __name__ == "__main__":
    main()
