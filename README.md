# Arduino Assignment 1 — Smart Countdown

My submission for Assignment 1 in the **Programming C++ for Engineers Using Arduino** course (Computer Engineering, Group A).

## What this program does

It counts down from 5 to 1 using a `while` loop. On each step it:

- prints `Count: N` to the Serial Monitor, and
- blinks the on-board LED `N` times using a function called `flashLED()`.

When the countdown finishes, it prints `=== Countdown Complete ===`.

Expected Serial Monitor output (at 9600 baud):

```
=== Smart Countdown Starting ===
Count: 5
Count: 4
Count: 3
Count: 2
Count: 1
=== Countdown Complete ===
```

Expected LED behaviour: blinks 5 times, then 4, then 3, then 2, then 1.

## Concepts demonstrated

- Variables (`int`)
- Functions with parameters (`flashLED(int times)`)
- The `while` loop (with a counter that decrements to avoid an infinite loop)
- Digital output (`pinMode`, `digitalWrite`)
- The Serial Monitor (`Serial.begin`, `Serial.print`, `Serial.println`)

## How to run it

1. Open `Smart_Countdown/Smart_Countdown.ino` in the Arduino IDE.
2. Connect an Arduino Uno via USB.
3. Select **Tools → Board → Arduino Uno** and the correct **Port**.
4. Click **Upload**, then open **Tools → Serial Monitor** at **9600 baud**.

## Author

Emmanuel Kwasi Sarkodie 

Bsc Computer Engineering - LV100, Group A.

Index Number 2526400621
