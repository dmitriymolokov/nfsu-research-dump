/* Decompiled from Speed.exe @ 004a3930 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_004a3930(int param_1,int param_2)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_c;
  int local_8;
  
  iVar8 = *(int *)(param_2 + 4);
  if (((DAT_006fbf14 == 0) && (*(int *)(param_2 + 0x10) == 0)) &&
     (iVar4 = FUN_0041ffe0(), iVar4 != 0)) {
    iVar8 = iVar4;
  }
  iVar8 = *(int *)(iVar8 + 0x1c);
  if (iVar8 != 0) {
    iVar4 = *(int *)(DAT_0073619c + 0x24);
    if (0 < iVar4) {
      local_8 = 1;
      iVar9 = param_1 + 0x2c;
      local_c = 0x520;
      iVar7 = DAT_0073619c;
      do {
        if (((local_8 <= iVar4) && (piVar1 = *(int **)(local_c + iVar7), piVar1 != (int *)0x0)) &&
           ((iVar4 = *piVar1, iVar4 != 0 && (*(int *)(iVar4 + 0xc) != 0)))) {
          *(int *)(iVar9 + -0xc) = local_8;
          uVar5 = FUN_004c2a50();
          *(undefined4 *)(iVar9 + 0x20) = uVar5;
          cVar3 = FUN_0043a2e0();
          if (cVar3 == '\0') {
            iVar4 = *(int *)(iVar4 + 0x14);
            if ((*(int *)(iVar4 + 4) == 1) && (*(char *)(iVar4 + 0x734) == '\0')) {
              puVar6 = &DAT_007588c4 + *(int *)(param_2 + 0x10) * 0xf944;
            }
            else {
              puVar6 = (undefined1 *)(iVar4 + 0x73c);
            }
LAB_004a3a2b:
            FUN_004f68c0(0x20,puVar6);
          }
          else {
            iVar4 = FUN_0043b850((int)*(short *)(iVar4 + 10));
            if (iVar4 != 0) {
              puVar6 = (undefined1 *)(iVar4 + 0x19);
              goto LAB_004a3a2b;
            }
          }
          iVar7 = DAT_0073619c;
          if ((short)piVar1[4] == 0) {
            FUN_004353e0(iVar9 + -4,piVar1,iVar8);
          }
          else {
            *(undefined4 *)(iVar9 + -4) = 0;
          }
        }
        iVar4 = *(int *)(iVar7 + 0x24);
        local_c = local_c + 4;
        iVar9 = iVar9 + 0x30;
        bVar2 = local_8 < iVar4;
        local_8 = local_8 + 1;
      } while (bVar2);
    }
    FUN_004a3aa0(param_1);
  }
  return;
}

