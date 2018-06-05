#include <LowPower.h>


int contacto=2;//pin asignado al reed switch
int led=13;//pin asignado al led
int bocina=12;//pin asignado a la bocina
void setup() {
  pinMode(contacto, INPUT);//establecer el switch como entrada
  pinMode(led, OUTPUT);//poner el led como salida
  pinMode(bocina, OUTPUT);//poner la bocina como salida.

}
void loop() {
  //LowPower.powerDown(SLEEP_8S, ADC_OFF, BOD_OFF);//entrar al modo sleep
  //si el iman se acerca al reed switch
  if(digitalRead(contacto)==LOW){
      digitalWrite(led, LOW);//enciende el led
        digitalWrite(bocina, LOW);//apaga el led
        delay(300);
        digitalWrite(bocina,HIGH);
        delay(50);
        }else {
      //si el iman esta lejos del reed switch
      digitalWrite(led, HIGH);
      digitalWrite(bocina, HIGH);
    
    }

}
