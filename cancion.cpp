#include "cancion.h"

Cancion::Cancion()
{

}

string Cancion::getId() const
{
    return id;
}

void Cancion::setId(const string &value)
{
    id = value;
}

string Cancion::getTitulo() const
{
    return titulo;
}

void Cancion::setTitulo(const string &value)
{
    titulo = value;
}

string Cancion::getAlbum() const
{
    return album;
}

void Cancion::setAlbum(const string &value)
{
    album = value;
}

string Cancion::getArtista() const
{
    return artista;
}

void Cancion::setArtista(const string &value)
{
    artista = value;
}

double Cancion::getDuracion() const
{
    return duracion;
}

void Cancion::setDuracion(double value)
{
    duracion = value;
}
