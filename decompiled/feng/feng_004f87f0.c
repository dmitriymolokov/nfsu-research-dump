/* spd-match: far pct=7.88 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004F87F0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004ef050();
int __cdecl FUN_004f65d0();
int __cdecl FUN_004f6910();
int __cdecl FUN_004f6970();
int __cdecl FUN_004fd230();
int __cdecl FUN_004ffb70();
extern int DAT_0073578c;
extern void LAB_004f8840(void);
void __fastcall FUN_004f87f0(int obj)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;

  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = 0;
  bVar3 = true;
  bVar2 = true;
  for (piVar1 = *(int **)(obj + 4);
      (piVar1 != (int *)(obj + 4) && (iVar6 = iVar6 + 1, piVar1 != (int *)0x0));
      piVar1 = (int *)*piVar1) {
  }
  if (iVar6 < 2) {
    bVar2 = false;
  }
  else {
    if (*(int *)(obj + 0xc) == *(int *)(obj + 8)) {
      bVar2 = false;
      bVar3 = true;
      goto LAB_004f8840;
    }
    if (*(int *)(obj + 0xc) != *(int *)(obj + 4)) goto LAB_004f8840;
    bVar2 = true;
  }
  bVar3 = false;
LAB_004f8840:
  uVar4 = FUN_004fd230();
  iVar6 = FUN_004f65d0();
  if ((iVar6 == 0) || (iVar6 = FUN_004ffb70(), iVar6 == 0)) {
    if (DAT_0073578c == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = FUN_004ef050(uVar4);
    }
  }
  uVar4 = FUN_004fd230();
  iVar5 = FUN_004f65d0();
  if ((iVar5 == 0) || (iVar5 = FUN_004ffb70(), iVar5 == 0)) {
    if (DAT_0073578c == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_004ef050(uVar4);
    }
  }
  if (bVar2) {
    FUN_004f6970();
  }
  else {
    FUN_004f6910(iVar5);
  }
  if (bVar3) {
    FUN_004f6970();
    return;
  }
  FUN_004f6910(iVar6);
  return;
}
