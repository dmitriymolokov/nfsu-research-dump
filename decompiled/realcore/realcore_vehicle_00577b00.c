/* spd-match: far pct=6.23 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_8/p0/buckets/p0_08/attempt3_dat_index */
#include "ghidra_compat.h"

int __cdecl FUN_00577d10();
extern int DAT_007309d0;
extern unsigned char *DAT_007309d4;
extern int DAT_007309d8;
extern void LAB_00685136(void);
void *ExceptionList;

int * 
FUN_00577b00(byte *param_1,int *param_2,byte *param_3,int param_4,undefined1 param_5)

{
  int *piVar1;
  byte *pbVar2;
  byte bVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  char *pcVar9;
  bool bVar10;
  undefined8 uVar11;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00685136;
  local_c = ExceptionList;
  piVar1 = param_2 + 8;
  ExceptionList = &local_c;
  *piVar1 = (int)piVar1;
  param_2[9] = (int)piVar1;
  piVar1 = param_2 + 0xb;
  *piVar1 = (int)piVar1;
  param_2[0xc] = (int)piVar1;
  param_2[3] = (int)param_1;
  bVar3 = *param_1;
  iVar6 = -1;
  local_4 = 1;
  while (bVar3 != 0) {
    iVar6 = iVar6 * 0x21 + (uint)bVar3;
    pbVar2 = param_1 + 1;
    param_1 = param_1 + 1;
    bVar3 = *pbVar2;
  }
  param_2[2] = param_4;
  *(undefined1 *)(param_2 + 6) = param_5;
  param_2[4] = iVar6;
  param_2[10] = 0;
  param_2[7] = 0;
  iVar5 = DAT_007309d0;
  pcVar9 = "WorldEntity";
  iVar8 = -1;
  uVar7 = 0x57;
  do {
    iVar8 = iVar8 * 0x21 + uVar7;
    pbVar2 = (byte *)(pcVar9 + 1);
    uVar7 = (uint)*pbVar2;
    pcVar9 = pcVar9 + 1;
  } while (*pbVar2 != 0);
  if (iVar6 == iVar8) {
    param_2[5] = 0;
  }
  else {
    iVar6 = -1;
    bVar3 = *param_3;
    while (bVar3 != 0) {
      iVar6 = iVar6 * 0x21 + (uint)bVar3;
      pbVar2 = param_3 + 1;
      param_3 = param_3 + 1;
      bVar3 = *pbVar2;
    }
    bVar10 = DAT_007309d0 == 0x55ff33ac;
    param_2[5] = iVar6;
    if (bVar10) {
      uVar11 = FUN_00577d10(iVar6);
      param_2 = (int *)((ulonglong)uVar11 >> 0x20);
      iVar6 = (int)uVar11;
      if (iVar6 != 0) {
        param_2[10] = iVar6;
        puVar4 = *(undefined4 **)(iVar6 + 0x24);
        *puVar4 = param_2;
        *(int **)(iVar6 + 0x24) = param_2;
        param_2[1] = (int)puVar4;
        *param_2 = iVar6 + 0x20;
      }
    }
    else {
      if (iVar5 != 0x55ff33ab) {
        DAT_007309d0 = 0x55ff33ab;
        DAT_007309d4 = 0;
      }
      ((undefined4 *)(unsigned int)(&DAT_007309d8))[(int)(unsigned int)DAT_007309d4] = param_2;
      DAT_007309d4 = DAT_007309d4 + 1;
    }
  }
  ExceptionList = local_c;
  return param_2;
}
