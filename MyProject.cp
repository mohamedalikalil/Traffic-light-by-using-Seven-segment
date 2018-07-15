#line 1 "F:/Training 2/Code programe/Task/Seven segment4/MyProject.c"
void main() {
 trisb=0x00;
 trisc=0x00;
 portb=0;
 portc=0;
 while(1)
 {
 portb= 0x67;
 delay_ms(500);
 portb= 0x7F;
 delay_ms(500);
 portb= 0x07;
 delay_ms(500);
 portb= 0x7D;
 delay_ms(500);
 portb= 0x6D;
 delay_ms(500);
 portb= 0x66;
 delay_ms(500);
 portb= 0x4F;
 delay_ms(500);
 portb= 0x5B;
 delay_ms(500);
 portb= 0x06;
 delay_ms(500);
 portb= 0x3F;
 delay_ms(500);
 portb= 0x00;

 portc= 0x67;
 delay_ms(500);
 portc= 0x7F;
 delay_ms(500);
 portc= 0x07;
 delay_ms(500);
 portc= 0x7D;
 delay_ms(500);
 portc= 0x6D;
 delay_ms(500);
 portc= 0x66;
 delay_ms(500);
 portc= 0x4F;
 delay_ms(500);
 portc= 0x5B;
 delay_ms(500);
 portc= 0x06;
 delay_ms(500);
 portc= 0x3F;
 delay_ms(500);
 portc= 0x00;

 }
}
