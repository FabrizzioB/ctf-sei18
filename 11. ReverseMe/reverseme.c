#include<stdio.h>
#include<string.h>

#define HIDE_CHAR(a) (a)+0x50
#define UNHIDE_STRING(str)  do { char * ptr = str ; while (*ptr) *ptr++ -= 0x50; } while(0)
#define HIDE_STRING(str)  do {char * ptr = str ; while (*ptr) *ptr++ += 0x50;} while(0)


int main(int argc, char*argv[]) {
  char password[]={HIDE_CHAR('e'), HIDE_CHAR('U'), HIDE_CHAR('8'), HIDE_CHAR('E'), HIDE_CHAR('c'), HIDE_CHAR('q'), HIDE_CHAR('A'), HIDE_CHAR('F'), HIDE_CHAR('Q'), HIDE_CHAR('f'), '\0'};
 '\0'};
  printf("Password?\n");
  char str[6];
  scanf("%s", str);

  char str1[6];
  memcpy(str1, str, 6);
  UNHIDE_STRING(password);
  int ret = memcmp(str1,password, 5);
  HIDE_STRING(password);

  if (ret==0) {
    UNHIDE_STRING(flag);
    printf("%s\n", flag);
    HIDE_STRING(flag);
  } else {
    printf("OOPS\n");
  }
  return 0;
}