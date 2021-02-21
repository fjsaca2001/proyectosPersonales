# Inicializacion de variables
b = True
lista = [0]
# Ciclo repetitivo para evitar el ingreso de valores menores a 3
while b:
	tamV = int (input("Ingrese el tamaño del vector. (Debe ser igual o mayor a 3 e impar): "))
	if tamV >=  3 and (tamV % 2) != 0:
		b = False
#Calculo del cuadrado perfecto y almacenado en una variable tipo lista
for a in range(1,tamV+1):
	aux  = a * a
	lista.append(aux)
# Eliminacion del primer valor inicializado en la variable
lista.remove(0)
# Presentacion de la lista con los cuadrados perfectos
print ("Esta es la lista con los cuadrados perfectos:",lista)
# Presentacion del valor medio
print ("El valor medio es: ",lista[int((tamV/2))])