#include <stdio.h>

int main(int argc, char *argv[]) {
  char PName[100], TName[2][5]={"High","Low "};
  char DName[7][10]={"Monday   ","Tuesday  ","Wednesday","Thursday ","Friday   ","Saturday ","Sunday   "};
  int d, t, temp[7][2], Max=0, Min=100, SumH=0, SumL=0;
  printf("Enter your name : "); scanf("%s", PName);
  printf("Hello %s\n", PName);
  printf("********************************\n");
  for(d=0;d<7;d++) {
    for(t=0;t<2;t++) {
      printf("Enter %s Temp %s : ", TName[t], DName[d]); scanf("%d", &temp[d][t]);
    }
    if(Max<temp[d][0]) Max=temp[d][0];
    if(Min>temp[d][1]) Min=temp[d][1];
    SumH+=temp[d][0];
    SumL+=temp[d][1];
  }
  printf("********************************\n");
  printf("Max Temperature is %d C\n", Max);
  printf("Min Temperature is %d C\n", Min);
  printf("Average High Temperature is %.2f C\n", SumH/7.0);
  printf("Average Low  Temperature is %.2f C\n", SumL/7.0);
  return(0);
}
