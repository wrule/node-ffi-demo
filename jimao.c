#include <stdio.h>

int numinc(int num) {
  printf("get number: %d\n", num);
  return num + 1;
}

void test() {}

void runloop() {
  for(int i = 0; i < 1000; ++i) {
    for (int j = 0; j < 1000; ++j) {}
  }
}

int main() {
  printf("开始\n");
  for (int i = 0; i < 500000000; ++i) {
    test();
  }
  printf("结束\n");
  return 0;
}