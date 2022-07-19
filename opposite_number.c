/*
Very simple, given an integer or a floating-point number, find its opposite.

Examples:
1: -1
14: -14
-34: 34
*/

float opposite(float num) {
  return (num > 0) ? num - (2 * num) : num + (-2 * num);
}

// OTHER SOLUTION
float opposite(float num) {
   return -num;
}

float opposite(float num) {
   return num * -1;
}

