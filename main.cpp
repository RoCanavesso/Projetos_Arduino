/* 
Link p/ acesso ao projeto do Arduino no TinkerCad: 
https://www.tinkercad.com/things/04LA8EK2aL3?sharecode=jzmtcUXWLpJebgamcXQ21bB0Wu8fepMxR5fFMf1JAfo
*/

// Codigo para o funcionamento do projeto abaixo

int buzzer = 2;
int b1 = 3;
int b2 = 4;
int b3 = 5;
int b4 = 6;
int b5 = 7;
int led = 8;

int c = 0;
int resp = 0;
int v1[24] = {1, 2, 3, 4, 4, 4, 1, 2, 1, 2, 2, 2, 1, 5, 4, 3, 3, 3, 1, 2, 3, 4, 4, 4};

void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  pinMode(5, INPUT);
  pinMode(6, INPUT);
  pinMode(7, INPUT);
  pinMode(8, OUTPUT);
}

void loop()
{
  int v2[24];

  while(c < 24){
    if(digitalRead(3) == 1){
      tone(buzzer, 262);
      delay(800);
      noTone(buzzer);
      c++;
      v2[c] = 1;
    }

    if(digitalRead(4) == 1){
      tone(buzzer, 294);
      delay(800);
      noTone(buzzer);
      c++;
      v2[c] = 2;
    }

    if(digitalRead(5) == 1){
      tone(buzzer, 330);
      delay(800);
      noTone(buzzer);
      c++;
      v2[c] = 3;
    }

    if(digitalRead(6) == 1){
      tone(buzzer, 349);
      delay(800);
      noTone(buzzer);
      c++;
      v2[c] = 4;
    }

    if(digitalRead(7) == 1){
      tone(buzzer, 392);
      delay(800);
      noTone(buzzer);
      c++;
      v2[c] = 5;
    }
  }

  for(int i = 0; i < 24; i++){
    if(v2[i] == v1[i]){
      resp++;
    }
  }

  if(resp == 24){
    digitalWrite(led, 1);
    delay(3000);
    digitalWrite(led, 0);
  }
}