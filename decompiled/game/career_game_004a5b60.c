/* spd-match: far pct=11.39 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004A5B60 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0041ffe0();
int __cdecl FUN_004f68a0();
int __cdecl FUN_004f6910();
int __cdecl FUN_004f6970();
int __cdecl FUN_004f6b70();
int __cdecl FUN_00674898();
extern int DAT_006cc464;
extern int DAT_006fbf14;
extern unsigned char *DAT_0073619c;
extern int DAT_00777b4c;
void __fastcall FUN_004a5b60(int obj, undefined4 param_1, int param_2)

{

  int iVar1;
  int iVar2;
  int *extraout_EDX;
  int *piVar3;
  float local_4;
  
  if ((*(uint *)(obj + 0x18) & *(uint *)(obj + 0x10)) != 0 ||
      (*(uint *)(obj + 0x1c) & *(uint *)(obj + 0x14)) != 0) {
    iVar2 = *(int *)(param_2 + 4);
    if (((DAT_006fbf14 == 0) && (*(int *)(param_2 + 0x10) == 0)) &&
       (iVar1 = FUN_0041ffe0(), iVar1 != 0)) {
      iVar2 = iVar1;
    }
    if (*(int *)(iVar2 + 0x28) == 1) {
      local_4 = *(float *)(*(int *)(*(int *)(iVar2 + 0x34) + 0x48) + 0x8c);
    }
    else {
      local_4 = 0.0;
    }
    FUN_004f68a0(&DAT_006cc464,(double)local_4);
    iVar2 = FUN_00674898();
    FUN_004f6910(*(undefined4 *)(obj + 0x50));
    if (4 < iVar2) {
      if (((DAT_00777b4c == 1) && (DAT_0073619c != (int *)0x0)) &&
         ((*DAT_0073619c == 4 && (*(char *)(obj + 0x55) == '\x01')))) {
        *(undefined1 *)(obj + 0x55) = 0;
      }
      FUN_004f6970();
      if (*(char *)(obj + 0x54) == '\0') {
        FUN_004f6b70("Blink",1);
        *(undefined1 *)(obj + 0x54) = 1;
      }
    }
    iVar1 = 0;
    if (0 < iVar2) {
      piVar3 = (int *)(obj + 0x24);
      iVar1 = iVar2;
      do {
        if (*piVar3 != 0) {
          FUN_004f6970();
          piVar3 = extraout_EDX;
        }
        piVar3 = piVar3 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
      iVar1 = iVar2;
      if (7 < iVar2) {
        return;
      }
    }
    iVar1 = 8 - iVar1;
    do {
      FUN_004f6910();
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}
