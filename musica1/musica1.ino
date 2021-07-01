void setup()
{
pinMode(8,OUTPUT);//pino de saída do arduino
}

void loop(){
/*
Frequência das notas: em HERTZ ou ciclo por segundo
Dó - 262 Hz
Ré - 294 Hz
Mi - 330 Hz
Fá - 349 Hz
Sol - 392 Hz
Lá - 440 Hz
Si - 494 Hz
#Dó - 528 Hz
*/
  
// UM PEDAÇO DO HINO DA CCB  //LETRA: comigo está jesus
                             //meu bom metre e salvador   
                             
                             //Me guia com a luz pelo o seu 
                             // imenso amor.
  
delay(1000); //espera 1 segundo
int tempo = 1000; 
int tempo2 = 2500;
int tempo3 = 1500;
tone(8,330,tempo/2); //mi  
delay(tempo/2);                 
tone(8,392,tempo); //sol
delay(tempo);
tone(8,440,tempo/2); //la 
delay(tempo/2);
tone(8,330,tempo); //mi
delay(tempo);
tone(8,294,tempo/2); //re
delay(tempo/2);
tone(8,262,tempo3); //do
delay(tempo3);
tone(8,528,tempo); //do
delay(tempo);
tone(8,494,tempo/2); //Si
delay(tempo/2);
tone(8,440,tempo); //la
delay(tempo);
tone(8,528,tempo/2); //do
delay(tempo/2);
tone(8,528,tempo); //do
delay(tempo);
tone(8,440,tempo/2); //la
delay(tempo/2);
tone(8,392,tempo2); //sol
delay(tempo2); 

tone(8,330,tempo/2); //mi  
delay(tempo/2);                 
tone(8,392,tempo); //sol
delay(tempo);
tone(8,440,tempo/2); //la 
delay(tempo/2);
tone(8,330,tempo); //mi
delay(tempo);
tone(8,294,tempo/2); //re
delay(tempo/2);
tone(8,262,tempo3); //do
delay(tempo3);
tone(8,528,tempo); //do
delay(tempo);
tone(8,440,tempo/2); //la 
delay(tempo/2);
tone(8,494,tempo); //Si
delay(tempo);
tone(8,494,tempo/2); //Si
delay(tempo/2);
tone(8,440,tempo); //la
delay(tempo);
tone(8,440,tempo/2); //la
delay(tempo/2);
tone(8,392,tempo2); //sol
delay(tempo2);







}
