/* spd-match: far pct=14.58 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0047BED0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004216b0();
int __cdecl FUN_0047ba30();
extern unsigned char *DAT_00735f64;
extern unsigned char *DAT_0073619c;
extern unsigned char *DAT_007361b4;
extern int DAT_007361c4;
extern int DAT_00777cd0;
extern int DAT_007797c8;
extern int DAT_007797cc;
extern int DAT_007797d0;
extern int DAT_00779950;
extern int DAT_00779954;
extern int DAT_0077995c;
void __fastcall FUN_0047bed0(int obj, int param_1)

{
  int iVar1;

  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar3 = DAT_00779950;
  *(undefined4 *)(obj + 0xe4) = 0xffffffff;
  iVar1 = DAT_00735f64;
  iVar2 = *(int *)(*(int *)(DAT_007361b4 + 4) + 0x1c);
  if (DAT_007361c4 == 2) {
    FUN_0047ba30(DAT_0077995c);
    return;
  }
  if (*(int *)(DAT_0073619c + 0x24) == 1) {
    if (DAT_00777cd0 == 1) {
      FUN_0047ba30(DAT_007797c8);
      return;
    }
    FUN_0047ba30(DAT_00779954);
    return;
  }
  if (param_1 != 0x450) {
    if (DAT_00735f64 != 0) {
      iVar4 = 0xb;
      if (*(char *)(iVar2 + 0xc) == '\x01') {
        iVar4 = 10;
      }
      iVar2 = *(int *)(DAT_00735f64 + iVar4 * 4);
      if (0 < iVar2) {
        iVar2 = FUN_004216b0(iVar2);
        uVar3 = *(undefined4 *)(*(int *)(iVar1 + 0x30 + iVar4 * 4) + iVar2 * 4);
      }
    }
    FUN_0047ba30(uVar3);
    return;
  }
  if (*(char *)(iVar2 + 0xc) == '\x01') {
    FUN_0047ba30(DAT_007797cc);
    return;
  }
  FUN_0047ba30(DAT_007797d0);
  return;
}
