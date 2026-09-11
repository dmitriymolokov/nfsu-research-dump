/* spd-match: far pct=5.22 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0058B580 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00567160();
int __cdecl FUN_0058adb0();
int __cdecl FUN_0058b050();
int __cdecl FUN_0058c220();
int __cdecl FUN_0058c2c0();
int * __fastcall FUN_0058b580(undefined4 val, int param_1)

{
  undefined4 *puVar1;

  int *piVar2;
  int iVar3;
  int *piVar4;
  
  piVar2 = (int *)FUN_0058c2c0(val);
  if (piVar2 == (int *)0x0) {
    iVar3 = FUN_00567160();
    if (iVar3 == 0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = (int *)FUN_0058b050(iVar3,*(undefined4 *)(param_1 + 0xc),
                                   *(undefined4 *)(param_1 + 0x10));
    }
    puVar1 = *(undefined4 **)(param_1 + 0x48);
    *puVar1 = piVar2;
    *(int **)(param_1 + 0x48) = piVar2;
    *piVar2 = param_1 + 0x44;
    piVar2[1] = (int)puVar1;
    piVar4 = (int *)FUN_0058c220(param_1);
    if (piVar4 == (int *)0x0) {
      iVar3 = FUN_00567160();
      if (iVar3 == 0) {
        piVar4 = (int *)0x0;
      }
      else {
        piVar4 = (int *)FUN_0058adb0();
      }
      puVar1 = *(undefined4 **)(param_1 + 0x20);
      *puVar1 = piVar4;
      *(int **)(param_1 + 0x20) = piVar4;
      piVar4[1] = (int)puVar1;
      *piVar4 = param_1 + 0x1c;
    }
    *(short *)(piVar4 + 0x16) = (short)piVar4[0x16] + 1;
    piVar2[4] = (int)piVar4;
  }
  *(char *)(piVar2 + 3) = (char)piVar2[3] + '\x01';
  return piVar2;
}
