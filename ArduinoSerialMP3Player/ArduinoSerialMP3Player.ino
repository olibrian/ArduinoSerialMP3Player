/***********************************************************/
/* 
 *  Open Source MP3 Player designed for kids
 *  Envoirement: DEV
 */
// Serial MP3 Player Catalex (YX5300 chip)
#define Serial3    // Connect the MP3 Serial Player to the Arduino MEGA Serial3 (14 TX3 -> RX, 15 RX3 -> TX)
#define SWITCH 8
#define debug true


#include "mp3serial.h"  // Default Arduino MEGA Serial3. Change this file for Arduino UNO suport.
#include "mp3addon.h" // Addon for special features :-)


void setup() 
{
  Serial.begin(9600);
  myMP3.begin(9600);
  //myfeature.begin(9600);
  delay(500);
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
    sendCommand(CMD_SEL_DEV, DEV_TF);  //Select Device
=======
    sendCommand(CMD_SEL_DEV, DEV_TF, 0);  //Select Device
>>>>>>> 2ea14e5... Add Folderplay, bugfix, open-smart specific
=======
    sendCommand(CMD_SEL_DEV, DEV_TF, 0);  //Select Device
>>>>>>> 2ea14e5... Add Folderplay, bugfix, open-smart specific
=======
    sendCommand(CMD_SEL_DEV, DEV_TF);  //Select Device
>>>>>>> 68d5497... cosmetic
  delay(200);
    sendCommand(CMD_SET_VOLUME, 0x0f); //Set Standard volume to 15
}

void loop() 
{
 char c=' ';
  
  // If there a char on Serial call sendMP3Command to sendCommand
   if( Serial.available() )
    {
    c = Serial.read();
    sendMP3Command(c);
    }
    
  // Check for the answer.
  if (myMP3.available())
  {
    Serial.println("Answer: "+decodeMP3Answer());
  }

  //Run special features Switch LED on/off
  //if (!digitalRead(SWITCH))
  //{
  //   specialfeature(SWITCH);
  //}
  delay(200);
}

void debug_print(char msg){
  if (debug)
  {
    Serial.println(msg);
  }
}
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
=======
=======
>>>>>>> 2ea14e5... Add Folderplay, bugfix, open-smart specific

  
 
 



>>>>>>> 2ea14e5... Add Folderplay, bugfix, open-smart specific
=======
>>>>>>> 68d5497... cosmetic
