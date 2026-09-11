/* spd-match: far pct=11.30 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_005048E0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004ef050();
int __cdecl FUN_004f65d0();
int __cdecl FUN_004f6910();
int __cdecl FUN_004f6970();
int __cdecl FUN_004ffb70();
extern int DAT_0073578c;
extern void LAB_0050492b(void);
extern void LAB_00504977(void);
void __fastcall FUN_005048e0(int val)

{

  int iVar1;
  undefined4 uVar2;
  
  if (val == 0) {
    iVar1 = FUN_004f65d0();
    if (iVar1 != 0) {
      iVar1 = FUN_004ffb70();
      if (iVar1 != 0) goto LAB_00504977;
    }
    if (DAT_0073578c != 0) {
      uVar2 = FUN_004ef050(0xf9095d3c);
      FUN_004f6910(uVar2);
      return;
    }
    iVar1 = 0;
LAB_00504977:
    FUN_004f6910(iVar1);
    return;
  }
  iVar1 = FUN_004f65d0();
  if (iVar1 != 0) {
    iVar1 = FUN_004ffb70();
    if (iVar1 != 0) goto LAB_0050492b;
  }
  if (DAT_0073578c != 0) {
    uVar2 = FUN_004ef050(0xf9095d3c);
    FUN_004f6970(uVar2);
    return;
  }
  iVar1 = 0;
LAB_0050492b:
  FUN_004f6970(iVar1);
  return;
}
