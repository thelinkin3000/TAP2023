int val = 0;

void setup()
{
    // Configuramos el pin 11 como pin de salida
    pinMode(D2, OUTPUT);
}

void loop()
{
    // En la primer mitad del ciclo aumentamos paulatinamente la
    // intensidad del led
    for (int i = 0; i < 50; i++)
    {
        val = (i * 255 / 50);
        analogWrite(D2, val);
        delay(10);
    }
    // En la segunda mitad hacemos el proceso inverso
    for (int i = 0; i < 50; i++)
    {
        val = 255 - (i * 255 / 50);
        analogWrite(D2, val);
        delay(10);
    }
}