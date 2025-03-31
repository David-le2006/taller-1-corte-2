vertices = []
caras = []
print("\n--- MENÚ ---\n1. Registrar vértices\n2. Registrar caras\n3. Imprimir figura\n4. Salir")

while True:
    opcion = input ("\n Eligue una opcion: ")
    if opcion == "1":
        x = input ("Intoduce el valor de x: ")
        y = input ("Intoduce el valor de y: ")
        z = input ("Intoduce el valor de z: ")
        vertices.append((x, y, z))
    elif opcion == "2":
        cara = []
        while True:
            vertice = input ("Introduce el valor de vertice a conectar(dejar vacios): ")
            if vertice == "":
                break
            cara.append(vertice)
        caras.append(cara)
    elif opcion == "3":
        print("\nEstrucuta de Vèrtices: ")
        for i, v in enumerate (vertices):
            print(f"{i+1}: {v[0]} {v[1]} {v[2]} ")

        print ("\nEstrucura de Caras: ")
        for i, c in enumerate(caras):
            print(f"{i+1}: " + " ".join(c))
    elif opcion == "4":
        print("Estas saliendo...")
        break
    else:
        print("Opcion no valida, vuelve a intentarlo.")
