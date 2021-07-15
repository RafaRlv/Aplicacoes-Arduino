int lerbotao, estado;

const int ledazul=13;
const int ledverm=12;
const int ledverde=8;

const int buttonR=5;
const int buttonG=4;
const int buttonB=3;

void setup(){
  
  pinMode(ledazul, OUTPUT);
  pinMode(ledverm, OUTPUT);
  pinMode(ledverde, OUTPUT);
  
  pinMode(buttonR, INPUT_PULLUP);
  pinMode(buttonG, INPUT_PULLUP);
  pinMode(buttonB, INPUT_PULLUP);
 
}

void loop()
{
  lerbotao = digitalRead(buttonR);
  
  if(lerbotao == LOW){
    estado = estado+1;
  }
  switch(estado){
     case 1:
      digitalWrite(ledverm, HIGH);
      digitalWrite(ledverde, LOW);
      digitalWrite(ledazul, HIGH);
     break;
  
     case 2:
      digitalWrite(ledverm, LOW);
      digitalWrite(ledverde, HIGH);
      digitalWrite(ledazul, HIGH);
     break;
  
     case 3:
      digitalWrite(ledverm, HIGH);
      digitalWrite(ledverde, HIGH);
      digitalWrite(ledazul, LOW);
     break;
  
     case 4:
      estado = 0;
     break;
  }

}
