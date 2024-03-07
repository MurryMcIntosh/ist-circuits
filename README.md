# Setup

SSH into your team’s Pi
Ensure your are part of the gpio group

`$ groups`

If you do not see gpio in the list then run the following command

`$ sudo usermod -aG gpio username`

Create a directory for your project

```
$ mkdir circuit
$ cd circuit
```

Setup circuit with LED
On your breadboard, create a circuit to turn on an LED using jumper wires, a resistor, and an LED
Use jumper wires to hook up a second breadboard and ensure you can get your circuit working on the 2nd breadboard.
Move the 5V jumper wire to one of the numbered GPIO pins, remember which pin number your circuit is using for the program below.

# Modifying led.c

The line of code needed to turn on or off an LED is `gpiod_line_set_value(line, val);`. You will need to modify the program to include a loop that will turn the LED on and off.

You will need to wrap the above line in a `for` loop, and include a few other lines

`for(int i = 0; i < ?; i++)`

`usleep(500000);`

`val = !val;`

In the `for` loop, you will need to edit the middle condition so that the loop runs for as many times as you would like. The `usleep` function takes as it's input the number of *microseconds* to sleep for, so 500000 will sleep for *half of a second*.
