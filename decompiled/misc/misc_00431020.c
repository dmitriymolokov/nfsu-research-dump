/* spd-match: far pct=8.11 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00431020 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0043dd40();
int __cdecl FUN_00461520();
int __cdecl FUN_0053f4b0();
int __cdecl FUN_00540680();
int __cdecl FUN_00567160();
extern int DAT_007361a4;
extern int DAT_00743c70;
extern unsigned char *DAT_00743c74;
extern int DAT_0078a345;
void __fastcall FUN_00431020(int obj, int param_1)

{
  byte *pbVar1;
  undefined4 *puVar2;

  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  
  *(int *)(param_1 + 4) = obj;
  *(int *)(obj + 0x18) = param_1;
  *(int *)(obj + 0x400) = (int)*(char *)(param_1 + 0x22);
  if (*(int *)(obj + 0x24) == 1) {
    FUN_00461520();
  }
  *(undefined4 *)(param_1 + 0x2a0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x29c) = 0xffffffff;
  puVar3 = (undefined4 *)FUN_00567160();
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3[2] = 0;
    puVar3[3] = 0;
  }
  *(undefined4 **)(param_1 + 400) = puVar3;
  pcVar6 = "MARKER_DIRECTION_AID";
  iVar5 = -1;
  uVar4 = 0x4d;
  do {
    iVar5 = iVar5 * 0x21 + uVar4;
    pbVar1 = (byte *)(pcVar6 + 1);
    uVar4 = (uint)*pbVar1;
    pcVar6 = pcVar6 + 1;
  } while (*pbVar1 != 0);
  puVar3[2] = iVar5;
  puVar3[4] = 0;
  puVar3[5] = 0;
  if (iVar5 != 0) {
    *DAT_00743c74 = puVar3;
    puVar2 = puVar3;
    puVar3[1] = DAT_00743c74;
    DAT_00743c74 = puVar2;
    *puVar3 = &DAT_00743c70;
  }
  if (puVar3[2] != 0) {
    FUN_00540680();
    FUN_0053f4b0();
  }
  if ((DAT_0078a345 != '\0') || (DAT_007361a4 != 0)) {
    FUN_0043dd40(param_1);
  }
  return;
}
