/* spd-match: far pct=8.94 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00574020 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0040a880();
int __cdecl FUN_00567160();
int __cdecl FUN_00573970();
int __cdecl FUN_00574a00();
extern unsigned char *DAT_0073b260;
extern unsigned char *DAT_0073b264;
void __fastcall FUN_00574020(int val, int param_1, undefined4 param_2, undefined4 param_3)

{

  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar5 = val * 0x18c;
  puVar3 = *(undefined4 **)(&DAT_0073b260 + iVar5);
  puVar1 = (undefined4 *)FUN_0040a880();
  for (; (puVar3 != puVar1 && (puVar3[2] != param_1)); puVar3 = (undefined4 *)*puVar3) {
  }
  iVar2 = FUN_00567160();
  if (iVar2 == 0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = (undefined4 *)FUN_00573970(param_3);
  }
  puVar1 = *(undefined4 **)(&DAT_0073b264 + iVar5);
  *puVar1 = puVar3;
  *(undefined4 **)(&DAT_0073b264 + iVar5) = puVar3;
  puVar3[1] = puVar1;
  *puVar3 = &DAT_0073b260 + iVar5;
  uVar4 = FUN_00574a00(puVar3[2]);
  puVar3[3] = uVar4;
  puVar3[7] = 1;
  puVar3[6] = 0;
  return;
}
