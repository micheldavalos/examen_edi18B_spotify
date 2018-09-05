#include "spotify.h"

Spotify::Spotify()
{
    cont = 0;
}

void Spotify::agregarFavoritos(Cancion &cancion)
{
    if (cont < 50) {
        favoritos[cont++] = cancion;
    }
    else {
        cout << "Arreglo lleno" << endl;
    }
}

void Spotify::mostrar()
{
    for (int i = 0; i < 50; ++i) {
        Cancion &cancion = favoritos[i];

        cout << i + 1 << " "
             << cancion.getTitulo() << " - "
             << cancion.getAlbum()  << " - "
             << cancion.getDuracion() << endl;
    }
}
