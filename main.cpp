#include <iostream>
#include "spotify.h"
using namespace std;

int main()
{
    Spotify spotify;
    string op;

    while (true) {
        cout << "1) Agregar cancion a favoritos" << endl;
        cout << "2) Mostrar favoritos" << endl;
        cout << "0) Salir" << endl;

        getline(cin, op);

        if (op == "1") {
            Cancion cancion;
            string temp;
            double temp_d;

            cout << "id: ";
            getline(cin, temp);
            cancion.setId(temp);

            cout << "titulo: ";
            getline(cin, temp);
            cancion.setTitulo(temp);

            cout << "album: ";
            getline(cin, temp);
            cancion.setAlbum(temp);

            cout << "duracion: ";
            getline(cin, temp);
            temp_d = stod(temp);
            cancion.setDuracion(temp_d);

            spotify.agregarFavoritos(cancion);
        }
        else if (op == "2") {
            spotify.mostrar();
        }
        else if (op == "0") {
            break;
        }
    }
    return 0;
}
