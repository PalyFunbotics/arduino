#include <stdio.h>
#include "src/proto.h"
#include "src/misc.c"
#include "src/lights.c"
#include "src/motion.c"

int main() {
  Forward(2.0);
  wait(3.0);
  blink(4, 3.0);
  return 0;
}
