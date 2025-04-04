#include <kipr/wombat.h>
// The highest position of servo 0 is 1506
// the grab position of a cup for motor 3 is 2
// the grab position of a cup for servo 0 is 168
int main()
{
    enable_servos();
    motor(3, -20);
    msleep(500);
    motor(3, 0);
    set_servo_position(0, 1385);
    msleep(1000); // Moves up the arm to avoid hitting the PVC pipe
    printf("Hello World\n");
    motor(0, 100);
    motor(2, 100);
    msleep(1000); // Drives forward to face the 3 cups
    motor(0, 0);
    msleep(1500); // Turns right to face towards the 3 cups
    motor(2, 0);
    set_servo_position(0, 320);
    msleep(1000); // Drops the arm to grab the cup and stops the motors to prevent the robot from turning
    motor(3, 30);
    msleep(240);
    motor(3, 0); // Opens the arm to prevent the robot from touching the other cups
    motor(0, 100);
    motor(2, 100);
    msleep(4000); // Drives forward to go grab the cups.
    motor(0, 0);
    motor(2, 0); // Stops the robot for a little bit
    motor(3, -30);
    msleep(500);
    motor(3, 0);
    motor(2, 100); // Turns a bit lefty to avoid hitting the PVC pipe
    msleep(100);
    motor(0, -50);
    motor(2, -50);
    msleep(2600); // Drives backward to go drop the cup.
    motor(0, 0);
    motor(2, 0); // Stops the robot to prevent it from moving backward.
    motor(3, 50);
    msleep(400); // Opens the claw to raise up the arm.
    motor(3, 0);
    set_servo_position(0, 720);
    msleep(500);
    motor(2, 100);
    msleep(1500); // Turns right to grab the water part.
    motor(0, 100);
    msleep(750);
    motor(2, 0);
    msleep(1660); // Turns left to grab the water part
    motor(0, 0); // Stops this motor to prevent the robot from turning.
    set_servo_position(0, 103);
    msleep(600);
    motor(0, 100);
    motor(2, 100);
    msleep(1000);
    motor(0, 0);
    motor(2, 0);
    motor(3, -50);
    msleep(80); // Closes the claw to grab the water part
    motor(3, 0);
    motor(0, -100);
    motor(2, -100);
    msleep(2300); // Move backwards to drop the water part into the cup
    motor(0, 0);
    motor(2, 0);
    set_servo_position(0, 823);
    msleep(500);
    motor(0, 100);
    msleep(1000);
    motor(0, -100);
    motor(2, -100);
    msleep(100); // Moves backwards to drop the water part
    motor(0, 0);
    motor(3, 50);
    msleep(300);
    disable_servos();
    return 0;
}
