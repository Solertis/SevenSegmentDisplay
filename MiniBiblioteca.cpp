#include "MiniBiblioteca.h"

DisplaySeven::DisplaySeven(int pinA, int pinB, int pinC, int pinD) 
{
	pinMode(pinA, OUTPUT);
	pinMode(pinB, OUTPUT);
	pinMode(pinC, OUTPUT);
	pinMode(pinD, OUTPUT);

	_pinA = pinA;
	_pinB = pinB;
	_pinC = pinC;
	_pinD = pinD;
}

void DisplaySeven::binaryToDisplay(int statePinA, int statePinB, int statePinC, int statePinD) 
{
	digitalWrite(_pinA, statePinA);
	digitalWrite(_pinB, statePinB);
	digitalWrite(_pinC, statePinC);
	digitalWrite(_pinD, statePinD);
}

void DisplaySeven::displayNumber(int number) {
	switch(number) {
		case 0:
			binaryToDisplay(0, 0, 0, 0);
			break;
		
		case 1:
			binaryToDisplay(1, 0, 0, 0);
			break;

		case 2:
			binaryToDisplay(0, 1, 0, 0);
			break;

		case 3:
			binaryToDisplay(1, 1, 0, 0);
			break;

		case 4:
			binaryToDisplay(0, 0, 1, 0);
			break;

		case 5:
			binaryToDisplay(1, 0, 1, 0);
			break;

		case 6:
			binaryToDisplay(0, 1, 1, 0);
			break;

		case 7:
			binaryToDisplay(1, 1, 1, 0);
			break;

		case 8:
			binaryToDisplay(0, 0, 0, 1);
			break;

		case 9:
			binaryToDisplay(1, 0, 0, 1);
			break;
	}
}


/*
	Exibirá, no display, o numero que o usuario escolher.
	Ele pode tambem escolher o tempo do delay. O padrao é 1000
*/

void DisplaySeven::numberZero(float timer) {
	displayNumber(0);
	delay(timer);	
}

void DisplaySeven::numberOne(float timer) {
	displayNumber(1);
	delay(timer);	
}

void DisplaySeven::numberTwo(float timer) {
	displayNumber(2);
	delay(timer);	
}

void DisplaySeven::numberThree(float timer) {
	displayNumber(3);
	delay(timer);	
}

void DisplaySeven::numberFour(float timer) {
	displayNumber(4);
	delay(timer);	
}

void DisplaySeven::numberFive(float timer) {
	displayNumber(5);
	delay(timer);	
}

void DisplaySeven::numberSix(float timer) {
	displayNumber(6);
	delay(timer);	
}

void DisplaySeven::numberSeven(float timer) {
	displayNumber(7);
	delay(timer);	
}

void DisplaySeven::numberEight(float timer) {
	displayNumber(8);
	delay(timer);	
}

void DisplaySeven::numberNine(float timer) {
	displayNumber(9);
	delay(timer);	
}


/*
	Usuario pode escolher os numeros, em um intervalo, que quer exibir,
	e o intervalo entre a exibicao de cada um. O padrao é 1000
 */
void DisplaySeven::chooseNumbers(int numberMin, int numberMax, float timer) {
	for (int i = numberMin; i <= numberMax; i++) {
		displayNumber(i);
		delay(timer);
	}
}


/*
	Exibirá todos os números.
	Delay padrao: 1000
*/
void DisplaySeven::allNumbers(float timer) {
	for (int i = 0; i < 10; i++) {
		displayNumber(i);
		delay(timer);
	}	
}