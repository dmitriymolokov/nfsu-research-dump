/* spd-match: far pct=69.30 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0047B810 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0040a880();
int __cdecl FUN_0047b0b0();
int __cdecl FUN_0047b1c0();
extern unsigned char *PTR_FUN_006dfaa0;
void __fastcall FUN_0047b810(undefined4 * obj)

{
  int *_Memory;
  int *piVar1;
  int iVar2;
  int *piVar3;

  int *piVar4;
  
  _Memory = (int *)*obj;
  piVar4 = (int *)FUN_0040a880();
  while (_Memory != piVar4) {
    piVar1 = (int *)*_Memory;
    _Memory[3] = 0;
    if ((void *)_Memory[5] != (void *)0x0) {
      _free((void *)_Memory[5]);
      _Memory[5] = 0;
    }
    _Memory[6] = 0;
    if (_Memory[7] != 0) {
      (*(code *)PTR_FUN_006dfaa0)(_Memory[7],0x40);
      _Memory[7] = 0;
    }
    _Memory[8] = 0;
    FUN_0047b1c0();
    iVar2 = *_Memory;
    piVar3 = (int *)_Memory[1];
    *piVar3 = iVar2;
    *(int **)(iVar2 + 4) = piVar3;
    FUN_0047b0b0(_Memory);
    _free(_Memory);
    _Memory = piVar1;
  }
  return;
}
