/* Decompiled from Speed.exe @ 00626a80 */
/* Module: EAGL */
/* Ghidra DecompileAll */


void __fastcall FUN_00626a80(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (0 < param_1[2]) {
    iVar2 = 0;
    do {
      iVar1 = *(int *)(param_1[3] + iVar2 * 4);
      if (iVar1 != 0) {
        FUN_006269f0();
        (*(code *)PTR_FUN_006dfaa0)(iVar1,8);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_1[2]);
  }
  if (param_1[3] != 0) {
    (*(code *)PTR_FUN_006dfaa0)(param_1[3],param_1[2] << 2);
  }
  iVar2 = 0;
  if (0 < *param_1) {
    do {
      iVar1 = *(int *)(param_1[1] + iVar2 * 4);
      if (iVar1 != 0) {
        iVar3 = *(int *)(iVar1 + 8);
        if (iVar3 == 6) {
LAB_00626aee:
          iVar3 = *(int *)(iVar1 + 0xc);
          if (iVar3 != 0) {
            FUN_00622dd0();
            uVar4 = 0x20;
LAB_00626afe:
            (*(code *)PTR_FUN_006dfaa0)(iVar3,uVar4);
          }
LAB_00626b08:
          *(undefined4 *)(iVar1 + 0xc) = 0;
        }
        else {
          if (iVar3 == 7) {
            iVar3 = *(int *)(iVar1 + 0xc);
            if ((iVar3 != 0) && (iVar3 != -1)) {
              FUN_00622e30();
              uVar4 = 0x14;
              goto LAB_00626afe;
            }
            goto LAB_00626b08;
          }
          if (iVar3 == 8) goto LAB_00626aee;
        }
        (*(code *)PTR_FUN_006dfaa0)(iVar1,0x10);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *param_1);
  }
  if (param_1[1] != 0) {
    (*(code *)PTR_FUN_006dfaa0)(param_1[1],*param_1 << 2);
  }
  return;
}

