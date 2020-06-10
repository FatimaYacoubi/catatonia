/**
*@file fonctions.c
*/
#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include "perso.h"


void animateEntity(int MaxFrame ,int firstframe,SDL_Surface *screen)
  {int frame =0	;
if(frame>=MaxFrame)
                {
                    frame=firstframe;
                }

                SDL_Flip(screen);
                SDL_Delay(50);

                frame++;}
void imagesLoad(SDL_Surface *p[])
{p[0]=IMG_Load("1.png");
    p[1]=IMG_Load("2.png");
    p[2]=IMG_Load("3.png");
    p[3]=IMG_Load("4.png");
    p[4]=IMG_Load("5.png");
    p[5]=IMG_Load("6.png");
    p[6]=IMG_Load("7.png");
    p[7]=IMG_Load("8.png");
    p[8]=IMG_Load("9.png");
    p[9]=IMG_Load("10.png");
    p[10]=IMG_Load("11.png");
    p[11]=IMG_Load("12.png");
    p[12]=IMG_Load("13.png");
    p[13]=IMG_Load("14.png");
    p[14]=IMG_Load("15.png");
    p[15]=IMG_Load("16.png");
    p[16]=IMG_Load("run1.png");
    p[17]=IMG_Load("run2.png");
    p[18]=IMG_Load("run3.png");
    p[19]=IMG_Load("run5.png");
    p[20]=IMG_Load("run4.png");
    p[21]=IMG_Load("run6.png");
    p[22]=IMG_Load("runi1.png");
    p[23]=IMG_Load("runi2.png");
    p[24]=IMG_Load("runi3.png");
    p[25]=IMG_Load("runi4.png");
    p[26]=IMG_Load("runi5.png");
    p[27]=IMG_Load("runi6.png");
    p[28]=IMG_Load("slide1.png");
    p[29]=IMG_Load("slide2.png");
    p[30]=IMG_Load("slide3.png");
    p[31]=IMG_Load("slide4.png");
    p[32]=IMG_Load("slide5.png");
    p[33]=IMG_Load("slidi1.png");
    p[34]=IMG_Load("slidi2.png");
    p[35]=IMG_Load("slidi3.png");
    p[36]=IMG_Load("slidi4.png");
    p[37]=IMG_Load("slidi5.png");
    p[38]=IMG_Load("jumpi1.png");
    p[39]=IMG_Load("jumpi2.png");
    p[40]=IMG_Load("jumpi3.png");
    p[41]=IMG_Load("jumpi4.png");
    p[42]=IMG_Load("jumpi5.png");
    p[43]=IMG_Load("jumpi6.png");
    p[44]=IMG_Load("normal.png");
  // p[45]=IMG_Load("slide2.png");
    //p[46]=IMG_Load("slide3.png");
    //p[47]=IMG_Load("slide4.png");}
