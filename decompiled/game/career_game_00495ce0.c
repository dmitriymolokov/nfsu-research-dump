/* spd-match: far pct=1.44 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00495CE0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int DAT_006c7a28;
extern int DAT_006c7a38;
extern void LAB_00495d42(void);
extern void LAB_00495d85(void);
extern void LAB_00495dc1(void);
int * __fastcall FUN_00495ce0(int obj, int *param_1)

{
  byte *pbVar1;
  int *piVar2;

  uint uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined *puVar8;
  char *pcVar9;
  int local_4;
  
  if (obj == 0) {
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    return param_1;
  }
  puVar8 = &DAT_006c7a38;
  iVar5 = -1;
  uVar3 = 0x52;
  do {
    iVar5 = iVar5 * 0x21 + uVar3;
    pbVar1 = puVar8 + 1;
    uVar3 = (uint)*pbVar1;
    puVar8 = puVar8 + 1;
  } while (*pbVar1 != 0);
  piVar4 = *(int **)(obj + 0x14);
  iVar7 = (int)*(short *)(obj + 0x1c);
  piVar2 = piVar4;
  if (piVar4 != (int *)0x0) {
    for (; piVar2 < piVar4 + iVar7 * 2; piVar2 = piVar2 + 2) {
      if ((iVar5 == 0) || (*piVar2 == iVar5)) {
        if (piVar2 != (int *)0x0) {
          local_4 = piVar2[1];
          goto LAB_00495d42;
        }
        break;
      }
    }
  }
  local_4 = 0;
LAB_00495d42:
  pcVar9 = "GREEN";
  iVar5 = -1;
  uVar3 = 0x47;
  do {
    iVar5 = iVar5 * 0x21 + uVar3;
    pbVar1 = (byte *)(pcVar9 + 1);
    uVar3 = (uint)*pbVar1;
    pcVar9 = pcVar9 + 1;
  } while (*pbVar1 != 0);
  piVar2 = piVar4;
  if (piVar4 != (int *)0x0) {
    for (; piVar2 < piVar4 + iVar7 * 2; piVar2 = piVar2 + 2) {
      if ((iVar5 == 0) || (*piVar2 == iVar5)) {
        if (piVar2 != (int *)0x0) {
          iVar5 = piVar2[1];
          goto LAB_00495d85;
        }
        break;
      }
    }
  }
  iVar5 = 0;
LAB_00495d85:
  puVar8 = &DAT_006c7a28;
  iVar6 = -1;
  uVar3 = 0x42;
  do {
    iVar6 = iVar6 * 0x21 + uVar3;
    pbVar1 = puVar8 + 1;
    uVar3 = (uint)*pbVar1;
    puVar8 = puVar8 + 1;
  } while (*pbVar1 != 0);
  piVar2 = piVar4 + iVar7 * 2;
  if (piVar4 != (int *)0x0) {
    for (; piVar4 < piVar2; piVar4 = piVar4 + 2) {
      if ((iVar6 == 0) || (*piVar4 == iVar6)) {
        if (piVar4 != (int *)0x0) {
          iVar7 = piVar4[1];
          goto LAB_00495dc1;
        }
        break;
      }
    }
  }
  iVar7 = 0;
LAB_00495dc1:
  *param_1 = iVar7;
  param_1[1] = iVar5;
  param_1[2] = local_4;
  param_1[3] = 0xff;
  return param_1;
}
