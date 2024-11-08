/*int main(){
  DDRB = B11111111;
  while(1){
    PORTB = B00000000;
    for(int i=0;i<1000000;i++);
    PORTB = B11111111;
  }
}*/

/*void setup(){
  DDRB |= (1<<PB1);
}
void loop(){
  PORTB |= (1<<PB1);
  delay(500);
  PORTB &= ~(1<<PB1);
  delay(500);
}*/
/*void setup() {
  // Set pin 8 as output
  DDRB |= (1 << PB0);
}

void loop() {
  // Turn LED on (set pin 8 HIGH)
  PORTB |= (1 << PB0);
  delay(500);

  // Turn LED off (set pin 8 LOW)
  PORTB &= ~(1 << PB0);
  delay(500);
}*/


//Final code for Blinking arduino pin no 9
int main(){
  DDRB |= (1<<PB1);
  while(true){
    PORTB |= (1<<PB1);
    delay_ms(3000);
    PORTB &= ~(1<<PB1);
    delay_ms(3000);
  }
}
void delay_ms(unsigned long ms){
  for(unsigned long i =0;i<ms;i++){
    for(unsigned long j = 0; j<1000;j++){
      asm volatile("");
    }
  }
}
