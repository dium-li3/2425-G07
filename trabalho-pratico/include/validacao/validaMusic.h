#ifndef VALIDAMUSICS_H
#define VALIDAMUSICS_H

#include<glib.h>
#include "controler/artistsController.h"
#include "IOManager.h"

int validaMusic(char* duracao, char** artistsId,ArtistsData* artistsController,int numArtistsId,char* music_artist, Output* Erros, char* linha) ;

#endif