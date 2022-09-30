String arrivingdatabyte;  
void setup( )  
{  
Serial.begin(9600);  
}  
void loop( )  
{  
if(Serial.available( ) > 0) 
 {  
 arrivingdatabyte = Serial.readStringUntil( '\n');
 Serial.println(arrivingdatabyte);  
}
