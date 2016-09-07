/*
  Blank Simple Project.c
  http://learn.parallax.com/propeller-c-tutorials 
*/
#include "simpletools.h"                      // Librerias
#include "abdrive.h"
#include "ping.h"

int main()                                    // Main
{
  // Codigo de arranque.
  pause(50);
 
  while(1)
  {
    // Codigo con el Loop.
    int sensor_frente = ping_cm(8);
    int sensor_derecha = ping_cm(4);
    
    if(sensor_derecha<15){
      if(sensor_frente<15){
        drive_goto(-25,26);
      }
      else{
        drive_goto(30,30);
      }
    }
    
    else{
      drive_goto(20,20);
      pause(20);
      drive_goto(26,-25);
      pause(20);
      drive_goto(30,30);
    }
    pause(20);
  }
}  