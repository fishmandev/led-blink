#define F_CPU 1000000UL
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
  DDRD = 0x02; // Set PORTD1 as output (Data-Direction-Register)
  while(1)
  {
    PORTD |= (1<<(PORTD1));
    _delay_ms(1000);
    PORTD &= ~(1<<(PORTD1));
    _delay_ms(1000);
  }
  return 0;
}
