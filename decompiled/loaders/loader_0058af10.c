/* spd-match: far pct=2.67 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0058AF10 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int DAT_006ba148;
extern void LAB_0058afb7(void);
void __fastcall FUN_0058af10(int obj, int param_1)

{
  byte *pbVar1;
  int *piVar2;

  uint uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  char *pcVar8;
  
  *(undefined1 *)(obj + 8) = 0;
  *(undefined1 *)(obj + 9) = 0;
  *(undefined1 *)(obj + 10) = 0;
  *(undefined1 *)(obj + 0xb) = 0;
  *(undefined4 *)(obj + 0xc) = 0;
  *(undefined4 *)(obj + 0x10) = 0;
  *(undefined4 *)(obj + 0x14) = 0;
  *(undefined4 *)(obj + 0x18) = 0;
  *(undefined4 *)(obj + 0x1c) = 0;
  *(undefined4 *)(obj + 0x20) = 0;
  *(undefined4 *)(obj + 0x24) = 0;
  *(undefined4 *)(obj + 0x28) = 0;
  *(undefined4 *)(obj + 0x2c) = 0;
  *(undefined4 *)(obj + 0x30) = 0;
  *(undefined4 *)(obj + 0x34) = 0;
  *(undefined4 *)(obj + 0x38) = 0;
  *(undefined4 *)(obj + 0x3c) = 0;
  *(undefined4 *)(obj + 0x40) = 0;
  *(undefined4 *)(obj + 0x44) = 0;
  *(undefined4 *)(obj + 0x48) = 0;
  *(undefined4 *)(obj + 0x4c) = 0;
  *(undefined4 *)(obj + 0x50) = 0;
  *(undefined4 *)(obj + 0x54) = 0;
  *(undefined4 *)(obj + 0x58) = 0;
  *(undefined4 *)(obj + 0x5c) = 0;
  *(undefined4 *)(obj + 0x60) = 0;
  *(undefined4 *)(obj + 100) = 0;
  iVar6 = *(int *)(param_1 + 0x490);
  if (iVar6 == 0) {
    *(undefined1 *)(obj + 9) = 2;
    *(undefined1 *)(obj + 10) = 2;
    *(undefined1 *)(obj + 0xb) = 2;
    return;
  }
  *(int *)(obj + 0x14) = iVar6;
  *(undefined4 *)(obj + 0xc) = *(undefined4 *)(iVar6 + 8);
  piVar4 = *(int **)(iVar6 + 0x14);
  piVar2 = piVar4 + *(short *)(iVar6 + 0x1c) * 2;
  if (piVar4 != (int *)0x0) {
    for (; piVar4 < piVar2; piVar4 = piVar4 + 2) {
      if (*piVar4 == 0x10c98090) {
        if (piVar4 != (int *)0x0) {
          iVar5 = piVar4[1];
          goto LAB_0058afb7;
        }
        break;
      }
    }
  }
  iVar5 = 0;
LAB_0058afb7:
  *(int *)(obj + 0x10) = iVar5;
  pcVar8 = "WHEELS";
  iVar5 = -1;
  uVar3 = 0x57;
  do {
    iVar5 = iVar5 * 0x21 + uVar3;
    pbVar1 = (byte *)(pcVar8 + 1);
    uVar3 = (uint)*pbVar1;
    pcVar8 = pcVar8 + 1;
  } while (*pbVar1 != 0);
  if (*(int *)(iVar6 + 4) == iVar5) {
    *(undefined4 *)(obj + 0x18) = *(undefined4 *)(iVar6 + 0x20);
    *(undefined4 *)(obj + 0x1c) = *(undefined4 *)(iVar6 + 0x24);
    *(undefined4 *)(obj + 0x20) = *(undefined4 *)(iVar6 + 0x28);
    *(undefined4 *)(obj + 0x24) = *(undefined4 *)(iVar6 + 0x2c);
    iVar6 = *(int *)(obj + 0x10);
    if (iVar6 != 0) {
      puVar7 = &DAT_006ba148;
      uVar3 = 0x5f;
      do {
        iVar6 = iVar6 * 0x21 + uVar3;
        pbVar1 = puVar7 + 1;
        uVar3 = (uint)*pbVar1;
        puVar7 = puVar7 + 1;
      } while (*pbVar1 != 0);
      *(int *)(obj + 0x28) = iVar6;
      return;
    }
  }
  else {
    *(undefined1 *)(obj + 9) = 2;
    *(undefined1 *)(obj + 10) = 2;
    *(undefined1 *)(obj + 0xb) = 2;
  }
  return;
}
