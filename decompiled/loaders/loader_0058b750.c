/* spd-match: far pct=2.68 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0058B750 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00567160();
int __cdecl FUN_0058af10();
int __cdecl FUN_0058c0d0();
int * __fastcall FUN_0058b750(int obj, int param_1)

{
  int *piVar1;
  undefined4 *puVar2;

  int iVar3;
  int *piVar4;
  
  piVar1 = (int *)(param_1 + 0x34);
  piVar4 = (int *)*piVar1;
  while( true ) {
    if (piVar4 == piVar1) {
      iVar3 = FUN_00567160();
      if (iVar3 == 0) {
        piVar4 = (int *)0x0;
      }
      else {
        piVar4 = (int *)FUN_0058af10(obj);
      }
      puVar2 = *(undefined4 **)(param_1 + 0x38);
      *puVar2 = piVar4;
      *(int **)(param_1 + 0x38) = piVar4;
      piVar4[1] = (int)puVar2;
      *piVar4 = (int)piVar1;
      FUN_0058c0d0(param_1,piVar4 + 10,4);
      *(char *)(piVar4 + 2) = (char)piVar4[2] + '\x01';
      return piVar4;
    }
    if (piVar4[5] == *(int *)(obj + 0x490)) break;
    piVar4 = (int *)*piVar4;
  }
  *(char *)(piVar4 + 2) = (char)piVar4[2] + '\x01';
  return piVar4;
}
