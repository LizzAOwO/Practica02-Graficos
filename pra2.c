/*
Graficos por Computadora
*/

#include<gl\glut.h>
#include<math.h>
#include<stdio.h>
#include<windows.h>

typedef enum{NEGRO, AZUL, VERDE, CYAN, ROJO, MAGENTA, AMARILLO, BLANCO, GRIS,
             GRIS_OSCURO, GRIS_CLARO}COLOR;

float PALETA_COLORES[11][3]={ 0, 0, 0, //NEGRO
                             0, 0, 1, //AZUL
                             0, 1, 0, //VERDE
                             0, 1, 1, //CYAN
                             1, 0, 0, //ROJO
                             1, 0, 1, //MAGENTA
                             1, 1, 0, //AMARILLO
                             1, 1, 1, //BLANCO
                             0.5,0.5,0.5, //GRIS
                             0.25,0.25,0.25, //GRIS_OSC
                             0.8,0.8,0.8 }; //GRIS_CLARO
typedef struct{ float x;
                float y;
              }PUNTO;


typedef struct{ PUNTO c;
                float r;
                char activo;
              }CIRCULO;

void DibujarTexto(char *Texto, float x, float y);
void circulos();
void AsignaColor(COLOR c);
void display(void);
void Circulo(CIRCULO ci);
void Animar(void);
const float pi=3.14159;

float DeltaX;
float DeltaY;
CIRCULO C1;

float DeltaX2;
float DeltaY2;
CIRCULO C2;

float DeltaX3;
float DeltaY3;
CIRCULO C3;

float DeltaX4;
float DeltaY4;
CIRCULO C4;

float DeltaX5;
float DeltaY5;
CIRCULO C5;

float DeltaX6;
float DeltaY6;
CIRCULO C6;

float DeltaX7;
float DeltaY7;
CIRCULO C7;

float DeltaX8;
float DeltaY8;
CIRCULO C8;

float DeltaX9;
float DeltaY9;
CIRCULO C9;

float DeltaX10;
float DeltaY10;
CIRCULO C10;

int time=0;

int main(int argc, char **argv)
{ 
  circulos();
  glutInit(&argc,argv);
  glutInitWindowSize(600,600);
  glutCreateWindow("Colision");
  glMatrixMode(GL_PROJECTION);
  glLoadIdentity();
  glOrtho(-10.0,10.0,-10.0,10.0,1.0,-1.0); 
  glMatrixMode(GL_MODELVIEW);
  glutDisplayFunc(display);
  glutIdleFunc(Animar);
  glutMainLoop();
  return 0;
}//FIN DE MAIN
  
void display(void)
{ glClearColor(0,0,0,0);
  glClear(GL_COLOR_BUFFER_BIT);
  glColor3f(1, 1, 1);
  if(C1.activo==1){
   AsignaColor(BLANCO);
   Circulo(C1);
  }
  if(C2.activo == 1){
   AsignaColor(BLANCO);
   Circulo(C2);
  }
  if(C3.activo == 1){
   AsignaColor(BLANCO);
   Circulo(C3);
  }
  
  if(C4.activo == 1){
   AsignaColor(BLANCO);
   Circulo(C4);
  }
  if(C5.activo == 1){
   AsignaColor(BLANCO);
   Circulo(C5);
  }
  if(C6.activo == 1){
   AsignaColor(BLANCO);
   Circulo(C6);
  }
  if(C7.activo == 1){
   AsignaColor(BLANCO);
   Circulo(C7);
  }
  if(C8.activo == 1){
   AsignaColor(BLANCO);
   Circulo(C8);
  }
  if(C9.activo == 1){
   AsignaColor(BLANCO);
   Circulo(C9);
  }
  if(C10.activo == 1){
   AsignaColor(BLANCO);
   Circulo(C10); 
  }
glFlush();    
}

void Animar(void)
{  
//----------------------------------------------------------------------------- 
   if((time%150)==0)
    { C1.c.x+=DeltaX;
      C1.c.y+=DeltaY;
      if(C1.c.x+C1.r>10)
         DeltaX*=-1;
      if(C1.c.x-C1.r<-10)
         DeltaX*=-1;
      if(C1.c.y+C1.r>10)
         DeltaY*=-1;
      if(C1.c.y-C1.r<-10)
         DeltaY*=-1; 
    }
    if ((C1.c.x < C2.c.x + C2.r) && (C1.c.x > C2.c.x - C2.r)){
      if ((C1.c.y < C2.c.y + C2.r) && (C1.c.y > C2.c.y - C2.r)){
         C1.activo = 0;
      }
   }
   if((C1.c.x < C3.c.x + C3.r) && (C1.c.x > C3.c.x - C3.r)){
      if((C1.c.y < C3.c.y + C3.r) && (C1.c.y > C3.c.y - C3.r)){
         C1.activo=0;
      }
   }
   if((C1.c.x < C4.c.x + C4.r) && (C1.c.x > C4.c.x - C4.r)){
      if((C1.c.y < C4.c.y + C4.r) && (C1.c.y > C4.c.y - C4.r)){
         C1.activo=0;
      }
   }
   if((C1.c.x < C5.c.x + C5.r) && (C1.c.x > C5.c.x - C5.r)){
      if((C1.c.y < C5.c.y + C5.r) && (C1.c.y > C5.c.x - C5.r)){
         C1.activo=0;
      }
   }
   if((C1.c.x < C6.c.x + C6.r) && (C1.c.x > C6.c.x - C6.r)){
      if((C1.c.y < C6.c.y + C6.r) && (C1.c.y > C6.c.y - C6.r)){
         C1.activo=0;
      }
   }
   if((C1.c.x < C7.c.x + C7.r) && (C1.c.x > C7.c.x - C7.r)){
      if((C1.c.y < C7.c.y + C7.r) && (C1.c.y > C7.c.y - C7.r)){
         C1.activo=0;
      }
   }
   if((C1.c.x < C8.c.x + C8.r) && (C1.c.x > C8.c.x - C8.r)){
      if((C1.c.y < C8.c.y + C8.r) && (C1.c.y > C8.c.y - C8.r)){
         C1.activo=0;
      }
   }
   if((C1.c.x < C9.c.x + C9.r) && (C1.c.x > C9.c.x - C9.r)){
      if((C1.c.y < C9.c.y + C9.r) && (C1.c.y > C9.c.y - C9.r)){
         C1.activo=0;
      }
   }
   if((C1.c.x < C10.c.x + C10.r) && (C1.c.x > C10.c.x - C10.r)){
      if((C1.c.y < C10.c.y + C10.r) && (C1.c.y > C10.c.y - C10.r)){
         C1.activo=0;
      }
   }
//-----------------------------------------------------------------------------
  if((time%150)==0)
    { C2.c.x+=DeltaX2;
      C2.c.y+=DeltaY2;
      if(C2.c.x+C2.r>10)
         DeltaX2*=-1;
      if(C2.c.x-C2.r<-10)
         DeltaX2*=-1;
      if(C2.c.y+C2.r>10)
         DeltaY2*=-1;
      if(C2.c.y-C2.r<-10)
         DeltaY2*=-1; 
    }
    if ((C2.c.x < C1.c.x + C1.r) && (C2.c.x > C1.c.x - C1.r)){
      if ((C2.c.y < C1.c.y + C1.r) && (C2.c.y > C1.c.y - C1.r)){
         C2.activo=0;
      }
   }
   if((C2.c.x < C3.c.x + C3.r) && (C2.c.x > C3.c.x - C3.r)){
      if((C2.c.y < C3.c.y + C3.r) && (C2.c.y > C3.c.y - C3.r)){
         C2.activo=0;
      }
   }
   if((C2.c.x < C4.c.x + C4.r) && (C2.c.x > C4.c.x - C4.r)){
      if((C2.c.y < C4.c.y + C4.r) && (C2.c.y > C4.c.y - C4.r)){
         C2.activo=0;
      }
   }
   if((C2.c.x < C5.c.x + C5.r) && (C2.c.x > C5.c.x - C5.r)){
      if((C2.c.y < C5.c.y + C5.r) && (C2.c.y > C5.c.y - C5.r)){
         C2.activo=0;
      }
   }
   if((C2.c.x < C6.c.x + C6.r) && (C2.c.x > C6.c.x - C6.r)){
      if((C2.c.y < C6.c.y + C6.r) && (C2.c.y > C6.c.y - C6.r)){
         C2.activo=0;
      }
   }
   if((C2.c.x < C7.c.x + C7.r) && (C2.c.x > C7.c.x - C7.r)){
      if((C2.c.y < C7.c.y + C7.r) && (C2.c.y > C7.c.y - C7.r)){
         C2.activo=0;
      }
   }
   if((C2.c.x < C8.c.x + C8.r) && (C2.c.x > C8.c.x - C8.r)){
      if((C2.c.y < C8.c.y + C8.r) && (C2.c.y > C8.c.y - C8.r)){
         C2.activo=0;
      }
   }
   if((C2.c.x < C9.c.x + C9.r) && (C2.c.x > C9.c.x - C9.r)){
      if((C2.c.y < C9.c.y + C9.r) && (C2.c.y > C9.c.y - C9.r)){
         C2.activo=0;
      }
   }
   if((C2.c.x < C10.c.x + C10.r) && (C2.c.x > C10.c.x - C10.r)){
      if((C2.c.y < C10.c.y + C10.r) && (C2.c.y > C10.c.y - C10.r)){
         C2.activo=0;
      }
   }
//-----------------------------------------------------------------------------
  if((time%150)==0)
    { C3.c.x+=DeltaX3;
      C3.c.y+=DeltaY3;
      if(C3.c.x+C3.r>10)
         DeltaX3*=-1;
      if(C3.c.x-C3.r<-10)
         DeltaX3*=-1;
      if(C3.c.y+C3.r>10)
         DeltaY3*=-1;
      if(C3.c.y-C3.r<-10)
         DeltaY3*=-1; 
    }  
    if ((C3.c.x < C1.c.x + C1.r) && (C3.c.x > C1.c.x - C1.r)){
      if ((C3.c.y < C1.c.y + C1.r) && (C3.c.y > C1.c.y - C1.r)){
         C3.activo = 0;
      }
   }
   if((C3.c.x < C2.c.x + C2.r) && (C3.c.x > C2.c.x - C2.r)){
      if((C3.c.y < C2.c.y + C2.r) && (C3.c.y > C2.c.y - C2.r)){
         C3.activo=0;
      }
   }
   if((C3.c.x < C4.c.x + C4.r) && (C3.c.x > C4.c.x - C4.r)){
      if((C3.c.y < C4.c.y + C4.r) && (C3.c.y > C4.c.y - C4.r)){
         C3.activo=0;
      }
   }
   if((C3.c.x < C5.c.x + C5.r) && (C3.c.x > C5.c.x - C5.r)){
      if((C3.c.y < C5.c.y + C5.r) && (C3.c.y > C5.c.y - C5.r)){
         C3.activo=0;
      }
   }
   if((C3.c.x < C6.c.x + C6.r) && (C3.c.x > C6.c.x - C6.r)){
      if((C3.c.y < C6.c.y + C6.r) && (C3.c.y > C6.c.y - C6.r)){
         C3.activo=0;
      }
   }
   if((C3.c.x < C7.c.x + C7.r) && (C3.c.x > C7.c.x - C7.r)){
      if((C3.c.y < C7.c.y + C7.r) && (C3.c.y > C7.c.y - C7.r)){
         C3.activo=0;
      }
   }
   if((C3.c.x < C8.c.x + C8.r) && (C3.c.x > C8.c.x - C8.r)){
      if((C3.c.y < C8.c.y + C8.r) && (C3.c.y > C8.c.y - C8.r)){
         C3.activo=0;
      }
   }
   if((C3.c.x < C9.c.x + C9.r) && (C3.c.x > C9.c.x - C9.r)){
      if((C3.c.y < C9.c.y + C9.r) && (C3.c.y > C9.c.y - C9.r)){
         C3.activo=0;
      }
   }
   if((C3.c.x < C10.c.x + C10.r) && (C3.c.x > C10.c.x - C10.r)){
      if((C3.c.y < C10.c.y + C10.r) && (C3.c.y > C10.c.y - C10.r)){
         C3.activo=0;
      }
   }
//-----------------------------------------------------------------------------
  if((time%150)==0)
    { C4.c.x+=DeltaX4;
      C4.c.y+=DeltaY4;
      if(C4.c.x+C4.r>10)
         DeltaX4*=-1;
      if(C4.c.x-C4.r<-10)
         DeltaX4*=-1;
      if(C4.c.y+C4.r>10)
         DeltaY4*=-1;
      if(C4.c.y-C4.r<-10)
         DeltaY4*=-1; 
    }
    if ((C4.c.x < C1.c.x + C1.r) && (C4.c.x > C1.c.x - C1.r)) {
      if ((C4.c.y < C1.c.y + C1.r) && (C4.c.y > C1.c.y - C1.r)){
         C4.activo = 0;
      }
   }
   if((C4.c.x < C2.c.x + C2.r) && (C4.c.x > C2.c.x - C2.r)){
      if((C4.c.y < C2.c.y + C2.r) && (C4.c.y > C2.c.y - C2.r)){
         C4.activo=0;
      }
   }
   if ((C4.c.x < C3.c.x + C3.r) && (C4.c.x > C3.c.x - C3.r)){
      if((C4.c.y < C3.c.y + C3.r) && (C4.c.y > C3.c.y - C3.r)){
         C4.activo=0;
      }
   }
   if((C4.c.x < C5.c.x + C5.r) && (C4.c.x > C5.c.x - C5.r)){
      if((C4.c.y < C5.c.y + C5.r) && (C4.c.y > C5.c.y - C5.r)){
         C4.activo=0;
      }
   }
   if((C4.c.x < C6.c.x + C6.r) && (C4.c.x > C6.c.x - C6.r)){
      if((C4.c.y < C6.c.y + C6.r) && (C4.c.y > C6.c.y - C6.r)){
         C4.activo=0;
      }
   }
   if((C4.c.x < C7.c.x + C7.r) && (C4.c.x > C7.c.x - C7.r)){
      if((C4.c.y < C7.c.y + C7.r) && (C4.c.y > C7.c.y - C7.r)){
         C4.activo=0;
      }
   }
   if((C4.c.x < C8.c.x + C8.r) && (C4.c.x > C8.c.x - C8.r)){
      if((C4.c.y < C8.c.y + C8.r) && (C4.c.y > C8.c.y - C8.r)){
         C4.activo=0;
      }
   }
   if((C4.c.x < C9.c.x + C9.r) && (C4.c.x > C9.c.x - C9.r)){
      if((C4.c.y < C9.c.y + C9.r) && (C4.c.y > C9.c.y - C9.r)){
         C4.activo=0;
      }
   }
   if((C4.c.x < C10.c.x + C10.r) && (C4.c.x > C10.c.x - C10.r)){
      if((C4.c.y < C10.c.y + C10.r) && (C4.c.y > C10.c.y - C10.r)){
         C4.activo=0;
      }
   }
//-----------------------------------------------------------------------------
  if((time%250)==0)
    { C5.c.x+=DeltaX5;
      C5.c.y+=DeltaY5;
      if(C5.c.x+C5.r>10)
         DeltaX5*=-1;
      if(C5.c.x-C5.r<-10)
         DeltaX5*=-1;
      if(C5.c.y+C5.r>10)
         DeltaY5*=-1;
      if(C5.c.y-C5.r<-10)
         DeltaY5*=-1; 
    }
    if ((C5.c.x < C1.c.x + C1.r) && (C5.c.x > C1.c.x - C1.r)){
      if ((C5.c.y < C1.c.y + C1.r) && (C5.c.y > C1.c.y - C1.r)){
         C5.activo = 0;
      }
   }
   if((C5.c.x < C2.c.x + C2.r) && (C5.c.x > C2.c.x - C2.r)){
      if((C5.c.y < C2.c.y + C2.r) && (C5.c.y > C2.c.y - C2.r)){
         C5.activo=0;
      }
   }
   if((C5.c.x < C3.c.x + C3.r) && (C5.c.x > C3.c.x - C3.r)){
      if((C5.c.y < C3.c.y + C3.r) && (C5.c.y > C3.c.y - C3.r)){
         C5.activo=0;
      }
   }
   if((C5.c.x < C4.c.x + C4.r) && (C5.c.x > C4.c.x - C4.r)){
      if((C5.c.y < C4.c.y + C4.r) && (C5.c.y > C4.c.y - C4.r)){
         C5.activo=0;
      }
   }
   if((C5.c.x < C6.c.x + C6.r) && (C5.c.x > C6.c.x - C6.r)){
      if((C5.c.y < C6.c.y + C6.r) && (C5.c.y > C6.c.y - C6.r)){
         C5.activo=0;
      }
   }
   if((C5.c.x < C7.c.x + C7.r) && (C5.c.x > C7.c.x - C7.r)){
      if((C5.c.y < C7.c.y + C7.r) && (C5.c.y > C7.c.y - C7.r)){
         C5.activo=0;
      }
   }
   if((C5.c.x < C8.c.x + C8.r) && (C5.c.x > C8.c.x - C8.r)){
      if((C5.c.y < C8.c.y + C8.r) && (C5.c.y > C8.c.y - C8.r)){
         C5.activo=0;
      }
   }
   if((C5.c.x < C9.c.x + C9.r) && (C5.c.x > C9.c.x - C9.r)){
      if((C5.c.y < C9.c.y + C9.r) && (C5.c.y > C9.c.y - C9.r)){
         C5.activo=0;
      }
   }
   if((C5.c.x < C10.c.x + C10.r) && (C5.c.x > C10.c.x - C10.r)){
      if((C5.c.y < C10.c.y + C10.r) && (C5.c.y > C10.c.y - C10.r)){
         C5.activo=0;
      }
   }
//-----------------------------------------------------------------------------
  if((time%200)==0)
    { C6.c.x+=DeltaX6;
      C6.c.y+=DeltaY6;
      if(C6.c.x+C6.r>10)
         DeltaX6*=-1;
      if(C6.c.x-C6.r<-10)
         DeltaX6*=-1;
      if(C6.c.y+C6.r>10)
         DeltaY6*=-1;
      if(C6.c.y-C6.r<-10)
         DeltaY6*=-1; 
    }
    if ((C6.c.x < C1.c.x + C1.r) && (C6.c.x > C1.c.x - C1.r)){
      if ((C6.c.y < C1.c.y + C1.r) && (C6.c.y > C1.c.y - C1.r)){
         C6.activo = 0;
      }
   }
   if((C6.c.x < C2.c.x + C2.r) && (C6.c.x > C2.c.x - C2.r)){
      if((C6.c.y < C2.c.y + C2.r) && (C6.c.y > C2.c.y - C2.r)){
         C6.activo=0;
      }
   }
   if((C6.c.x < C3.c.x + C3.r) && (C6.c.x > C3.c.x - C3.r)){
      if((C6.c.y < C3.c.y + C3.r) && (C6.c.y > C3.c.y - C3.r)){
         C6.activo=0;
      }
   }
   if((C6.c.x < C5.c.x + C5.r) && (C6.c.x > C5.c.x - C5.r)){
      if((C6.c.y < C5.c.y + C5.r) && (C6.c.y > C5.c.y - C5.r)){
         C6.activo=0;
      }
   }
   if((C6.c.x < C4.c.x + C4.r) && (C6.c.x > C4.c.x - C4.r)){
      if((C6.c.y < C4.c.y + C4.r) && (C6.c.y > C4.c.y - C4.r)){
         C6.activo=0;
      }
   }
   if((C6.c.x < C7.c.x + C7.r) && (C6.c.x > C7.c.x - C7.r)){
      if((C6.c.y < C7.c.y + C7.r) && (C6.c.y > C7.c.y - C7.r)){
         C6.activo=0;
      }
   }
   if((C6.c.x < C8.c.x + C8.r) && (C6.c.x > C8.c.x - C8.r)){
      if((C6.c.y < C8.c.y + C8.r) && (C6.c.y > C8.c.y - C8.r)){
         C6.activo=0;
      }
   }
   if((C6.c.x < C9.c.x + C9.r) && (C6.c.x > C9.c.x - C9.r)){
      if((C6.c.y < C9.c.y + C9.r) && (C6.c.y > C9.c.y - C9.r)){
         C6.activo=0;
      }
   }
   if((C6.c.x < C10.c.x + C10.r) && (C6.c.x > C10.c.x - C10.r)){
      if((C6.c.y < C10.c.y + C10.r) && (C6.c.y > C10.c.y - C10.r)){
         C6.activo=0;
      }
   }
//-----------------------------------------------------------------------------
  if((time%200)==0)
    { C7.c.x+=DeltaX7;
      C7.c.y+=DeltaY7;
      if(C7.c.x+C7.r>10)
         DeltaX7*=-1;
      if(C7.c.x-C7.r<-10)
         DeltaX7*=-1;
      if(C7.c.y+C7.r>10)
         DeltaY7*=-1;
      if(C7.c.y-C7.r<-10)
         DeltaY7*=-1; 
    }
    if ((C7.c.x < C1.c.x + C1.r) && (C7.c.x > C1.c.x - C1.r)){
      if ((C7.c.y < C1.c.y + C1.r) && (C7.c.y > C1.c.y - C1.r)){
         C7.activo = 0;
      }
   }
   if((C7.c.x < C2.c.x + C2.r) && (C7.c.x > C2.c.x - C2.r)){
      if((C7.c.y < C2.c.y + C2.r) && (C7.c.y > C2.c.y - C2.r)){
         C7.activo=0;
      }
   }
   if((C7.c.x < C3.c.x + C3.r) && (C7.c.x > C3.c.x - C3.r)){
      if((C7.c.y < C3.c.y + C3.r) && (C7.c.y > C3.c.y - C3.r)){
         C7.activo=0;
      }
   }
   if((C7.c.x < C5.c.x + C5.r) && (C7.c.x > C5.c.x - C5.r)){
      if((C7.c.y < C5.c.y + C5.r) && (C7.c.y > C5.c.y - C5.r)){
         C7.activo=0;
      }
   }
   if((C7.c.x < C6.c.x + C6.r) && (C7.c.x > C6.c.x - C6.r)){
      if((C7.c.y < C6.c.y + C6.r) && (C7.c.y > C6.c.y - C6.r)){
         C7.activo=0;
      }
   }
   if((C7.c.x < C4.c.x + C4.r) && (C7.c.x > C4.c.x - C4.r)){
      if((C7.c.y < C4.c.y + C4.r) && (C7.c.y > C4.c.y - C4.r)){
         C7.activo=0;
      }
   }
   if((C7.c.x < C8.c.x + C8.r) && (C7.c.x > C8.c.x - C8.r)){
      if((C7.c.y < C8.c.y + C8.r) && (C7.c.y > C8.c.y - C8.r)){
         C7.activo=0;
      }
   }
   if((C7.c.x < C9.c.x + C9.r) && (C7.c.x > C9.c.x - C9.r)){
      if((C7.c.y < C9.c.y + C9.r) && (C7.c.y > C9.c.y - C9.r)){
         C7.activo=0;
      }
   }
   if((C7.c.x < C10.c.x + C10.r) && (C7.c.x > C10.c.x - C10.r)){
      if((C7.c.y < C10.c.y + C10.r) && (C7.c.y > C10.c.y - C10.r)){
         C7.activo=0;
      }
   }
//-----------------------------------------------------------------------------
  if((time%200)==0)
    { C8.c.x+=DeltaX8;
      C8.c.y+=DeltaY8;
      if(C8.c.x+C8.r>10)
         DeltaX8*=-1;
      if(C8.c.x-C8.r<-10)
         DeltaX8*=-1;
      if(C8.c.y+C8.r>10)
         DeltaY8*=-1;
      if(C8.c.y-C8.r<-10)
         DeltaY8*=-1; 
    }
    if ((C8.c.x < C1.c.x + C1.r) && (C8.c.x > C1.c.x - C1.r)){
      if ((C8.c.y < C1.c.y + C1.r) && (C8.c.y > C1.c.y - C1.r)){
         C8.activo = 0;
      }
   }
   if((C8.c.x < C2.c.x + C2.r) && (C8.c.x > C2.c.x - C2.r)){
      if((C8.c.y < C2.c.y + C2.r) && (C8.c.y > C2.c.y - C2.r)){
         C8.activo=0;
      }
   }
   if((C8.c.x < C3.c.x + C3.r) && (C8.c.x > C3.c.x - C3.r)){
      if((C8.c.y < C3.c.y + C3.r) && (C8.c.y > C3.c.y - C3.r)){
         C8.activo=0;
      }
   }
   if((C8.c.x < C5.c.x + C5.r) && (C8.c.x > C5.c.x - C5.r)){
      if((C8.c.y < C5.c.y + C5.r) && (C8.c.y > C5.c.y - C5.r)){
         C8.activo=0;
      }
   }
   if((C8.c.x < C6.c.x + C6.r) && (C8.c.x > C6.c.x - C6.r)){
      if((C8.c.y < C6.c.y + C6.r) && (C8.c.y > C6.c.y - C6.r)){
         C8.activo=0;
      }
   }
   if((C8.c.x < C7.c.x + C7.r) && (C8.c.x > C7.c.x - C7.r)){
      if((C8.c.y < C7.c.y + C7.r) && (C8.c.y > C7.c.y - C7.r)){
         C8.activo=0;
      }
   }
   if((C8.c.x < C4.c.x + C4.r) && (C8.c.x > C4.c.x - C4.r)){
      if((C8.c.y < C4.c.y + C4.r) && (C8.c.y > C4.c.y - C4.r)){
         C8.activo=0;
      }
   }
   if((C8.c.x < C9.c.x + C9.r) && (C8.c.x > C9.c.x - C9.r)){
      if((C8.c.y < C9.c.y + C9.r) && (C8.c.y > C9.c.y - C9.r))
      C8.activo=0;
   }
   if((C8.c.x < C10.c.x + C10.r) && (C8.c.x > C10.c.x - C10.r)){
      if((C8.c.y < C10.c.y + C10.r) && (C8.c.y > C10.c.y - C10.r)){
         C8.activo=0;
      }
   }
//-----------------------------------------------------------------------------
  if((time%300)==0)
    { C9.c.x+=DeltaX9;
      C9.c.y+=DeltaY9;
      if(C9.c.x+C9.r>10)
         DeltaX9*=-1;
      if(C9.c.x-C9.r<-10)
         DeltaX9*=-1;
      if(C9.c.y+C9.r>10)
         DeltaY9*=-1;
      if(C9.c.y-C9.r<-10)
         DeltaY9*=-1; 
    }
    if ((C9.c.x < C1.c.x + C1.r) && (C9.c.x > C1.c.x - C1.r)){
      if ((C9.c.y < C1.c.y + C1.r) && (C9.c.y > C1.c.y - C1.r)){
         C9.activo = 0;
      }
   }
   if((C9.c.x < C2.c.x + C2.r) && (C9.c.x > C2.c.x - C2.r)){
      if((C9.c.y < C2.c.y + C2.r) && (C9.c.y > C2.c.y - C2.r)){
         C9.activo=0;
      }
   }
   if((C9.c.x < C3.c.x + C3.r) && (C9.c.x > C3.c.x - C3.r)){
      if((C9.c.y < C3.c.y + C3.r) && (C9.c.y > C3.c.y - C3.r)){
         C9.activo=0;
      }
   }
   if((C9.c.x < C5.c.x + C5.r) && (C9.c.x > C5.c.x - C5.r)){
      if((C9.c.y < C5.c.y + C5.r) && (C9.c.y > C5.c.y - C5.r)){
         C9.activo=0;
      }
   }
   if((C9.c.x < C6.c.x + C6.r) && (C9.c.x > C6.c.x - C6.r)){
      if((C9.c.y < C6.c.y + C6.r) && (C9.c.y > C6.c.y - C6.r)){
         C9.activo=0;
      }
   }
   if((C9.c.x < C7.c.x + C7.r) && (C9.c.x > C7.c.x - C7.r)){
      if((C9.c.y < C7.c.y + C7.r) && (C9.c.y > C7.c.y - C7.r)){
         C9.activo=0;
      }
   }
   if((C9.c.x < C8.c.x + C8.r) && (C9.c.x > C8.c.x - C8.r)){
      if((C9.c.y < C8.c.y + C8.r) && (C9.c.y > C8.c.y - C8.r)){
         C9.activo=0;
      }
   }
   if((C9.c.x < C4.c.x + C4.r) && (C9.c.x > C4.c.x - C4.r)){
      if((C9.c.y < C4.c.y + C4.r) && (C9.c.y > C4.c.y - C4.r)){
         C9.activo=0;
      }
   }
   if((C9.c.x < C10.c.x + C10.r) && (C9.c.x > C10.c.x - C10.r)){
      if((C9.c.y < C10.c.y + C10.r) && (C9.c.y > C10.c.y - C10.r)){
         C9.activo=0;
      }
   }
//-----------------------------------------------------------------------------
  if((time%300)==0)
    { C10.c.x+=DeltaX10;
      C10.c.y+=DeltaY10;
      if(C10.c.x+C10.r>10)
         DeltaX10*=-1;
      if(C10.c.x-C10.r<-10)
         DeltaX10*=-1;
      if(C10.c.y+C10.r>10)
         DeltaY10*=-1;
      if(C10.c.y-C10.r<-10)
         DeltaY10*=-1; 
    }
    if ((C10.c.x < C1.c.x + C1.r) && (C10.c.x > C1.c.x - C1.r)){
      if ((C10.c.y < C1.c.y + C1.r) && (C10.c.y > C1.c.y - C1.r)){
         C10.activo = 0;
      }
   }
   if((C10.c.x < C2.c.x + C2.r) && (C10.c.x > C2.c.x - C2.r)){
      if((C10.c.y < C2.c.y + C2.r) && (C10.c.y > C2.c.y - C2.r)){
         C10.activo=0;
      }
   }
   if((C10.c.x < C3.c.x + C3.r) && (C10.c.x > C3.c.x - C3.r)){
      if((C10.c.y < C3.c.y + C3.r) && (C10.c.y > C3.c.y - C3.r)){
         C10.activo=0;
      }
   }
   if((C10.c.x < C5.c.x + C5.r) && (C10.c.x > C5.c.x - C5.r)){
      if((C10.c.y < C5.c.y + C5.r) && (C10.c.y > C5.c.y - C5.r)){
         C10.activo=0;
      }
   }
   if((C10.c.x < C6.c.x + C6.r) && (C10.c.x > C6.c.x - C6.r)){
      if((C10.c.y < C6.c.y + C6.r) && (C10.c.y > C6.c.y - C6.r)){
         C10.activo=0;
      }
   }
   if((C10.c.x < C7.c.x + C7.r) && (C10.c.x > C7.c.x - C7.r)){
      if((C10.c.y < C7.c.y + C7.r) && (C10.c.y > C7.c.y - C7.r)){
         C10.activo=0;
      }
   }
   if((C10.c.x < C8.c.x + C8.r) && (C10.c.x > C8.c.x - C8.r)){
      if((C10.c.y < C8.c.y + C8.r) && (C10.c.y > C8.c.y - C8.r)){
         C10.activo=0;
      }
   }
   if((C10.c.x < C9.c.x + C9.r) && (C10.c.x > C9.c.x - C9.r)){
      if((C10.c.y < C9.c.y + C9.r) && (C10.c.y > C9.c.y - C9.r)){
         C10.activo=0;
      }
   }
   if((C10.c.x < C4.c.x + C4.r) && (C10.c.x > C4.c.x - C4.r)){
      if((C10.c.y < C4.c.y + C4.r) && (C10.c.y > C4.c.y - C4.r)){
         C10.activo=0;
      }
   }
   //-----------------------------------------------------------------------------
  if(time>1000000000)
     time=0;
  time++; 
  //sleep(1);
  glutPostRedisplay();
}

void DibujarTexto(char *Texto, float x, float y)
{ int k=0;
  glRasterPos2f(x,y);
  while(Texto[k]!='\0')
  { glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,Texto[k]);
    k++;
    }
}
PUNTO CVent_a_Cplano(int x, int y,int AnchoV, int AltoV, 
                     float xini, float xfin, float yini, float yfin)
{ PUNTO pos;
  float RangoX=xfin-xini;
  float RangoY=yfin-yini;
  float porcentaje;
  porcentaje=((float)x/AnchoV);
  pos.x=(porcentaje*(RangoX))-(RangoX)/2;
  porcentaje=((float)y/AltoV);
  pos.y=((1-porcentaje)*(RangoY))-(RangoX)/2;
  return pos;
}

void circulos(){
  C1.activo = 1;
  C1.c.x=(rand() % 10);
  C1.c.y=(rand() % 10);
  C1.r=0.5;
  DeltaX=(rand() % 101)*0.01;
  DeltaY=(rand() % 101)*0.01;
  
  
  C2.activo = 1;
  C2.c.x=(rand() % 10);
  C2.c.y=((rand() % 10)*-1);
  C2.r=0.5;
  DeltaX2=((rand() % 101)*0.01);
  DeltaY2=((rand() % 101)*0.01)*-1;  
  

  C3.activo = 1;
  C3.c.x=(rand() % 10);
  C3.c.y=((rand() % 10)*-1);
  C3.r=0.5;
  DeltaX3=((rand() % 101)*0.01);
  DeltaY3=((rand() % 101)*0.01)*-1;

  C4.activo = 1;
  C4.c.x=(rand() % 10);
  C4.c.y=(rand() % 10);
  C4.r=0.5;
  DeltaX4=(rand() % 101)*0.01;
  DeltaY4=(rand() % 101)*0.01;

  C5.activo=1;
  C5.c.x=-((rand() % 10)*-1);
  C5.c.y=(rand() % 10);
  C5.r=0.5;
  DeltaX5=((rand() % 101)*0.01)*-1;
  DeltaY5=(rand() % 101)*0.01;

  C6.activo=1;
  C6.c.x=((rand() % 10)*-1);
  C6.c.y=(rand() % 10);
  C6.r=0.5;
  DeltaX6=((rand() % 101)*0.01)*-1;
  DeltaY6=(rand() % 101)*0.01;

  C7.activo=1;
  C7.c.x=((rand() % 10)*-1);
  C7.c.y=(rand() % 10);
  C7.r=0.5;
  DeltaX7=((rand() % 101)*0.01)*-1;
  DeltaY7=(rand() % 101)*0.01;

  C8.activo=1;
  C8.c.x=((rand() % 10)*-1);
  C8.c.y=((rand() % 10)*-1);
  C8.r=0.5;
  DeltaX8=((rand() % 101)*0.01)*-1;
  DeltaY8=((rand() % 101)*0.01)*-1;

  C9.activo=1;
  C9.c.x=((rand() % 10)*-1);
  C9.c.y=((rand() % 10)*-1);
  C9.r=0.5;
  DeltaX9=((rand() % 101)*0.01)*-1;
  DeltaY9=((rand() % 101)*0.01)*-1;

  C10.activo=1;
  C10.c.x=(rand() % 10);
  C10.c.y=((rand() % 10)*-1);
  C10.r=0.5;
  DeltaX10=((rand() % 101)*0.01)*1;
  DeltaY10=((rand() % 101)*0.01)*-1;
}


void AsignaColor(COLOR c)
{ glColor3f(PALETA_COLORES[c][0],PALETA_COLORES[c][1],PALETA_COLORES[c][2]);
 }

void Circulo(CIRCULO ci)
{ float x,y,theta;

  glBegin(GL_LINE_LOOP);
  for(theta=0; theta<6.28; theta+=0.1)
     { x=ci.c.x+ci.r*cos(theta);
       y=ci.c.y+ci.r*sin(theta);
       glVertex2f(x,y);
      }
  glEnd(); 
}