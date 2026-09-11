/* spd-match: far pct=46.24 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0056A0D0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0042ac80();
int __cdecl FUN_0056c140();
extern unsigned char *DAT_0073557c;
void __fastcall FUN_0056a0d0(int * obj)

{
  void *_Memory;
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;

  _Memory = (void *)obj[2];
  if (_Memory != (void *)0x0) {
    FUN_0056c140(_Memory);
    _free(_Memory);
    obj[2] = 0;
  }
  puVar1 = (undefined4 *)obj[0x264];
  if (puVar1 != (undefined4 *)0x0) {
    FUN_0042ac80();
    iVar4 = DAT_0073557c;
    iVar2 = *(int *)(DAT_0073557c + 0x18);
    *puVar1 = *(undefined4 *)(DAT_0073557c + 0x10);
    *(int *)(iVar4 + 0x18) = iVar2 + -1;
    *(undefined4 **)(iVar4 + 0x10) = puVar1;
    obj[0x264] = 0;
  }
  iVar2 = *obj;
  piVar3 = (int *)obj[1];
  *piVar3 = iVar2;
  *(int **)(iVar2 + 4) = piVar3;
  return;
}
