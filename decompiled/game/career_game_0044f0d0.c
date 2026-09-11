/* spd-match: far pct=8.85 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0044F0D0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00456e90();
int __cdecl FUN_00458f10();
int __cdecl FUN_0045cff0();
extern int DAT_007006ec;
undefined4 __fastcall FUN_0044f0d0(int * obj)

{

  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_1d0 [105];
  undefined4 local_2c;
  undefined4 local_28;
  
  iVar2 = obj[0xea];
  local_2c = 0;
  local_28 = 0;
  puVar4 = local_1d0;
  for (iVar3 = 0x70; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  FUN_00458f10(0,0);
  if ((*(int *)(iVar2 + 4) != 0) && (obj[1] != 0)) {
    uVar1 = FUN_0045cff0(local_1d0,obj,DAT_007006ec);
    return uVar1;
  }
  iVar2 = *obj;
  uVar1 = (**(code **)(**(int **)(iVar2 + 0x2c) + 0x40))(0xff,0xff);
  iVar2 = FUN_00456e90(iVar2,uVar1);
  if (iVar2 != -1) {
    obj[0xe5] = iVar2;
    obj[0xe7] = 0;
    *(undefined1 *)(obj + 0xe9) = 0;
    obj[0xe8] = 0;
    obj[0xe6] = 1;
    return 1;
  }
  return 0xffffff00;
}
