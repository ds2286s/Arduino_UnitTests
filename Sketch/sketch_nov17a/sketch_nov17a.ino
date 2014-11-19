#include <UnitTestMath.h>





/*
 * Autor: Dennis Stolp
 * Firma: seneos GmbH
 * Datum: 17.11.2014
 * Titel: Unit-Mathtest - Sketch
 * Beschreibung: Dieser Sketch ist die Main, für zu testende Methoden.
 * Die Funktionen sind in C++ geschrieben und werden getestet.
 */




/*
 * Initialisiere das Board mit einer Baudrate von 9600.
 */
void setup()
{
  Serial.begin(9600);
}

/*
 * Führe Rechenoperationen auf dem Board durch. 
 */
void loop()
{
  Serial.print("2+9= ");
  Serial.println(UnitTestMat.add(2,9));
  
  Serial.print("1-7= ");
  Serial.println(UnitTestMat.sub(1,7));
  
  Serial.print("3*4= ");
  Serial.println(UnitTestMat.mult(3,4));
  
  Serial.print("4/2= ");
  Serial.println(UnitTestMat.divide(4,2));
  
  Serial.print("Binomialkoeffizient(3,1) =");
  Serial.println(UnitTestMat.binom(3,1));
  
  Serial.print("Fakultaet von 5) =");
  Serial.println(UnitTestMat.fak(5));
  
  //warte 0.5 Sekunden bis zum nächsten Durchlauf
  delay(1000);
}
