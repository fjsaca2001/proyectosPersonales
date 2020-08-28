def insertar():
    lista = []
    b = True
    while b:
        dato = input("Ingrese un dato para agregar a la lista: ")
        cond = input("Desea ingresar otro valor y/n: ")
        lista.append(dato)
        b = True if cond == "y" else print(lista)


insertar()
