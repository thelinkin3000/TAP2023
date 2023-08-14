// La función setup corre una vez, al prenderse el Arduino
// o bien al reiniciar mediante el botón reset
void setup()
{
    // Inicializa el pin digital 6 como pin de salida
    pinMode(D0, OUTPUT);
}

// La función loop corre una y otra vez sin parar
void loop()
{
    digitalWrite(D0, HIGH);
    delay(1000);
    digitalWrite(D0, LOW);
    delay(1000);
}
