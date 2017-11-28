all:
	avr-gcc -g -Os -mmcu=atmega8 -c main.c
	avr-gcc -g -mmcu=atmega8 -o main.elf main.o
	avr-objcopy -j .text -j .data -O ihex main.elf main.hex
	avrdude -c usbasp -p atmega8 -U flash:w:main.hex

clean:
	rm -rf *.o *.hex *.elf
