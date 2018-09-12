#include"robomodule_due_CAN.h"
CRobomodule_due_CAN can;
int lightswitchleft = 12;
int lightswitchright = 13;
int valueleft;
int valueright;
void setup() {
      can.initdriver(CAN_BPS_1000K, 0, 0, 1);
  // put your main code here, to run repeatedly:
    //valueleft = digitalRead(lightswitchleft);
    //valueright = digitalRead(lightswitchright);
      can.speedwheel(4060, 0, 1);
      can.speedwheel(4060, 0, 3);
      can.speedwheel(4000, 0, 2);
      can.speedwheel(4000, 0, 4);
  // put your setup code here, to run once:
}

void loop() {

}
