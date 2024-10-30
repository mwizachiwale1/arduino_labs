#define BUZZER_PIN 8

// Notes of the melody (C4 to B4)
int melody[] = {
  262, 262, 294, 262, 349, 330, // Happy Birthday to You
  262, 262, 294, 262, 392, 349, // Happy Birthday to You
  262, 262, 523, 440, 349, 330, 294, // Happy Birthday dear [Name]
  466, 466, 440, 349, 392, 349 // Happy Birthday to You
};

// Note durations: 4 = quarter note, 8 = eighth note, etc.
int noteDurations[] = {
  4, 8, 4, 4, 4, 2,
  4, 8, 4, 4, 4, 2,
  4, 8, 4, 4, 4, 4, 2,
  4, 8, 4, 4, 4, 2
};

void setup() {
  // no setup code required
}

void loop() {
  for (int thisNote = 0; thisNote < sizeof(melody) / sizeof(melody[0]); thisNote++) {
    int noteDuration = 1000 / noteDurations[thisNote];
    tone(BUZZER_PIN, melody[thisNote], noteDuration);

    // Pause for the note duration plus 30% to distinguish the notes
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);

    // Stop the tone playing
    noTone(BUZZER_PIN);
  }

  // Delay before repeating the melody
  delay(2000);
}
