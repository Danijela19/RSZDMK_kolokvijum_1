/*
 *@file pin.h
 *@brief H fajl koji sadrzi deklaracije funkcija
 *@author Danijela Topic
 *@date 16.5.2021.
 *@version 1.0
 */

#ifndef PIN_H_
#define PIN_H_

#include <avr/io.h>


/// Makro za podesavanje visoke vrednosti signala na pinu
#define HIGH 1
/// Makro za podesavanje niske vrednosti signala na pinu
#define LOW 0
/// Makro za podesavanje izlaznog smera pina
#define OUTPUT 1
/// Makro za podesavanje ulaznog smera pina
#define INPUT 0
/// Makro za selektovanje porta B
#define PORT_B 0
/// Makro za selektovanje porta C
#define PORT_C 1
/// Makro za selektovanje porta D
#define PORT_D 2
/// Makro za selektovanje pina na koji je povezana dioda
#define DIODE_PIN 5
/// Promenljiva koja skladisti broj milisekundi proteklih od pokretanja aplikacije
volatile unsigned long ms = 0;

/**
 * pinSetValue - Funkcija koja postavlja vrednost na pinu tj setuje pin na vrednost 1
 * @param port - ulaz tipa unsigned char - Port na kojem je pin ciju vrednost potrebno postaviti
 * @param pin - ulaz tipa unsigned char - Pin ciju je vrednost potrebno postaviti
 * @param value - ulaz tipa unsigned char - Vrednost koja se postavlja na pin a moze biti 0 ili 1
 * @return Nema povratnu vrednost
 */
void pinSetValue(unsigned char port, unsigned char pin, unsigned char value);

/**
 * pinInit - Funkcija koja omogucuje inicijalizaciju pina
 * @param port - ulaz tipa unsigned char - Port na kojem je pin koji je potrebno inicijalizovati
 * @param pin - ulaz tipa unsigned char - Pin koji je potrebno inicijalizovati
 * @param direction - ulaz tipa unsigned char - Smer prema kojem je potrebno inicijalizovati pin (ulazni ili izlazni smer pina)
 * @return Nema povratnu vrednost
 */
void pinInit(unsigned char port, unsigned char pin, unsigned char direction);


#endif /* PIN_H_ */
