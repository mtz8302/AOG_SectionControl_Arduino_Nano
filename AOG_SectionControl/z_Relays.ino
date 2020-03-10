void SetRelays(void)
{
	if (SectNum > 8) {
		for (byte i = 0; i < 8; i++)
		{
			if (bitRead(RelayOUT[0], i) == LOW) {
				digitalWrite(Relay_PIN[i], LOW);
			}
			else {
				digitalWrite(Relay_PIN[i], HIGH);
			}
		}
		for (byte i = 8; i < SectNum; i++)
		{
			if (bitRead(RelayOUT[1], (i - 8)) == LOW) {
				digitalWrite(Relay_PIN[i], LOW);
			}
			else {
				digitalWrite(Relay_PIN[i], HIGH);
			}
		}
	}
	else
	{
		for (byte i = 0; i < SectNum; i++)
		{
			if (bitRead(RelayOUT[0], i) == LOW) {
				digitalWrite(Relay_PIN[i], LOW);
			}
			else {
				digitalWrite(Relay_PIN[i], HIGH);
			}
		}
		//Serial.println(RelayOUT[0]);
	}
}






/*void SetRelays(void)
{ 
	if (bitRead(RelayOUT[0], 0)) bitSet(PORTB, 5); //Digital Pin 13
	else bitClear(PORTB, 5);
	if (bitRead(RelayOUT[0], 1)) bitSet(PORTB, 2); //Digital Pin 10
	else bitClear(PORTB, 2);
	if (bitRead(RelayOUT[0], 2)) bitSet(PORTB, 1); //Digital Pin 9
	else bitClear(PORTB, 1);
	if (bitRead(RelayOUT[0], 3)) bitSet(PORTB, 0); //Digital Pin 8
	else bitClear(PORTB, 0);
	if (bitRead(RelayOUT[0], 4)) bitSet(PORTD, 7); //Digital Pin 7
	else bitClear(PORTD, 7);
	if (bitRead(RelayOUT[0], 5)) bitSet(PORTD, 6); //Digital Pin 6
	else bitClear(PORTD, 6);
	if (bitRead(RelayOUT[0], 6)) bitSet(PORTD, 5); //Digital Pin 5
	else bitClear(PORTD, 5);
}*/
