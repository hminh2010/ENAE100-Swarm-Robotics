#include <kilolib.h>

void setup()
{
    // Put any setup code here. This is run once before entering the loop.
}

void loop()
{
  set_motors(0,0); //ensure motor is off
  set_color(RGB((0, 0, 0)); //ensure LED is off
  set_motors(255, 255); //spinup motors for 15 ms to counteract static friction
  delay(15);
  set_motors(kilo_straight_left, kilo_straight_right); //set motors to forward
  set_color(RGB((0, 1, 0); //set LED to green
  delay(2000); //delay 2000ms
  set_motors(0,0); //ensure motor is off
  set_color(RGB((0, 0, 0)); //ensure LED is off
  set_motors(255, 255); //spinup motors for 15 ms to counteract static friction 
  delay(15);
  set_motors(kilo_turn_left, 0); //set motors to turn left 
  set_color(RGB((1, 0, 0); //set LED to red 
  delay(2000); //delay 2000ms
  set_motors(0,0); //ensure motor is off
  set_color(RGB((0, 0, 0)); //ensure LED is off
  set_motors(255, 255); //spinup motors for 15 ms to counteract static friction
  delay(15);
  set_motors(0, kilo_turn_right); //set motors to turn right
  set_color(RGB((0, 0, 1); //set LED to blue
  delay(2000); //delay 2000ms  
  set_motors(0,0); //ensure motor is off
  set_color(RGB((0, 0, 0)); //ensure LED is off
}
                
int main()
{
    // Initialize the hardware.
    kilo_init();
    // Register the program.
    kilo_start(setup, loop);
    
    return 0;
}
