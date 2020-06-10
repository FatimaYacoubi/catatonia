/**
*@file main.c
*@author trenscendencea12
*@brief animation+movement
*@version 0.2
*@date june 10,	2020
*testing program for the animation and movement of the player
*
*/
#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
//#include"perso.h"

int main(int argc, char *argv[])
{   
    int saut=0,gravity=10;
    int ground=290;
    SDL_Init(SDL_INIT_VIDEO);
    if(!SDL_Init(SDL_INIT_VIDEO))
    {
        printf("erreur de chargement de la bibliotheque video : > %s ",SDL_GetError());
    }

    SDL_Surface *screen=NULL, *p[15]= {NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL},*background=NULL;

    p[0]=IMG_Load("1.png");
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
    //p[47]=IMG_Load("slide4.png");
    int i;
    for(i=0; i<44; i++)
    {
        if(!p[i])
        {
            printf("erreur de chargement de limage %d : > %s ",i+1,SDL_GetError());
        }
    }

    screen = SDL_SetVideoMode(722,403,32,SDL_HWSURFACE|SDL_DOUBLEBUF|SDL_RESIZABLE);
    if(!screen)
    {
        printf("erreur de chargement de l'ecran : > %s",SDL_GetError());
    }

    background = IMG_Load("background.png");

    SDL_Rect p_p, p_background;

    p_background.x=0;
    p_background.y=0;

    p_p.x=60;
    p_p.y=280;

    SDL_Event event;
    int cont=1;
    int frame =44;
    SDL_EnableKeyRepeat(10,10);
    while(cont)
    {
        SDL_PollEvent(&event);
        switch(event.type)
        {
              case SDL_QUIT:
                cont = 0;
              break;
        case SDL_KEYDOWN :
          {  switch(event.key.keysym.sym)
            {
            case SDLK_ESCAPE :
                cont = 0;
                break;
            case SDLK_LEFT :
               {  if(frame>=9)
                {
                    frame=5;
                }

               SDL_Flip(screen);
                SDL_Delay(50);
              
                frame++;
                p_p.x-=7;}
                break;
                
            case SDLK_RIGHT :
              {  if(frame>=4)
                {
                    frame=0;
                }

               SDL_Flip(screen);
                SDL_Delay(50);
              
                frame++;
  p_p.x+=7;}
                break;

            case SDLK_UP :
             {    if(frame>=15)
                {
                    frame=10;
                }

               SDL_Flip(screen);
                SDL_Delay(50);
                p_p.x+=10;
                frame++;
                if( p_p.y==ground)//collision with ground
                    saut =-50;
           }

                break;
   case SDLK_a:
         {  if(frame>=21)
                {
                    frame=15;
                }

               SDL_Flip(screen);
                SDL_Delay(50);frame++;
                p_p.x+=20;
                }
                break;
case SDLK_z:
       {    if(frame>=27)
                {
                    frame=22;
                }

               SDL_Flip(screen);
                SDL_Delay(50);
                    frame++;
                    
                p_p.x-=20;
                    }
                
                break;
case SDLK_SPACE:
 {if(frame>=43)
                {
                    frame=38;
                }

               SDL_Flip(screen);
                SDL_Delay(50);frame++;
                 if( p_p.y==ground)//collision with ground
                    saut =-50;}
                
                break;
            }
case SDLK_DOWN: {if(frame>=32)
                {
                    frame=28;
                }

               SDL_Flip(screen);
                SDL_Delay(50);
                 frame++;
                
                break;
            }
            break;}
        case SDL_KEYUP :
         {  if(event.key.keysym.sym==SDLK_UP)
              { frame=44;
                  saut=0;
              p_p.y=ground;
              }
} if(event.key.keysym.sym==SDLK_RIGHT)
 frame=44;
if(event.key.keysym.sym==SDLK_a)
 frame=44;
if(event.key.keysym.sym==SDLK_LEFT)
 frame=5;
if(event.key.keysym.sym==SDLK_z)
 frame=5;
if(event.key.keysym.sym==SDLK_SPACE)
 frame=5;
            break;
       case SDL_MOUSEBUTTONDOWN:
		{if (p_p.x>=event.button.x)
{ if(frame>=9)
                {
                    frame=5;
                }

                SDL_Flip(screen);
                SDL_Delay(50);
                p_p.x-=7;
                frame++;

     }
else if (p_p.x<=event.button.x && event.button.y>242 && event.button.y<402)
			{ if(frame>=4)
                {
                    frame=0;
                }

               SDL_Flip(screen);
                SDL_Delay(50);
                p_p.x+=7;
                frame++;
			    
}}

        }


                SDL_BlitSurface(background,NULL,screen,&p_background);
                SDL_BlitSurface(p[frame],NULL,screen,&p_p);
                SDL_Flip(screen);


      saut+=gravity;
        p_p.y += saut;
        if(p_p.y >= ground)
        {
            p_p.y=ground;
            saut = 0;
        }
    }



    SDL_FreeSurface(p[44]);
    SDL_FreeSurface(background);

    SDL_Quit();

}
