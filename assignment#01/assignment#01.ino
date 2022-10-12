#define DELAY_FOR_DEEP_SLEEP = 10'000

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  switch (state) {
    case 0: {
      initialState();
      break;
    }
    case 1: {
      waitToStart();
      break;
    }
    case 2: {
      runGame();
      break;
    }
    deafult: {

    }
  }
}

void initialState() {
  //setup (POTENTIOMETER)
  TurnOffLeds();
  Serial.Println("Welcome to the Catch the Led Pattern Game. Press Key T1 to Start");
}

void waitToStart() {
  static unsigned long timeWaitingToStart = millis();
  if (millis() - timeWaitingToStart >= DELAY_FOR_DEEP_SLEEP) {
    // TODO
  }
  //PRINT
  blink(RED_LED);
  //deepSleep()
}

void runGame() {
  printPattern();
  guessPattern();
  checkPattern();
}