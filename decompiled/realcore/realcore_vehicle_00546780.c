/* spd-match: far pct=68.93 flags=/O2 /c /nologo /TC method=m39 source=m39/m39/va_00546780 */
#include <windows.h>
extern unsigned char DAT_0073550c;
extern int DAT_00734964;
extern int _DAT_0078ea98;
extern void* DAT_0077b240;
unsigned char __cdecl FUN_00438b10(void);
unsigned char __cdecl FUN_00438b30(void);
unsigned char __cdecl FUN_0043d760(void*);
void FUN_00546780(void) {
  if (DAT_0073550c == 0) return;
  if (FUN_00438b10() && DAT_00734964) FUN_00438b10();
  if (FUN_00438b30() && DAT_00734964) FUN_00438b30();
  if (!FUN_00438b10() && !FUN_00438b30()) return;
  if (DAT_00734964 && FUN_0043d760(DAT_0077b240)) {
    _DAT_0078ea98++;
  }
}
