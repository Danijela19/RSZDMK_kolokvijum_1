/*
 *@fiel tajmer.h
 *@brief   H fajl koji sadrzi definicije funkcija za upravljanje tajmerom
 *@author Danijela Topic
 *@date 16.5.2021.
 *@version 1.0
 */

#ifndef TAJMER_H_
#define TAJMER_H_

#include <avr/interrupt.h>

/**
 * timer0DelayMs - Funkcija koja implementira pauzu u broju milisekundi koji je prosledjen
 * kao parametar
 * @param delay_length - ulaz tipa unsigned long - Duzina pauze u milisekundama
 * @return Povratna vrednost je tipa unsigned long i ima vrednost broja milisekundi
 * proteklih od pocetka aplikacije do trenutka izlaska iz funkcije
 */
unsigned long timer0DelayMs(unsigned long delay_length);

/**
 * timer0InteruptInit - Funkcija koja inicijalizuje timer 0 tako da pravi prekide
 * svake milisekunde
 * @return Nema povratnu vrednost
 */
void timer0InteruptInit();


#endif /* TAJMER_H_ */
