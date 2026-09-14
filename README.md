# 🔴 Arduino LED Fisso

## 📌 Descrizione

Questo progetto consiste nell'accensione di un singolo LED tramite una scheda **Arduino Mega 2560 R3**.

Il LED viene comandato attraverso un'uscita digitale di Arduino e rimane **acceso in modo continuo**, senza lampeggiare.

Il progetto rappresenta una semplice applicazione delle **uscite digitali di Arduino** e costituisce una base per la realizzazione di circuiti elettronici più complessi.

---

## 🎯 Obiettivo

L'obiettivo del progetto è controllare un LED esterno utilizzando Arduino Mega 2560 R3.

Una volta avviato il programma:

1. Arduino configura il pin digitale 13 come uscita.
2. Il pin viene portato a livello HIGH.
3. Il LED si accende.
4. Il LED rimane acceso continuamente.

Non viene effettuata alcuna alternanza tra HIGH e LOW, quindi il LED **non lampeggia**.

---

## 🧰 Componenti utilizzati

- **Arduino Mega 2560 R3**
- **1 LED**
- **1 resistenza da 220 Ω**
- **Breadboard**
- **Cavi jumper**

---

## 🔌 Collegamenti elettrici

Il LED è collegato all'uscita digitale **D13** dell'Arduino Mega 2560 R3.

Il collegamento è realizzato nel seguente modo:

**D13 → Resistenza 220 Ω → Anodo LED → Catodo LED → GND**

### Schema del circuito

```text
Arduino Mega 2560 R3

D13
 │
 │
[220 Ω]
 │
 │
 ▼
Anodo LED
   │
  |>| 
   │
Catodo LED
   │
   │
  GND

La resistenza da 220 Ω viene utilizzata per limitare la corrente che attraversa il LED e proteggerlo.

Polarità del LED

Il LED è un componente polarizzato:

Anodo (+) → collegato alla resistenza e quindi al pin D13
Catodo (−) → collegato a GND

Il corretto orientamento del LED è necessario affinché la corrente possa attraversarlo nel verso corretto.

---
## 💻 Codice

Il programma è scritto in *C/C++ per Arduino*.

Il pin digitale utilizzato viene configurato come uscita:

```cpp
pinMode(LED, OUTPUT);

Successivamente il pin viene portato a livello HIGH:

digitalWrite(LED, HIGH);

In questo modo il LED rimane acceso.

⚡ Funzionamento

Il programma esegue le seguenti operazioni:

Imposta il pin del LED come uscita.
Porta il pin a livello HIGH.
Mantiene il LED acceso.

Nel loop() non viene eseguita alcuna operazione di accensione e spegnimento, quindi il LED non lampeggia.
💻 Programmazione

Il programma è scritto in C/C++ utilizzando l'ambiente di programmazione Arduino.

Codice
// Progetto: LED fisso
// Autore: Giovanni Galofaro
// Scheda: Arduino Mega 2560 R3
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
⚙️ Funzionamento del programma
1. Definizione del pin
const int LED = 13;

Viene assegnato il numero 13 alla variabile LED.

Questo identifica il pin digitale 13 della scheda Arduino Mega 2560 R3.

2. Configurazione del pin
pinMode(LED, OUTPUT);

Il pin 13 viene configurato come uscita digitale.

3. Accensione del LED
digitalWrite(LED, HIGH);

Il pin viene portato a livello logico HIGH, permettendo il passaggio di corrente attraverso la resistenza e il LED.

Il LED si accende.

4. Mantenimento dello stato
void loop() {
  // Il LED rimane acceso.
}

Nel ciclo loop() non viene eseguito alcun comando che spenga il LED.

Di conseguenza, il LED rimane acceso continuamente.

📊 Comportamento del circuito
Stato del pin D13	Stato del LED
HIGH	🟢 Acceso
LOW	🔴 Spento

In questo progetto il pin viene impostato su HIGH e non viene successivamente riportato a LOW.

Risultato: LED acceso fisso.

---

🔌Circuito

Schema elettrico del progetto:

Da aggiungere

In seguito verrà inserito qui lo schema del circuito realizzato.

📷 Realizzazione

Foto del circuito:

Da aggiungere

👨‍💻 Autore

Giovanni Galofaro

Elettronica • Arduino • Programmazione • Progettazione

📚 Primo progetto

Questo progetto costituisce una base per sviluppare successivamente circuiti e sistemi Arduino più complessi.
