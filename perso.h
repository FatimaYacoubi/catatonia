/**
*@file perso.h
*/
#include <stdio.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <stdio.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>

typedef struct player
{int id;
    SDL_Rect p_p;
    SDL_Surface *sprite;
    p->p_p.x=20;
    p->p_p.y=220;
    p->p_p.w=75;
    p->p_p.h=80;
    int score;
    int vitesse;
    int acceleration;
}player;
void initialiseEntity(player *p);
void animateEntity(int MaxFrame , int frame ,int firstframe,SDL_Rect *screen);
