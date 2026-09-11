/* Decompiled from Speed.exe @ 005c5af6 */
/* Module: Loader */
/* Ghidra DecompileAll */


int __fastcall FUN_005c5af6(int param_1)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  void *pvVar5;
  uint uVar6;
  byte *pbVar7;
  bool bVar8;
  undefined4 uVar9;
  char *pcVar10;
  CHAR local_21c [260];
  byte local_118 [260];
  LPSTR local_14;
  undefined4 local_10;
  int local_c;
  byte *local_8;
  
  piVar1 = (int *)(param_1 + 0x60);
  iVar3 = FUN_005b291b(*(uint *)(param_1 + 0x80) | 0xc,piVar1);
  uVar6 = 0;
  if (iVar3 < 0) {
    return iVar3;
  }
  if (*piVar1 == 10) {
    local_c = 0;
  }
  else {
    if (*piVar1 != 0xb) {
      FUN_005c5a21(param_1,"syntax error");
      return -0x7fffbffb;
    }
    local_c = 1;
  }
  local_8 = *(byte **)(param_1 + 0x68);
  if ((*(int *)(param_1 + 0x58) == 0) && (*(int *)(*(int *)(param_1 + 0x54) + 0x18) == 0)) {
    pcVar10 = "include interface required to support #include from resource or memory";
    uVar9 = 0x5e1;
LAB_005c5b8f:
    FUN_005b1f01(param_1 + 4,piVar1,uVar9,pcVar10);
    *(undefined4 *)(param_1 + 0x30) = 1;
    *(undefined4 *)(param_1 + 0x2c) = 1;
    return -0x7fffbffb;
  }
  iVar3 = *(int *)(param_1 + 0x50);
  if (iVar3 != 0) {
    do {
      iVar3 = *(int *)(iVar3 + 0x6c);
      uVar6 = uVar6 + 1;
    } while (iVar3 != 0);
    if (0x1f < uVar6) {
      pcVar10 = "too many nested #includes";
      uVar9 = 0x5e2;
      goto LAB_005c5b8f;
    }
  }
  if (*(int *)(param_1 + 0x58) == 0) {
    GetFullPathNameA((LPCSTR)local_8,0x104,(LPSTR)local_118,&local_14);
    pbVar4 = local_118;
    pbVar7 = local_8;
    do {
      bVar2 = *pbVar7;
      bVar8 = bVar2 < *pbVar4;
      if (bVar2 != *pbVar4) {
LAB_005c5bf1:
        iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
        goto LAB_005c5bf6;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar7[1];
      bVar8 = bVar2 < pbVar4[1];
      if (bVar2 != pbVar4[1]) goto LAB_005c5bf1;
      pbVar7 = pbVar7 + 2;
      pbVar4 = pbVar4 + 2;
    } while (bVar2 != 0);
    iVar3 = 0;
LAB_005c5bf6:
    if (iVar3 != 0) {
      FUN_00673533(local_21c,0x104,&DAT_006cc578,*(undefined4 *)(*(int *)(param_1 + 0x50) + 0x60),
                   local_8);
      GetFullPathNameA(local_21c,0x104,(LPSTR)local_118,&local_14);
    }
    local_8 = local_118;
  }
  iVar3 = *(int *)(param_1 + 0x50);
  if ((iVar3 == 0) || (*(int *)(iVar3 + 0x58) == 0)) {
    local_10 = 0;
  }
  else {
    local_10 = *(undefined4 *)(iVar3 + 100);
  }
  pvVar5 = _malloc(0x70);
  if (pvVar5 == (void *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_005c5250();
  }
  if (iVar3 != 0) {
    local_c = FUN_005c52f4(local_8,0,param_1,param_1 + 4,*(undefined4 *)(param_1 + 0x58),local_c,
                           local_10);
    if (-1 < local_c) {
      *(undefined4 *)(iVar3 + 0x6c) = *(undefined4 *)(param_1 + 0x50);
      *(int *)(param_1 + 0x50) = iVar3;
      return 0;
    }
    *(undefined4 *)(param_1 + 0x30) = 1;
    *(undefined4 *)(param_1 + 0x2c) = 1;
    FUN_005c52d8(1);
    return local_c;
  }
  return -0x7ff8fff2;
}

