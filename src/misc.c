/*

Miscellaneous functions.

*/

/*
Sends current (I)
*/
void icurrent(int pin) {
  printf("ON %d\n", pin);
}

/*
Cuts off current (O)
*/
void ocurrent(int pin) {
  printf("OFF %d\n", pin);
}

/*
Waits for a certain period of time
*/
void wait(float sec) {
  printf("WAIT %f\n", sec);
}
