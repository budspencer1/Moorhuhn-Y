/* 
* Project:		Moorhuhn Y
* File Name:	Mathematics.cpp
* Date:			2016
* Author:		Sebastian <3
*
* Purpose:		define mathematical functions
*/

#include "Mathematics.hpp"

namespace Mathematic 
{
	/*
	@ Mathematische Standard Funktionen
	@ Addition, Subtraktion, Multiplikation, Division
	@ Division durch 0 ist nicht zulässig
	@ Benutzung: Mathematic::Mathematics::add(1,1000); -> addiert 1 und 1000 miteinander
	@ Gibt Wert als "long double" zurück
	*/
	BIGDOUBLE Mathematics::add(BIGDOUBLE a,BIGDOUBLE b){return((a)+(b));} 
		
	/*
	@ Mathematische Standard Funktionen
	@ Addition, Subtraktion, Multiplikation, Division
	@ Division durch 0 ist nicht zulässig
	@ Benutzung: Mathematic::Mathematics::sub(1,1000); -> subtrahiert 1 und 1000 miteinander
	@ Gibt Wert als "long double" zurück
	*/
	BIGDOUBLE Mathematics::sub(BIGDOUBLE a,BIGDOUBLE b){return((a)-(b));}
			
	/*
	@ Mathematische Standard Funktionen
	@ Addition, Subtraktion, Multiplikation, Division
	@ Division durch 0 ist nicht zulässig
	@ Benutzung: Mathematic::Mathematics::mul(1,1000); -> multipliziert 1 mit 1000
	@ Gibt Wert als "long double" zurück
	*/
	BIGDOUBLE Mathematics::mul(BIGDOUBLE a,BIGDOUBLE b){return((a)*(b));}
			
	/*
	@ Mathematische Standard Funktionen
	@ Addition, Subtraktion, Multiplikation, Division
	@ Division durch 0 ist nicht zulässig
	@ Benutzung: Mathematic::Mathematics::div(1,1000); -> teilt 1 durch 1000
	@ Gibt Wert als "long double" zurück
	*/
	BIGDOUBLE Mathematics::div(BIGDOUBLE a,BIGDOUBLE b){if(b==0)return 0;return((a)/(b));} 

	/*
	@ Quadratwurzel
	@ Heronisches Näherungsverfahren
	@ Man nähert sich der Wurzel mit vielen Schritten
	@ ACHTUNG: bei sehr großen Zahlen kann diese Funktion sehr langsam sein
	@ Benutzung: Mathematic::Mathematics::sqrt(10); -> rechnet die Quadratwurzel von 10 aus
	@ Gibt Wert als "long double" zurück
	*/
	BIGDOUBLE Mathematics::sqrt(BIGDOUBLE a)
	{
		if((a)<=0){return 0;}
		BIGDOUBLE _a,b,root;_a=(a);b=1;
		for(INTEGER j=0;j<((a)+1);j++){root=(((_a)+(b))/2);_a=(root);b=((a)/(root));}
		return root;
	}

	/*
	@ Maximum 
	@ gibt das höchste gegebene Parameter wieder
	@ Gibt Wert als "long double" zurück
	*/
	BIGDOUBLE Mathematics::maximum(BIGDOUBLE a,BIGDOUBLE b){return (((a)>(b))?(a):(b));}

	/*
	@ Minimum 
	@ gibt das niedrigste gegebene Parameter wieder
	@ Gibt Wert als "long double" zurück
	*/
	BIGDOUBLE Mathematics::minimum(BIGDOUBLE a,BIGDOUBLE b){return (((a)<(b))?(a):(b));}

	/*
	@ Potenzfunktion
	@ Potenziert (a) mit dem Exponenten (b)
	@ Gibt Wert als "long double" zurück
	*/
	BIGDOUBLE Mathematics::pow(BIGDOUBLE a,POSITIVEINT b)
	{
		BIGDOUBLE res=((a)*(a));
		for(SIGNEDINT i=0;i<(SIGNEDINT)((b)-2);i++){res=((res)*(a));}
		return (res);
	}

	/*
	@ Hypotenuse
	@ berechnet die Hypotenuse von (a) und (b)
	@ Gibt Wert als "long double" zurück
	*/
	BIGDOUBLE Mathematics::hypot(BIGDOUBLE a,BIGDOUBLE b){return (sqrt((pow((a),2),pow((b),2))));}

	/*
	@ Quadrierungsfunktion 
	@ quadriert (x) mit sich selber
	@ Gibt Wert als "long double" zurück
	*/
	BIGDOUBLE Mathematics::sqr(BIGDOUBLE x){return ((x)*(x));}

	/*
	@ Kubikfunktion
	@ rechnet (x) * (x) * (x)
	@ Gibt Wert als "long double" zurück
	*/
	BIGDOUBLE Mathematics::cube(BIGDOUBLE x){return ((x)*(x)*(x));}
};