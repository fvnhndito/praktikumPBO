#include <stdio.h>

int main() {
  int v0, t, g;
  float y;
  printf("Masukan kecepatan awal (v0): ");
  scanf("%d", &v0);
  printf("Masukan waktu(t): ");
  scanf("%d", &t);
  printf("Masukan percepatan (a): ");
  scanf("%d", &g);

  //menhitung jarak
  y = v0 * t + 0.5 * (g * t * t);

  //menampilkan hasil

  printf("Jarak yang ditempuh : %f meter\n", y);

  return 0;
}