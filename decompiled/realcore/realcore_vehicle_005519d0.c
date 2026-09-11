/* spd-match: far pct=16.15 flags=/O2 /c /nologo /TC method=m39 source=m39/m39/va_005519D0 */
#include "ghidra_compat.h"
extern int __cdecl FUN_004f3f90(void*);
extern int __cdecl FUN_004f63e0(int);
extern int __cdecl FUN_004f65d0(void);
extern int __cdecl FUN_0054a700(void*);
extern int __cdecl FUN_0059fb30(int);
extern int __cdecl FUN_00666f30(int, int);
extern char DAT_00734718;
extern int DAT_00746104;
extern int DAT_00777b54;
extern int DAT_00777b58;
extern char DAT_00777c90;
extern char DAT_00777c91;
void __fastcall FUN_005519d0(int obj, int param_1) {
  int i, val, *ptr;
  char buf[128];
  ptr = (int*)(*(int*)(param_1 + 0x7a0));
  val = ptr[obj + 13];
  if (*(char*)(val + 0x24)) {
    FUN_0059fb30(0x80);
    i = 0;
    while(buf[i] && (&DAT_00734718)[i] && (buf[i] == (&DAT_00734718)[i])) i++;
    if (buf[i] != (&DAT_00734718)[i]) {
      if (*(int*)(param_1 + 0x6c) == 0) {
        DAT_00777c90 = buf[0];
        i = 0;
        while (buf[i+1]) { (&DAT_00777c91)[i] = buf[i+1]; i++; }
        DAT_00777b54 = 0; DAT_00777b58 = 2;
        if (!FUN_004f3f90(&DAT_00746104)) FUN_004f63e0(3);
      }
    }
  }
}
