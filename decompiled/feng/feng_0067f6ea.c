/* spd-match: far pct=58.96 flags=/O1 /c /nologo /TC method=m39 source=m39/4.1.G.4-float/va_0067F6EA */
#include <string.h>
#include <windows.h>
extern int __cdecl FUN_00674c30(const char*);
extern int __cdecl FUN_0067f294(int);
extern int __stdcall EnumSystemLocalesA(void*, int);
int __cdecl FUN_0067f3c2();
int DAT_00717e64, DAT_00717e68, DAT_00717e70, DAT_00717e74, DAT_00717e78, DAT_00717e7c;
char* DAT_00717e80;
void FUN_0067f6ea(void) {
  DAT_00717e70 = (strlen(DAT_00717e80) == 3);
  DAT_00717e74 = (strlen(DAT_00717e78) == 3);
  DAT_00717e68 = 0;
  if (DAT_00717e70) DAT_00717e7c = 2;
  else DAT_00717e7c = FUN_0067f294((int)DAT_00717e80);
  EnumSystemLocalesA(FUN_0067f3c2, 1);
  if ((DAT_00717e64 & 0x100) && (DAT_00717e64 & 0x200) && (DAT_00717e64 & 7)) return;
  DAT_00717e64 = 0;
}
