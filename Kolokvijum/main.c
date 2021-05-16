/*
 *@file main.c
 *@brief Glavna funkcija koja implementira osnovne operacije
 *@author Danijela Topic
 *@date 16.5.2021
 */

//Standardna arduino biblioteka
#include <avr/io.h>
//Biblioteka koja omgucava koriscenje funkcije _delay_ms()
#include <util/delay.h>
//Bibliteka koja omogucava pristup podacima u flash memoriji
#include <avr/pgmspace.h>
//Standardna C biblioteka
#include <stdio.h>
//Pristup statickoj usart biblioteci
#include "../usart/usart.h"
//Biblioteka koja sadrži definicije standardnih oznacenih i neoznacenih tipova podataka
#include <stdint.h>
#include "tajmer.h"
#include "../pin/pin.h"

int main()
{
	usartInit(9600);
	timer0InteruptInit();

	while(1)
	{
	    usartPutString_P(PSTR("Unesite duzinu niza: \r\n"));
		while(!usartAvailable())
			;
		timer0DelayMs(50);

	}
	return 0;
}

