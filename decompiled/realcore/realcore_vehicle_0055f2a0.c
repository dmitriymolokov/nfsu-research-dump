/* spd-match: far pct=17.61 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0055F2A0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004f9240();
int __cdecl FUN_00562390();
void __fastcall FUN_0055f2a0(int obj)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  bool bVar4;

  int *piVar5;
  int iVar6;
  
  if (0 < *(int *)(obj + 0x84)) {
    iVar6 = 1;
    do {
      piVar5 = _malloc(0x14);
      if (piVar5 == (int *)0x0) {
        piVar5 = (int *)0x0;
      }
      else {
        piVar1 = piVar5 + 2;
        *piVar1 = (int)piVar1;
        piVar5[3] = (int)piVar1;
        piVar5[4] = 0;
      }
      puVar2 = *(undefined4 **)(obj + 0x60);
      *puVar2 = piVar5;
      *(int **)(obj + 0x60) = piVar5;
      piVar5[1] = (int)puVar2;
      *piVar5 = obj + 0x5c;
      if (*(int *)(obj + 0x74) == 0) {
        *(undefined4 *)(obj + 0x74) = *(undefined4 *)(obj + 0x5c);
      }
      uVar3 = *(undefined4 *)(obj + 0x60);
      FUN_00562390(obj,uVar3);
      FUN_00562390(obj,uVar3);
      FUN_00562390(obj,uVar3);
      FUN_00562390(obj,uVar3);
      FUN_00562390(obj,uVar3);
      FUN_00562390(obj,uVar3);
      bVar4 = iVar6 < *(int *)(obj + 0x84);
      iVar6 = iVar6 + 1;
    } while (bVar4);
  }
  FUN_004f9240(obj + 0x5c);
  return;
}
