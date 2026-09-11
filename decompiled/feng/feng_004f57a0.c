/* spd-match: far pct=13.71 flags=/O1 /c /nologo /TC method=m39 source=m39/4.1.G.1-filter100/va_004F57A0 */
#include <stdio.h>
#include <string.h>
extern int __cdecl FUN_004f68c0(void*, const char*, ...);
extern void* __cdecl FUN_00671541(const char*, const char*);
extern int DAT_006b9172; extern int DAT_006c16ac; extern char DAT_0070108f; extern int DAT_006c1cdc; extern int DAT_006c1cec;
void __cdecl FUN_004f57a0(void* param_1) {
  char buf[64];
  void* f;
  FUN_004f68c0(buf, "%sMOVIES\\%s%s", &DAT_006c1cec, param_1, &DAT_006b9172, &DAT_006c1cdc);
  f = FUN_00671541(buf, &DAT_006c16ac);
  if (f) fclose((FILE*)f);
  else if (DAT_0070108f) {
    buf[0] = DAT_0070108f; buf[1] = ':'; buf[2] = '\\'; buf[3] = 0;
    strcat(buf, (char*)param_1);
    f = FUN_00671541(buf, &DAT_006c16ac);
    if (f) fclose((FILE*)f);
  }
}
