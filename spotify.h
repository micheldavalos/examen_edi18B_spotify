#ifndef SPOTIFY_H
#define SPOTIFY_H

#include "cancion.h"

class Spotify
{
public:
    Spotify();
    void agregarFavoritos(Cancion &cancion);
    void mostrar();

private:
    Cancion favoritos[50];
    int cont;
};

#endif // SPOTIFY_H
