/* spd-match: far pct=4.33 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_8/p1/buckets/p1_02/attempt04_cdecl_repaired */
#include "ghidra_compat.h"

int __cdecl FUN_005a8570();
int __cdecl FUN_005a8640();
extern int _DAT_006cc7bc;
extern int _DAT_006ccaf0;
int unaff_EDI;

undefined4 FUN_005aa510(int *param_1,int *param_2,int *param_3,undefined4 param_4)

{
  byte *pbVar1;
  char cVar2;
  short sVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  uint *puVar7;
  int iVar8;
  char *pcVar9;
  int unaff_EDI;
  int iVar10;
  int iVar11;
  float fStack_6c;
  undefined1 *puStack_68;
  uint uStack_64;
  int iStack_60;
  int *piStack_5c;
  char *pcStack_58;
  undefined1 *puStack_54;
  char *pcStack_50;
  undefined4 uStack_4c;
  undefined1 auStack_38 [12];
  undefined1 auStack_2c [12];
  undefined1 local_20 [28];
  
  piStack_5c = *(int **)(*param_1 + 0x18);
  uStack_4c = 0;
  pcStack_50 = (char *)0x0;
  puStack_54 = local_20;
  pcStack_58 = (char *)0x0;
  iStack_60 = 0x5aa535;
  (**(code **)(*piStack_5c + 0x4c))();
  puVar7 = (uint *)param_1[0x1d];
  iStack_60 = 0;
  uStack_64 = 0;
  puStack_68 = auStack_2c;
  fStack_6c = 0.0;
  (**(code **)(**(int **)(*param_2 + 0x18) + 0x4c))(*(int **)(*param_2 + 0x18));
  iStack_60 = param_2[0x1d];
  (**(code **)(**(int **)(*param_3 + 0x18) + 0x4c))(*(int **)(*param_3 + 0x18),0,auStack_38,0);
  iVar11 = param_3[0x1d];
  iVar10 = 0;
  do {
    iVar8 = 0;
    puStack_68 = (undefined1 *)(uintptr_t)(int)((float)iVar10 * _DAT_006ccaf0);
    fStack_6c = *(float *)_DAT_006cc7bc - (float)(uintptr_t)puStack_68;
    do {
      uVar4 = *(uint *)(iVar8 * 4);
      uStack_64 = uVar4;
      iStack_60 = FUN_005a8570(uVar4,param_4);
      uVar5 = FUN_005a8640(&uStack_64,&fStack_6c,2,0);
      *puVar7 = (uVar5 ^ uVar4) & 0xffffff ^ uVar4;
      iVar8 = iVar8 + 1;
      puVar7 = puVar7 + 1;
    } while (iVar8 < 0x10);
    iVar10 = iVar10 + 1;
  } while (iVar10 < 0x10);
  sVar3 = *(short *)((int)param_1 + 0x46);
  iVar10 = param_1[0x11];
  if (pcStack_58 < pcStack_58 + (int)sVar3 * (int)(short)iVar10) {
    pcVar6 = pcStack_50;
    pcVar9 = pcStack_58;
    do {
      pbVar1 = (byte *)(pcVar6 + (unaff_EDI - (int)pcStack_50));
      cVar2 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      *pcVar9 = (char)(*(uint *)(iVar11 + (uint)*pbVar1 * 4) >> 4) * '\x10' + cVar2;
      pcVar9 = pcVar9 + 1;
    } while (pcVar9 < pcStack_58 + (int)sVar3 * (int)(short)iVar10);
  }
  (**(code **)(**(int **)(*param_3 + 0x18) + 0x50))(*(int **)(*param_3 + 0x18),0);
  (**(code **)(**(int **)(*param_2 + 0x18) + 0x50))(*(int **)(*param_2 + 0x18),0);
  (**(code **)(**(int **)(*param_1 + 0x18) + 0x50))(*(int **)(*param_1 + 0x18),0);
  return 1;
}
