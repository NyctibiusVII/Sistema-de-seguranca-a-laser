#include <SoftwareSerial.h>   //  SoftwareSerial bluetoo(10, 11); // RX, TX

const int buttonPin = 8;                              //              botão
int buttonState = 0;                                  //    estado do botão
//*************************************************************************
int piezoPin=9;                                       //      buzzer sonoro
//*************************************************************************
int ledPisca=7;                                       //       led vermelho
int ledPiscar=6;                                      //           led azul
//*************************************************************************
int ledOn=3;                                          //             ligado
int ledOff=2;                                         //          desligado
//*************************************************************************
int ledBotao=5;
int ledBotao2=4;
//*************************************************************************
char bett;
char parte;
String t = "Alerta de Segurança";
unsigned long delayl = 0;
//#########################################################################
      void setup(){                                   //         abre SETUP
            pinMode(ledBotao, OUTPUT);
            pinMode(ledBotao2, OUTPUT);
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
                                                      //       2 repetiçoes
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
            pinMode(ledPisca, OUTPUT);                //           vermelho
                  digitalWrite(7,HIGH);
                        delay(100);
                  digitalWrite(7,LOW);
                        delay(100);
                  digitalWrite(7,HIGH);
                        delay(100);
                  digitalWrite(7,LOW);
                        delay(100);
            pinMode(ledPiscar, OUTPUT);               //               azul
                  digitalWrite(6,HIGH);
                        delay(100);
                  digitalWrite(6,LOW);
                        delay(100);
                  digitalWrite(6,HIGH);
                        delay(100);
                  digitalWrite(6,LOW);
                        delay(100);
                              digitalWrite(7,HIGH);   //         v/a = rosa
                              digitalWrite(6,HIGH);
                                    delay(500);
                              digitalWrite(7,LOW);
                              digitalWrite(6,LOW);
                                    delay(500);
//*************************************************************************
            pinMode(piezoPin,OUTPUT);                 //          highAudio
                  digitalWrite(9,HIGH);
                        delay(100);
                  digitalWrite(9,LOW);
                        delay(100);
                  digitalWrite(9,HIGH);
                        delay(100);
                  digitalWrite(9,LOW);
                        delay(100);
//*************************************************************************
            Serial.begin(9600);                       //bluetoo.begin(9600)
            Serial.println("Alarme Iniciado!");
                  }                                   //        fecha SETUP
//#########################################################################
      void loop() {                                   //          abre LOOP
            bett = Serial.read();
                               
            digitalWrite(5, HIGH);                    //       luz do botão
            digitalWrite(4, HIGH);                    //      luz do botão2
            int LDR = analogRead (A0);                //             sensor
            Serial.println(LDR);
            buttonState = digitalRead(buttonPin);

            if( bett == '1')  {
                  pinMode(ledBotao, OUTPUT);
                  pinMode(ledBotao2, OUTPUT);
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
                                                      //       2 repetiçoes
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
                  pinMode(ledPisca, OUTPUT);          //           vermelho
                        digitalWrite(7,HIGH);
                              delay(100);
                        digitalWrite(7,LOW);
                              delay(100);
                        digitalWrite(7,HIGH);
                              delay(100);
                        digitalWrite(7,LOW);
                              delay(100);
                  pinMode(ledPiscar, OUTPUT);         //               azul
                        digitalWrite(6,HIGH);
                              delay(100);
                        digitalWrite(6,LOW);
                              delay(100);
                        digitalWrite(6,HIGH);
                              delay(100);
                        digitalWrite(6,LOW);
                              delay(100);
                                    digitalWrite(7,HIGH);//      v/a = rosa
                                    digitalWrite(6,HIGH);
                                          delay(500);
                                    digitalWrite(7,LOW);
                                    digitalWrite(6,LOW);
                                          delay(500);
//*************************************************************************
                  pinMode(piezoPin,OUTPUT);
                        digitalWrite(9,HIGH);
                              delay(100);
                        digitalWrite(9,LOW);
                              delay(100);
                        digitalWrite(9,HIGH);
                              delay(100);
                        digitalWrite(9,LOW);
                              delay(100);
                              }
            if (buttonState == HIGH){                 //   abre botão ativo
                  digitalWrite(3, HIGH);              //             led on
                  digitalWrite(2, LOW);               //            led off
                  if(LDR >=500 )    {                 //        abre if LDR
                        if(Serial.available())  {
                              parte=Serial.read();
                              t += parte;
                              delayl = millis();
                                                }
                        if(((millis() - delayl) > 10) && (t != ""))     {
                              Serial.print(t);
                              t = "";
                              Serial.print("t");
                              Serial.println(t);
                              delay(8000);
                                                                        }
                        {digitalWrite(piezoPin,HIGH);
                              {tone(9,50,700);
                               noTone(8);
                              }
                              {digitalWrite(piezoPin,LOW);
                                    delay(800);
                                    {digitalWrite(piezoPin,HIGH);
                                          {tone(9,2047,800);
                                                noTone(8);
                                          }           //        fecha 2tone
                                    }                 //fecha digitalWriteH
                              }                       //fecha digitalWriteL
//*************************************************************************
                              digitalWrite(ledPisca, HIGH);//      vermelho
                                    delay(300);
                              digitalWrite(ledPisca, LOW);
                                    delay(300);
                              digitalWrite(ledPisca, HIGH);
                                    delay(300);
                              digitalWrite(ledPisca, LOW);
                                    delay(300);
//*************************************************************************
                              digitalWrite(ledPiscar, HIGH);//         azul
                                    delay(300);
                              digitalWrite(ledPiscar, LOW);
                                    delay(300);
                              digitalWrite(ledPiscar, HIGH);
                                    delay(300);
                              digitalWrite(ledPiscar, LOW);
                                    delay(300);
//*************************************************************************
                              digitalWrite(11, HIGH);//            vibrador
                                    delay(50);
                              digitalWrite(11, LOW);
                                    delay(50);
//*************************************************************************
                              Serial.println("VOCÊ ESTÁ SENDO INVADIDO-LIGUE 190 JÁ!!!"); 
                        }                             //fecha digitalWriteH
                                    }                 //       fecha if LDR
                  else  {                             //      abre else LDR
                                                      //           laser ON
                        digitalWrite(9,LOW);          //     desliga alarme
                        digitalWrite(7,LOW);          //deliga led vermelho
                        digitalWrite(6,LOW);          //   desliga led azul
                        }                             //     fecha else LDR
                                    }                 // fecha if btn ativo
            if(buttonState == LOW)  {
                  digitalWrite(2,HIGH);               //        LED OFF(ON)
                  digitalWrite(3,LOW);                //      LED ONN (OFF)
                  digitalWrite(6,LOW);                //       LED AZUL OFF
                  digitalWrite(7, LOW);               //   LED VERMELHO OFF
                  digitalWrite(9,LOW);                //         BUZZER OFF
                  digitalWrite(A0,LOW);               //            LDR OFF
                                    }
            if(bett == '3')   {                       //             buzzer
                  {digitalWrite(piezoPin,HIGH);
                        {tone(9,50,700);
                              noTone(8);
                        }
                  }
                        delay(1000);
                  digitalWrite(9, LOW);
                              }
            if(bett == '5')   {                       //           led azul
                  digitalWrite(6,HIGH); 
                        delay(1000);
                              }
            if(bett == '4')   {                       //       led vermelho
                  digitalWrite(7, HIGH);
                        delay(1000);
                              }
            if(bett == '8')   {                       //          led botao
                  digitalWrite(5, LOW);
                        delay(1000);
                              }
            if(bett == '6')   {                       //             led on
                  digitalWrite(3, LOW);
                        delay(1000);
                  digitalWrite(3, HIGH);
                        delay(1000);
                              }
            if(bett == '7')   {                       //            led off
                  digitalWrite(2, LOW);
                        delay(1000);
                  digitalWrite(2, HIGH);
                        delay(1000);
                              }
            if(bett == '9')   {                       //             led 1°
                  digitalWrite(4, LOW);
                        delay(1000);
                  digitalWrite(4, HIGH);
                        delay(1000);
                              }
                  }                                   //         fecha LOOP