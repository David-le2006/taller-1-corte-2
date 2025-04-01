#include <iostream>

using namespace std;

int menu() {
    cout << "1. Registrar vertices" << endl;
    cout << "2. Numero de caras" << endl;
    cout << "3. Impresion de figura" << endl;
    cout << "4. Salir" << endl;
    return 0;
}

int main() {
    const int MAX_VERTICES = 10;
    const int MAX_CARAS = 10;
    int vertices[MAX_VERTICES][3];
    char caras[MAX_CARAS][10][20];
    int numeroVertices = 0;
    int numeroCaras = 0;
    int seleccion;

    while (true) {
        menu();
        cout << "Digite un numero del menu: " << endl;
        cin >> seleccion;

        if (seleccion == 1) {
            if (numeroVertices < MAX_VERTICES) {
                cout << "Introduce el valor de x: " << endl;
                cin >> vertices[numeroVertices][0];
                cout << "Introduce el valor de y: " << endl;
                cin >> vertices[numeroVertices][1];
                cout << "Introduce el valor de z: " << endl;
                cin >> vertices[numeroVertices][2];
                numeroVertices++;
            } else {
                cout << "Numero maximo de vertices alcanzado" << endl;
            }
        } else if (seleccion == 2) {
            if (numeroCaras < MAX_CARAS) {
                int verticeCount = 0;
                while (true) {
                    cout << "Introduce el numero de vertice a conectar (dejar vacio para terminar): ";
                    cin.ignore();
                    cin.getline(caras[numeroCaras][verticeCount], 20);
                    if (caras[numeroCaras][verticeCount][0] == '\0') {
                        break;
                    }
                    verticeCount++;
                }
                numeroCaras++;
            } else {
                cout << "Numero maximo de caras alcanzado" << endl;
            }
        } else if (seleccion == 3) {
            cout << "\nEstructura de Vertices:\n";
            for (int i = 0; i < numeroVertices; ++i) {
                cout << i + 1 << ": " << vertices[i][0] << " " << vertices[i][1] << " " << vertices[i][2] << endl;
            }

            cout << "\nEstructura de Caras:\n";
            for (int i = 0; i < numeroCaras; ++i) {
                cout << i + 1 << ": ";
                for (int j = 0; caras[i][j][0] != '\0'; ++j) {
                    cout << caras[i][j] << " ";
                }
                cout << endl;
            }
        } else if (seleccion == 4) {
            cout << "Saliendo del programa...\n";
            break;
        } else {
            cout << "Opcion no valida, vuelve a intentarlo.\n";
        }
    }
    return 0;
}  

