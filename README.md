# 🔴 Arduino LED Fisso

## 📌 Descrizione

Questo è un semplice progetto realizzato con **Arduino** per accendere un singolo LED e mantenerlo acceso in modo continuo, senza lampeggio.

Il progetto rappresenta una delle prime applicazioni fondamentali dell'utilizzo delle **uscite digitali di Arduino**.

---

## 🎯 Obiettivo

L'obiettivo è comandare un LED tramite un'uscita digitale di Arduino.

Una volta avviato il programma, il LED viene acceso e rimane acceso permanentemente.

---

## 🧰 Componenti utilizzati

- Arduino
- 1 LED
- 1 resistenza per il LED
- Breadboard
- Cavi jumper

> Se hai utilizzato il LED integrato sulla scheda Arduino, possiamo modificare questa sezione per descrivere esattamente il tuo circuito.

---

## 💻 Codice

Il programma è scritto in **C/C++ per Arduino**.

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

🔌 Circuito

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
