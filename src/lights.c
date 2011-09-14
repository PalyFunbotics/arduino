/*

Stuff with lights.

*/

void lighton(int pin) {
	icurrent(pin);
}

void lightoff(int pin) {
	ocurrent(pin);
}

void blink(int pin, float sec) {
	lighton(pin);
	wait(sec);
	lightoff(pin);
}
