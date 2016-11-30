/*
* Project:		Moorhuhn Y
* File Name:	Mathematics.hpp
* Author:		Sebastian <3
* Date:			2016
*
* Purpose:		define some mathematical functions
*/

#include"MoorhuhnY.hpp"

#define _MOOR_PI_ 3.14159265358979323846264338327
#define _MOOR_PI_2_ 6,283185307179586476925286766559
#define _MOOR_PI_3_ 9,4247779607693797153879301498385
#define _MOOR_PI_2__ 1,5707963267948966192313216916398

namespace Mathematic
{
	class Mathematics
	{
	public:
		/*
		@ Mathematische Standard Funktionen
		@ Addition, Subtraktion, Multiplikation, Division
		@ Division durch 0 ist nicht zulässig
		@ Benutzung: Mathematic::Mathematics::add(1,1000); -> addiert 1 und 1000 miteinander
		@ Gibt Wert als "long double" zurück
		*/
		BIGDOUBLE add(BIGDOUBLE a,BIGDOUBLE b);
			
		/*
		@ Mathematische Standard Funktionen
		@ Addition, Subtraktion, Multiplikation, Division
		@ Division durch 0 ist nicht zulässig
		@ Benutzung: Mathematic::Mathematics::sub(1,1000); -> subtrahiert 1 und 1000 miteinander
		@ Gibt Wert als "long double" zurück
		*/
		BIGDOUBLE sub(BIGDOUBLE a,BIGDOUBLE b);
				
		/*
		@ Mathematische Standard Funktionen
		@ Addition, Subtraktion, Multiplikation, Division
		@ Division durch 0 ist nicht zulässig
		@ Benutzung: Mathematic::Mathematics::mul(1,1000); -> multipliziert 1 mit 1000
		@ Gibt Wert als "long double" zurück
		*/
		BIGDOUBLE mul(BIGDOUBLE a,BIGDOUBLE b);
				
		/*
		@ Mathematische Standard Funktionen
		@ Addition, Subtraktion, Multiplikation, Division
		@ Division durch 0 ist nicht zulässig
		@ Benutzung: Mathematic::Mathematics::div(1,1000); -> teilt 1 durch 1000
		@ Gibt Wert als "long double" zurück
		*/
		BIGDOUBLE div(BIGDOUBLE a,BIGDOUBLE b);

		/*
		@ Quadratwurzel
		@ Heronisches Näherungsverfahren
		@ Man nähert sich der Wurzel mit vielen Schritten
		@ ACHTUNG: bei sehr großen Zahlen kann diese Funktion sehr langsam sein
		@ Benutzung: Mathematic::Mathematics::sqrt(10); -> rechnet die Quadratwurzel von 10 aus
		@ Gibt Wert als "long double" zurück
		*/
		BIGDOUBLE sqrt(BIGDOUBLE a);

		/*
		@ Maximum 
		@ gibt das höchste gegebene Parameter wieder
		@ Gibt Wert als "long double" zurück
		*/
		BIGDOUBLE maximum(BIGDOUBLE a,BIGDOUBLE b);

		/*
		@ Minimum 
		@ gibt das niedrigste gegebene Parameter wieder
		@ Gibt Wert als "long double" zurück
		*/
		BIGDOUBLE minimum(BIGDOUBLE a,BIGDOUBLE b);

		/*
		@ Potenzfunktion
		@ Potenziert (a) mit dem Exponenten (b)
		@ Gibt Wert als "long double" zurück
		*/
		BIGDOUBLE pow(BIGDOUBLE a,POSITIVEINT b);

		/*
		@ Hypotenuse
		@ berechnet die Hypotenuse von (a) und (b)
		@ Gibt Wert als "long double" zurück
		*/
		BIGDOUBLE hypot(BIGDOUBLE a,BIGDOUBLE b);

		/*
		@ Quadrierungsfunktion 
		@ quadriert (x) mit sich selber
		@ Gibt Wert als "long double" zurück
		*/
		BIGDOUBLE sqr(BIGDOUBLE x);

		/*
		@ Kubikfunktion
		@ rechnet (x) * (x) * (x)
		@ Gibt Wert als "long double" zurück
		*/
		BIGDOUBLE cube(BIGDOUBLE x);
	};
};
