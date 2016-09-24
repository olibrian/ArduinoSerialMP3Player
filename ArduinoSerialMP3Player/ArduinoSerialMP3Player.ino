/***********************************************************/
// Serial MP3 Player Catalex (YX5300 chip)
#define Serial3    // Connect the MP3 Serial Player to the Arduino MEGA Serial3 (14 TX3 -> RX, 15 RX3 -> TX)

#include "mp3serial.h"  // Default Arduino MEGA Serial3. Change this file for Arduino UNO suport.



void setup() 
{
  Serial.begin(9600);
  myMP3.begin(9600);
  delay(500);
                                          
  sendCommand(CMD_SEL_DEV, DEV_TF);  
  delay(200);
//  sendCommand(CMD_PLAY_W_VOL, 0X0F28); // Playing a 15 (0x0F) Vol the song num 40 (0x28). 
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
    Serial.println(decodeMP3Answer());
  }
  delay(100);
}

  
 
 



