// Progetto: LED fisso
// Autore: Giovanni Galofaro
//
// Accensione permanente di un LED.
// Il LED rimane acceso senza lampeggiare.

const int LED = 13;

void setup() {
  pinMode(LED, OUTPUT);
  digitalWrite(LED, HIGH);
}

void loop() {
  // Il LED rimane acceso.
}
//digitalWrite(LED, HIGH);

che porta il pin 13 a livello HIGH, accendendo il LED.

Nel loop() non facciamo nessuna operazione, quindi non c'è alcun lampeggio.

Se stai usando il LED integrato della scheda Arduino Uno, il pin 13 è una scelta comoda per questo primo progetto.
