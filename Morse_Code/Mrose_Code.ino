/*
 * Name: EmanDev - Marcaida
 * Block && Year: BSEE - 3A
 * Activity: Morse-Code
 * Notes:
 * Let "-" be "dash"
 * Let "." be "dot"
*/
int dash = 2000; //long
int dot = 1000; //short
int space = 500; //space or short pause between characters
void setup(){
  pinMode(8,OUTPUT);
}

void loop(){
  //pre-loader
  digitalWrite(8,LOW);
  delay(3000);
  
  //M (--)
  digitalWrite(8,HIGH) //dash
  delay(dash);
  digitalWrite(8,LOW);
  delay(space);
  digitalWrite(8,HIGH); //dash
  delay(dash);
  digitalWrite(8,LOW);
  delay(space);

  //A (.-)
  digitalWrite(8,HIGH); //dot
  delay(dot);
  digitalWrite(8,LOW);
  delay(space);
  digitalWrite(8,HIGH); //dash
  delay(dash);
  digitalWrite(8,LOW);
  delay(space);

  //R (.-.)
  digitalWrite(8,HIGH); //dot
  delay(dot);
  digitalWrite(8,LOW);
  delay(space);
  digitalWrite(8,HIGH); //dash
  delay(dash);
  digitalWrite(8,LOW);
  delay(space);
  digitalWrite(8,HIGH); //dot
  delay(dot);
  digitalWrite(8,LOW);
  delay(space);

  //C (-.-.)
  digitalWrite(8,HIGH); //dash
  delay(dash);
  digitalWrite(8,LOW);
  delay(space);
  digitalWrite(8,HIGH); //dot
  delay(dot);
  digitalWrite(8,LOW);
  delay(space);
  digitalWrite(8,HIGH); //dash
  delay(dash);
  digitalWrite(8,LOW);
  delay(space);
  digitalWrite(8,HIGH); //dot
  delay(dot);
  digitalWrite(8,LOW);
  delay(space);

  //A (.-)
  digitalWrite(8,HIGH); //dot
  delay(dot);
  digitalWrite(8,LOW);
  delay(space);
  digitalWrite(8,HIGH); //dash
  delay(dash);
  digitalWrite(8,LOW);
  delay(space);

  //I (..)
  digitalWrite(8,HIGH); //dot
  delay(dot);
  digitalWrite(8,LOW);
  delay(space);
  digitalWrite(8,HIGH); //dot
  delay(dot);
  digitalWrite(8,LOW);
  delay(space);

  //D (-..)
  digitalWrite(8,HIGH); //dash
  delay(dash);
  digitalWrite(8,LOW);
  delay(space);
  digitalWrite(8,HIGH); //dot
  delay(dot);
  digitalWrite(8,LOW);
  delay(space);
  digitalWrite(8,HIGH); //dot
  delay(dot);
  digitalWrite(8,LOW);
  delay(space);

    //A (.-)
  digitalWrite(8,HIGH); //dot
  delay(dot);
  digitalWrite(8,LOW);
  delay(space);
  digitalWrite(8,HIGH); //dash
  delay(dash);
  digitalWrite(8,LOW);
  delay(space);
}
