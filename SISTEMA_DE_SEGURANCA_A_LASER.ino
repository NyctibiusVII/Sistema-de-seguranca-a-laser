#include <SoftwareSerial.h> //  SoftwareSerial bluetoo(10, 11); // RX, TX

int buzzer = 13;            //         Buzzer sonoro
/**************************************************/
const int buttonPin = 8;    //                Button
int buttonState     = 0;    //      Estado do Button
/**************************************************/
int ledAlertRed  = 7;       // Led vermelho (ALARME)
int ledAlertBlue = 6;       //     Led Azul (ALARME)
/**************************************************/
int ledAmbiente = 5;        //        Led (AMBIENTE)
int ledButton   = 4;        //            Led button
/**************************************************/
int ledOff = 3;             //               Led OFF
int ledOn  = 2;             //                Led ON
/**************************************************/
char bett;
char parte;
String t = "Alerta de Segurança";
unsigned long delayl = 0;

/*
###########################################################################
###########################################################################
###########################################################################
*/
void setup(){ // ABRE SETUP
      pinMode(buttonPin, INPUT);
//*************************************************************************
      pinMode(ledAmbiente, OUTPUT);                    // Led (AMBIENTE) //
            digitalWrite(ledAmbiente, HIGH);
                  delay(100);
            digitalWrite(ledAmbiente, LOW);
                  delay(100);
            digitalWrite(ledAmbiente, HIGH);
                  delay(100);
            digitalWrite(ledAmbiente, LOW);
                  delay(100);
      pinMode(ledButton, OUTPUT);                          // Led button //
            digitalWrite(ledButton, HIGH);
                  delay(100);
            digitalWrite(ledButton, LOW);
                  delay(100);
            digitalWrite(ledButton, HIGH);
                  delay(100);
            digitalWrite(ledButton, LOW);
                  delay(100);
//*************************************************************************
      pinMode(ledOn, OUTPUT);                                  // Led ON //
            digitalWrite(ledOn, HIGH);
                  delay(100);
            digitalWrite(ledOn, LOW);
                  delay(100);
            digitalWrite(ledOn, HIGH);
                  delay(100);
            digitalWrite(ledOn, LOW);
                  delay(100);
      pinMode(ledOff, OUTPUT);                                // Led OFF //
            digitalWrite(ledOff, HIGH);
                  delay(100);
            digitalWrite(ledOff, LOW);
                  delay(100);
            digitalWrite(ledOff, HIGH);
                  delay(100);
            digitalWrite(ledOff, LOW);
                  delay(100);
//*************************************************************************
      pinMode(ledAlertRed, OUTPUT);             // Led vermelho (ALARME) //
            digitalWrite(ledAlertRed,HIGH);
                  delay(100);
            digitalWrite(ledAlertRed,LOW);
                  delay(100);
            digitalWrite(ledAlertRed,HIGH);
                  delay(100);
            digitalWrite(ledAlertRed,LOW);
                  delay(100);
      pinMode(ledAlertBlue, OUTPUT);                 // Led azul (ALARME) //
            digitalWrite(ledAlertBlue,HIGH);
                  delay(100);
            digitalWrite(ledAlertBlue,LOW);
                  delay(100);
            digitalWrite(ledAlertBlue,HIGH);
                  delay(100);
            digitalWrite(ledAlertBlue,LOW);
                  delay(100);
                        digitalWrite(ledAlertRed,HIGH);    // V+A = Rosa //
                        digitalWrite(ledAlertBlue,HIGH);
                              delay(500);
                        digitalWrite(ledAlertRed,LOW);
                        digitalWrite(ledAlertBlue,LOW);
                              delay(500);
//*************************************************************************
      pinMode(buzzer,OUTPUT);                                // Buzzer //
            digitalWrite(buzzer,HIGH);
                  delay(100);
            digitalWrite(buzzer,LOW);
                  delay(100);
            digitalWrite(buzzer,HIGH);
                  delay(100);
            digitalWrite(buzzer,LOW);
                  delay(100);
//*************************************************************************
      Serial.begin(9600); // bluetoo.begin(9600)
      Serial.println("Alarme Iniciado!");
}// FECHA SETUP

/*
###########################################################################
###########################################################################
###########################################################################
*/
void loop() { // ABRE LOOP
      bett = Serial.read();

      digitalWrite(ledAmbiente, HIGH);   // Led (AMBIENTE)
      digitalWrite(ledButton, HIGH);     //  Luz do Button

      int LDR = analogRead (A0); //                 Sensor
      Serial.println(LDR);       // Printa valor do sensor

      buttonState = digitalRead(buttonPin);

      if (buttonState == HIGH) {      // Abre Button ativo
                  digitalWrite(ledOn, HIGH);    //  Led ON
                  digitalWrite(ledOff, LOW);    // Led OFF

                  if(LDR >=500) { // Abre if LDR
                  // LASER OFF
                        if(Serial.available()) {
                              parte=Serial.read();
                              t += parte;
                              delayl = millis();
                        }

                        if(((millis() - delayl) > 10) && (t != "")) {
                              Serial.print(t);
                              t = "";
                              Serial.println(t);
                              delay(8000);
                        }

                        {digitalWrite(buzzer,HIGH);
                              {tone(9,50,700);
                               noTone(8);
                              } //       Fecha 1°tone
                              {digitalWrite(buzzer,LOW); // Abre digitalWriteL
                                    delay(800);
                                    {digitalWrite(buzzer,HIGH); // Abre digitalWriteH
                                          {tone(9,2047,800);
                                                noTone(8);
                                          } // Fecha 2°tone
                                    } //Fecha digitalWriteH
                              } //Fecha digitalWriteL
//************************************************************************* Led vermelho (ALARME)
                              digitalWrite(ledAlertRed, HIGH);
                                    delay(300);
                              digitalWrite(ledAlertRed, LOW);
                                    delay(300);
                              digitalWrite(ledAlertRed, HIGH);
                                    delay(300);
                              digitalWrite(ledAlertRed, LOW);
                                    delay(300);
//************************************************************************* Led azul (ALARME)
                              digitalWrite(ledAlertBlue, HIGH);
                                    delay(300);
                              digitalWrite(ledAlertBlue, LOW);
                                    delay(300);
                              digitalWrite(ledAlertBlue, HIGH);
                                    delay(300);
                              digitalWrite(ledAlertBlue, LOW);
                                    delay(300);
//************************************************************************* Vibrador
                              digitalWrite(11, HIGH);
                                    delay(50);
                              digitalWrite(11, LOW);
                                    delay(50);
//************************************************************************* Menssagem
                              Serial.println("VOCÊ ESTÁ SENDO INVADIDO-LIGUE 190 JÁ!!!");
                        } // Fecha digitalWriteH
                  } // Fecha if LDR
                  else { // Abre else LDR
                  // LASER ON
                        digitalWrite(buzzer,LOW);       //      Desliga buzzer (ALARME) (OFF)
                        digitalWrite(ledAlertRed,LOW);  // Deliga led vermelho (ALARME) (OFF)
                        digitalWrite(ledAlertBlue,LOW); //    Desliga led azul (ALARME) (OFF)
                  } // Fecha else LDR
      } // Fecha if btn ativo
      if (buttonState == LOW)  {
            digitalWrite(ledOn,HIGH);       //                LED OFF (ON)
            digitalWrite(ledOff,LOW);       //                LED ON (OFF)
            digitalWrite(buzzer,LOW);       //                BUZZER (OFF)
            digitalWrite(ledAlertRed,LOW);  // LED VERMELHO (ALARME) (OFF)
            digitalWrite(ledAlertBlue,LOW); //     LED AZUL (ALARME) (OFF)
            digitalWrite(LDR,LOW);          //                   LDR (OFF)
      }

      switch (bett){
            case '1':
            pinMode(buttonPin, INPUT);
            pinMode(ledAmbiente, OUTPUT);
                  digitalWrite(ledAmbiente, HIGH);
                        delay(100);
                  digitalWrite(ledAmbiente, LOW);
                        delay(100);
                  digitalWrite(ledAmbiente, HIGH);
                        delay(100);
                  digitalWrite(ledAmbiente, LOW);
                        delay(100);
            pinMode(ledButton, OUTPUT);
                  digitalWrite(ledButton, HIGH);
                        delay(100);
                  digitalWrite(ledButton, LOW);
                        delay(100);
                  digitalWrite(ledButton, HIGH);
                        delay(100);
                  digitalWrite(ledButton, LOW);
                        delay(100);
//*************************************************************************
            pinMode(ledOn, OUTPUT);                            // Led ON //
                  digitalWrite(ledOn, HIGH);
                        delay(100);
                  digitalWrite(ledOn, LOW);
                        delay(100);
                  digitalWrite(ledOn, HIGH);
                        delay(100);
                  digitalWrite(ledOn, LOW);
                        delay(100);
            pinMode(ledOff, OUTPUT);                          // Led OFF //
                  digitalWrite(ledOff, HIGH);
                        delay(100);
                  digitalWrite(ledOff, LOW);
                        delay(100);
                  digitalWrite(ledOff, HIGH);
                        delay(100);
                  digitalWrite(ledOff, LOW);
                        delay(100);
//*************************************************************************
            pinMode(ledAlertRed, OUTPUT);       // Led vermelho (ALARME) //
                  digitalWrite(ledAlertRed,HIGH);
                        delay(100);
                  digitalWrite(ledAlertRed,LOW);
                        delay(100);
                  digitalWrite(ledAlertRed, HIGH);
                        delay(100);
                  digitalWrite(ledAlertRed, LOW);
                        delay(100);
            pinMode(ledAlertBlue, OUTPUT);          // Led azul (ALARME) //
                  digitalWrite(ledAlertBlue, HIGH);
                        delay(100);
                  digitalWrite(ledAlertBlue, LOW);
                        delay(100);
                  digitalWrite(ledAlertBlue, HIGH);
                        delay(100);
                  digitalWrite(ledAlertBlue, LOW);
                        delay(100);
                              digitalWrite(ledAlertRed, HIGH);// V+A = Rosa //
                              digitalWrite(ledAlertBlue, HIGH);
                                    delay(500);
                              digitalWrite(ledAlertRed, LOW);
                              digitalWrite(ledAlertBlue, LOW);
                                    delay(500);
//*************************************************************************
            pinMode(buzzer,OUTPUT);                            // Buzzer //
                  digitalWrite(buzzer, HIGH);
                        delay(100);
                  digitalWrite(buzzer, LOW);
                        delay(100);
                  digitalWrite(buzzer, HIGH);
                        delay(100);
                  digitalWrite(buzzer, LOW);
                        delay(100);
                  break;
            case '3': // Buzzer
                  digitalWrite(buzzer, HIGH);
                        {tone(9,50,700);
                              noTone(8);
                        }
                        delay(1000);
                  digitalWrite(buzzer, LOW);
                  break;
            case '4': // Led vermelho (ALARME)
                  digitalWrite(ledAlertRed, HIGH);
                        delay(1000);
                  break;
            case '5': // Led azul (ALARME)
                  digitalWrite(ledAlertBlue, HIGH);
                        delay(1000);
                  break;
            case '6': // Led ON
                  digitalWrite(ledOn, LOW);
                        delay(1000);
                  digitalWrite(ledOn, HIGH);
                        delay(1000);
                  break;
            case '7': // Led OFF
                  digitalWrite(ledOff, LOW);
                        delay(1000);
                  digitalWrite(ledOff, HIGH);
                        delay(1000);
                  break;
            case '8': // Led (AMBIENTE)
                  digitalWrite(ledAmbiente, LOW);
                        delay(1000);
                  break;
            case '9': // Led button
                  digitalWrite(ledButton, LOW);
                        delay(1000);
                  digitalWrite(ledButton, HIGH);
                        delay(1000);
                  break;
            default:
                  break;
      }

      /*
      if (bett == '1') {
            pinMode(ledAmbiente, OUTPUT);
            pinMode(ledButton, OUTPUT);
                  digitalWrite(5, HIGH);
                        delay(100);
                  digitalWrite(5, LOW);
                        delay(100);
                  digitalWrite(5, HIGH);
                        delay(100);
                  digitalWrite(5, LOW);
                        delay(100);
            pinMode(buttonPin, INPUT);
                  digitalWrite(4, HIGH);
                        delay(100);
                  digitalWrite(4, LOW);
                        delay(100);
                  digitalWrite(4, HIGH);
                        delay(100);
                  digitalWrite(4, LOW);
                        delay(100);
//*************************************************************************
            pinMode(ledOn, OUTPUT);
                  digitalWrite(3, HIGH);
                        delay(100);
                  digitalWrite(3, LOW);
                        delay(100);
                                                //            2x Repetiçoes
                  digitalWrite(3, HIGH);
                        delay(100);
                  digitalWrite(3, LOW);
                        delay(100);
            pinMode(ledOff, OUTPUT);
                  digitalWrite(2, HIGH);
                        delay(100);
                  digitalWrite(2, LOW);
                        delay(100);
                  digitalWrite(2, HIGH);
                        delay(100);
                  digitalWrite(2, LOW);
                        delay(100);
//*************************************************************************
            pinMode(ledAlertRed, OUTPUT);                //           Vermelho
                  digitalWrite(7,HIGH);
                        delay(100);
                  digitalWrite(7,LOW);
                        delay(100);
                  digitalWrite(7,HIGH);
                        delay(100);
                  digitalWrite(7,LOW);
                        delay(100);
            pinMode(ledAlertBlue, OUTPUT);                //              Azul
                  digitalWrite(6,HIGH);
                        delay(100);
                  digitalWrite(6,LOW);
                        delay(100);
                  digitalWrite(6,HIGH);
                        delay(100);
                  digitalWrite(6,LOW);
                        delay(100);
                              digitalWrite(7,HIGH);    //        V+A = Rosa
                              digitalWrite(6,HIGH);
                                    delay(500);
                              digitalWrite(7,LOW);
                              digitalWrite(6,LOW);
                                    delay(500);
//*************************************************************************
            pinMode(buzzer,OUTPUT);
                  digitalWrite(9,HIGH);
                        delay(100);
                  digitalWrite(9,LOW);
                        delay(100);
                  digitalWrite(9,HIGH);
                        delay(100);
                  digitalWrite(9,LOW);
                        delay(100);
      }
      if (bett == '3') {                         //             Buzzer
                  digitalWrite(buzzer,HIGH);
                        {tone(9,50,700);
                              noTone(8);
                        }

                        delay(1000);
                  digitalWrite(9, LOW);
            }
      if (bett == '4') {                         //       Led vermelho
                  digitalWrite(7, HIGH);
                        delay(1000);
            }
      if (bett == '5') {                         //           Led azul
                  digitalWrite(6,HIGH);
                        delay(1000);
            }
      if (bett == '6') {                         //             Led on
                  digitalWrite(3, LOW);
                        delay(1000);
                  digitalWrite(3, HIGH);
                        delay(1000);
            }
      if (bett == '7') {                         //            Led off
                  digitalWrite(2, LOW);
                        delay(1000);
                  digitalWrite(2, HIGH);
                        delay(1000);
            }
      if (bett == '8') {                         //          Led Button
                  digitalWrite(5, LOW);
                        delay(1000);
            }
      if (bett == '9') {                         //             Led 1°
                  digitalWrite(4, LOW);
                        delay(1000);
                  digitalWrite(4, HIGH);
                        delay(1000);
      }
      */
} // FECHA LOOP