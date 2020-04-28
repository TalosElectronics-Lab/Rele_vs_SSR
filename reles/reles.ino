/*
 * Diferencia entre rele mecánico y SSR
 * taloselectronics.com
 * Rafael Lozano Rolón
 * soporte@taloselectronics.com
 */ 
#define rele_mecanico 2
#define rele_ssr 3

const int Tiempo = 250;
void setup()
{
    pinMode(rele_mecanico, OUTPUT);
    pinMode(rele_ssr, OUTPUT);

    digitalWrite(rele_mecanico, HIGH);//con HIGH permanece apagado
    digitalWrite(rele_mecanico, HIGH);//con HIGH permanece apagado
}
void loop()
{
    for(int i=0; i<5; i++)
    {
      digitalWrite(rele_mecanico,LOW);
      delay(Tiempo);
      digitalWrite(rele_mecanico,HIGH);
      delay(Tiempo);
    }
    delay(1000);
}
