/*
 * Tic-Tac-Toe DIY Soldering Kit by Cyber City Circuits
 * Designed by David Ray - March 2021
 * Programmed by Chris Williamson - April 2021
 * 
 */

#include <Adafruit_MCP23017.h>

int Red_Pins[9] = {17, 15, 13, 11, 9, 7, 5, 3, 0};  //All of the red LED outputs
int Blue_Pins[9] = {16, 14, 12, 10, 8, 6, 4, 1,2}; //All of the blue LED outputs 

int Buttons[9] = {8,9,10,11,12,13,14,15,0}; //All of the button IO locations on the MCP23017
int ArrayData[9] = {0,0,0,0,0,0,0,0,0}; //Array data for the 9 squares

int Turn = 0; //Who's turn is it?

Adafruit_MCP23017 mcp;

void setup() {
  mcp.begin();      // use default address 0x20

  //Set up all IO to either be inputs or outputs
  for(int i = 0; i < 9; i++) {
    pinMode(Red_Pins[i], OUTPUT);
    pinMode(Blue_Pins[i], OUTPUT);
    mcp.pinMode(Buttons[i], INPUT);
    //mcp.pullUp(Buttons[i], HIGH);  // turn on a 100K pullup internally 
  }

  //Do a quick sweep to verify all leds light up
  for(int i = 0; i < 9; i++) {
    digitalWrite(Red_Pins[i], LOW);
    delay(50);
    digitalWrite(Red_Pins[i], HIGH);
    digitalWrite(Blue_Pins[i], LOW);
    delay(50);
    digitalWrite(Blue_Pins[i], HIGH);
  }
}

void loop() {
  CheckButtons();
  CheckPlayer2();
  CheckPlayer1();
}

void CheckButtons() {
  for(int i = 0; i < 9; i++) {
    if(mcp.digitalRead(Buttons[i]) == 0) { //Read the buttons
      if(ArrayData[i] == 0) {              //If the field for this hasn't been taken, assign it to the player
        if(Turn == 0) {                    //If Player 1, then assign it blue
          Turn = 1;
          ArrayData[i] = 1;
          digitalWrite(Blue_Pins[i], LOW);
        } else {
          Turn = 0;                        
          ArrayData[i] = 2;                 //If Player 2, then assign it red
          digitalWrite(Red_Pins[i], LOW);
        }
      }
    }
  }
  delay(10); //We don't want to read the buttons too fast
}


void CheckPlayer1() {
  /*
   *  Grid Layout
   *  8 7 6
   *  5 4 3
   *  2 1 0
   *  
   *  We need to check each row, each column, and each diag for a win scenario
   */

  //Rows
  if(ArrayData[8] == 1 && ArrayData[7] == 1 && ArrayData[6] == 1) {
    GameOver(1, 0);
  }
  if(ArrayData[5] == 1 && ArrayData[4] == 1 && ArrayData[3] == 1) {
    GameOver(1, 1);
  }
  if(ArrayData[2] == 1 && ArrayData[1] == 1 && ArrayData[0] == 1) {
    GameOver(1, 2);
  }

  //Cols
  if(ArrayData[8] == 1 && ArrayData[5] == 1 && ArrayData[2] == 1) {
    GameOver(1, 3);
  }
  if(ArrayData[7] == 1 && ArrayData[4] == 1 && ArrayData[1] == 1) {
    GameOver(1, 4);
  }
  if(ArrayData[6] == 1 && ArrayData[3] == 1 && ArrayData[0] == 1) {
    GameOver(1, 5);
  }

  //Diags
  if(ArrayData[8] == 1 && ArrayData[4] == 1 && ArrayData[0] == 1) {
    GameOver(1, 6);
  }
  if(ArrayData[6] == 1 && ArrayData[4] == 1 && ArrayData[2] == 1) {
    GameOver(1, 7);
  }  
}

void CheckPlayer2() {
  /*
   *  Grid Layout
   *  8 7 6
   *  5 4 3
   *  2 1 0
   *  
   *  We need to check each row, each column, and each diag for a win scenario
   */

  //Rows
  if(ArrayData[8] == 2 && ArrayData[7] == 2 && ArrayData[6] == 2) {
    GameOver(2, 0);
  }
  if(ArrayData[5] == 2 && ArrayData[4] == 2 && ArrayData[3] == 2) {
    GameOver(2, 1);
  }
  if(ArrayData[2] == 2 && ArrayData[1] == 2 && ArrayData[0] == 2) {
    GameOver(2, 2);
  }

  //Cols
  if(ArrayData[8] == 2 && ArrayData[5] == 2 && ArrayData[2] == 2) {
    GameOver(2, 3);
  }
  if(ArrayData[7] == 2 && ArrayData[4] == 2 && ArrayData[1] == 2) {
    GameOver(2, 4);
  }
  if(ArrayData[6] == 2 && ArrayData[3] == 2 && ArrayData[0] == 2) {
    GameOver(2, 5);
  }

  //Diags
  if(ArrayData[8] == 2 && ArrayData[4] == 2 && ArrayData[0] == 2) {
    GameOver(2, 6);
  }
  if(ArrayData[6] == 2 && ArrayData[4] == 2 && ArrayData[2] == 2) {
    GameOver(2, 7);
  }  
}

void GameOver(int Player, int Method) {
  switch (Method) {
    case 0:  //Row 1 Win
      while (true) {
        if(Player == 1) {
          digitalWrite(Blue_Pins[8], LOW);
          digitalWrite(Blue_Pins[7], LOW);
          digitalWrite(Blue_Pins[6], LOW);
        } else {
          digitalWrite(Red_Pins[8], LOW);
          digitalWrite(Red_Pins[7], LOW);
          digitalWrite(Red_Pins[6], LOW);
        } 
        delay(500);
        for(int i = 0; i < 9; i++) {
          digitalWrite(Blue_Pins[i], HIGH);
          digitalWrite(Red_Pins[i], HIGH);
        }
        delay(500);
      }
      break;
    case 1:  //Row 2 Win
      while (true) {
        if(Player == 1) {
          digitalWrite(Blue_Pins[5], LOW);
          digitalWrite(Blue_Pins[4], LOW);
          digitalWrite(Blue_Pins[3], LOW);
        } else {
          digitalWrite(Red_Pins[5], LOW);
          digitalWrite(Red_Pins[4], LOW);
          digitalWrite(Red_Pins[3], LOW);
        } 
        delay(500);
        for(int i = 0; i < 9; i++) {
          digitalWrite(Blue_Pins[i], HIGH);
          digitalWrite(Red_Pins[i], HIGH);
        }
        delay(500);
      }
      break;
    case 2:  //Row 3 Win
      while (true) {
        if(Player == 1) {
          digitalWrite(Blue_Pins[2], LOW);
          digitalWrite(Blue_Pins[1], LOW);
          digitalWrite(Blue_Pins[0], LOW);
        } else {
          digitalWrite(Red_Pins[2], LOW);
          digitalWrite(Red_Pins[1], LOW);
          digitalWrite(Red_Pins[0], LOW);
        } 
        delay(500);
        for(int i = 0; i < 9; i++) {
          digitalWrite(Blue_Pins[i], HIGH);
          digitalWrite(Red_Pins[i], HIGH);
        }
        delay(500);
      }
      break;
    case 3:  //Col 1 Win
      while (true) {
        if(Player == 1) {
          digitalWrite(Blue_Pins[8], LOW);
          digitalWrite(Blue_Pins[5], LOW);
          digitalWrite(Blue_Pins[2], LOW);
        } else {
          digitalWrite(Red_Pins[8], LOW);
          digitalWrite(Red_Pins[5], LOW);
          digitalWrite(Red_Pins[2], LOW);
        } 
        delay(500);
        for(int i = 0; i < 9; i++) {
          digitalWrite(Blue_Pins[i], HIGH);
          digitalWrite(Red_Pins[i], HIGH);
        }
        delay(500);
      }
      break;
    case 4:  //Col 2 Win
      while (true) {
        if(Player == 1) {
          digitalWrite(Blue_Pins[7], LOW);
          digitalWrite(Blue_Pins[4], LOW);
          digitalWrite(Blue_Pins[1], LOW);
        } else {
          digitalWrite(Red_Pins[7], LOW);
          digitalWrite(Red_Pins[4], LOW);
          digitalWrite(Red_Pins[1], LOW);
        } 
        delay(500);
        for(int i = 0; i < 9; i++) {
          digitalWrite(Blue_Pins[i], HIGH);
          digitalWrite(Red_Pins[i], HIGH);
        }
        delay(500);
      }
      break;
    case 5:  //Col 3 Win
      while (true) {
        if(Player == 1) {
          digitalWrite(Blue_Pins[6], LOW);
          digitalWrite(Blue_Pins[3], LOW);
          digitalWrite(Blue_Pins[0], LOW);
        } else {
          digitalWrite(Red_Pins[6], LOW);
          digitalWrite(Red_Pins[3], LOW);
          digitalWrite(Red_Pins[0], LOW);
        } 
        delay(500);
        for(int i = 0; i < 9; i++) {
          digitalWrite(Blue_Pins[i], HIGH);
          digitalWrite(Red_Pins[i], HIGH);
        }
        delay(500);
      }
      break;
    case 6:  //Dia 1 Win
      while (true) {
        if(Player == 1) {
          digitalWrite(Blue_Pins[8], LOW);
          digitalWrite(Blue_Pins[4], LOW);
          digitalWrite(Blue_Pins[0], LOW);
        } else {
          digitalWrite(Red_Pins[8], LOW);
          digitalWrite(Red_Pins[4], LOW);
          digitalWrite(Red_Pins[0], LOW);
        } 
        delay(500);
        for(int i = 0; i < 9; i++) {
          digitalWrite(Blue_Pins[i], HIGH);
          digitalWrite(Red_Pins[i], HIGH);
        }
        delay(500);
      }
      break;
    case 7:  //Dia 2 Win
      while (true) {
        if(Player == 1) {
          digitalWrite(Blue_Pins[6], LOW);
          digitalWrite(Blue_Pins[4], LOW);
          digitalWrite(Blue_Pins[2], LOW);
        } else {
          digitalWrite(Red_Pins[6], LOW);
          digitalWrite(Red_Pins[4], LOW);
          digitalWrite(Red_Pins[2], LOW);
        } 
        delay(500);
        for(int i = 0; i < 9; i++) {
          digitalWrite(Blue_Pins[i], HIGH);
          digitalWrite(Red_Pins[i], HIGH);
        }
        delay(500);
      }
      break;
  }
}
