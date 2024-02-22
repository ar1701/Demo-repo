# About
This documentation provides the information about How to Control the robotic arm with inputs of Servo angle given by user and output will be moving respective servo to input angle;

## How to Run:
### Note:
Here, we have used NodeMCU to connect Robotic Arm to Arduino and **Connect all the power source of Servo Motor to 5V Adapter**.

1. Before Uploading Make sure that ESP8266 Board already installed in arduino (If not visit: "https://randomnerdtutorials.com/how-to-install-esp8266-board-arduino-ide/");
2. Select the right Arduino Board ("NodeMCU 1 -O (ESP-12E Module));
3. Then Upload the code "robotic_arm.ino" to node mcu;
4. Enter the required angle in serial monitor.
5. All Set. You can play with the arm now.

## Pinout Table:
| Servo Signal Pin |  NodeMCU Pin |
| ---------------- | --------------|  
|      Servo 1     |       D1      |
|      Servo 2     |       D2      |
|      Servo 3     |       D3      |
|      Servo 4     |       D4      |
|      Servo 5     |       D5      |
|      Servo 6     |       D6      |