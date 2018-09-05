#ifndef CANCION_H
#define CANCION_H

#include <iostream>
using namespace std;

class Cancion
{
public:
    Cancion();

    string getId() const;
    void setId(const string &value);

    string getTitulo() const;
    void setTitulo(const string &value);

    string getAlbum() const;
    void setAlbum(const string &value);

    string getArtista() const;
    void setArtista(const string &value);

    double getDuracion() const;
    void setDuracion(double value);

private:
    string id;
    string titulo;
    string album;
    string artista;
    double duracion;
};

#endif // CANCION_H
