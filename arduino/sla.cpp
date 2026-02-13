int potenciometro = A0; 
int motor = 6;          
int valorPotentiometro = 0;

int botao = 13;
int piezo = A1;

int led1 = 12;
int led2 = 11;
int led3 = 10;
int led4 = 9;
int ldr = A2;
int valorLdr = 0;

void setup() {
  pinMode(motor, OUTPUT);
  pinMode(botao, INPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
}

void loop() {
  //motor
  valorPotentiometro = analogRead(potenciometro);  
  valorPotentiometro = map(valorPotentiometro, 0, 1023, 0, 255); 
  analogWrite(motor, valorPotentiometro);                   
  delay(10);
  
  //som
  if(digitalRead(botao) == LOW){
  tone(piezo,500);
    delay(300);
  tone(piezo,800);
    delay(300);
  tone(piezo,1200);
    delay(300);
  tone(piezo,1500);
    delay(300);
   noTone(piezo);
    delay(100);
   }
   //led
   valorLdr = analogRead(ldr);
   valorLdr = map(valorLdr, 0, 1000);
   if (valorLdr < 250) {
     digitalWrite(led1, HIGH);
     } 
    else {
   digitalWrite(led1, LOW);
   }
   if (valorLdr < 500) {
     digitalWrite(led2, HIGH);
     } 
    else {
     digitalWrite(led2, LOW);
     }
   if (valorLdr < 600) {
     digitalWrite(led3, HIGH);
     } 
    else {
     digitalWrite(led3, LOW);
     }
   if (valorLdr < 650) {
     digitalWrite(led4, HIGH);
     } 
    else {
     digitalWrite(led4, LOW);
  }
}
