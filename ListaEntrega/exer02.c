#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main (void)
{ float PecaMes [3][3];
  float GranaPeca [3][2];
  float GranaMes [3][2];
  int i, j;

  printf("P1, P2 e P3 (Janeiro, Fevereiro e Março): \n");
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
        scanf("%f", &PecaMes[i][j]);
    }
  }
  printf("Digite custo e lucro: \n");
  for (i = 0; i < 3; i++)
  {
      for (j = 0; j < 2; j++)
      {
          scanf("%f", &GranaPeca[i][j]);
      }
  }
  for (i = 0; i < 3; i++)
  {
    GranaMes[i][0] = PecaMes[i][0] * GranaPeca[0][0] + PecaMes[i][1] * GranaPeca[1][0] + PecaMes[i][2] * GranaPeca[2][0];
    GranaMes[i][1] = PecaMes[i][0] * GranaPeca[0][1] + PecaMes[i][1] * GranaPeca[1][1] + PecaMes[i][2] * GranaPeca[2][1];
  }
  printf("GranaMes: \n");
  for (i = 0; i < 3; i++)
  {
      printf("%.0f %.0f\n", GranaMes[i][0], GranaMes[i][1]);
  }
  return 0;
}