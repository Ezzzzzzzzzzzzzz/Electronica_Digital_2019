/*
Exploring Arduino - Lista de Codigo 2-2: LED con Cambio en el Blink
Copyright 2013 Jeremy Blum (http://www.jeremyblum.com)
Este programa es software libre: puedes redistribuirlo y / o modificarlo.
bajo los términos de la Licencia Pública General GNU v3 publicada por
La Fundación de Software Libre.

Exploring Arduino - Code Listing 2-2: LED with Changing Blink Rate
http://www.exploringarduino.com/content/ch2
Copyright 2013 Jeremy Blum ( http://www.jeremyblum.com )
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License v3 as published by
the Free Software Foundation.
*/

const int LED=9;         //Definimos el LED en el Pin 9
void setup()
{
  pinMode (LED, OUTPUT); //Configuramos el pin del LED como una salida
}

void loop()
{
  for (int i=100; i<=1000; i=i+100)
  {
    digitalWrite(LED, HIGH);
    delay(i);
    digitalWrite(LED, LOW);
    delay(i);
  }
} 
