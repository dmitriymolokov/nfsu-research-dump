/* Decompiled from Speed.exe @ 006081f6 */
/* Module: EAGL */
/* Ghidra DecompileAll */


undefined4 __thiscall FUN_006081f6(int param_1,int param_2,int param_3,int param_4)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int local_58 [18];
  int local_10;
  int *local_c;
  int *local_8;
  
  piVar6 = local_58;
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar6 = 0x1010101;
    piVar6 = piVar6 + 1;
  }
  if (*(int *)(param_1 + 0x88) != 0) {
    local_c = local_58;
    local_8 = *(int **)(param_1 + 0x144);
    local_10 = *(int *)(param_1 + 0x88);
    do {
      puVar1 = (uint *)*local_8;
      if ((puVar1 != (uint *)0x0) && (uVar5 = *puVar1, uVar5 != 0)) {
        if ((uVar5 & 0xff000000) == 0xe1000000) {
          uVar5 = 0;
        }
        else {
          uVar5 = uVar5 & 0xffffff;
        }
        if (uVar5 < puVar1[1]) {
          iVar4 = *(int *)(param_1 + 0x14);
          piVar6 = (int *)(puVar1[2] + uVar5 * 4);
          iVar3 = puVar1[1] - uVar5;
          do {
            piVar2 = *(int **)(iVar4 + *piVar6 * 4);
            if ((*piVar2 == *(int *)(param_1 + 0x60)) && ((uint)piVar2[3] < 3)) {
              local_58[piVar2[2] + piVar2[3] + piVar2[2] * 2] = 0;
            }
            piVar6 = piVar6 + 1;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
        piVar2 = local_c;
        piVar6 = local_c + 1;
        *local_c = 0;
        *piVar6 = 0;
        piVar2[2] = 0;
      }
      local_8 = local_8 + 1;
      local_c = local_c + 3;
      local_10 = local_10 + -1;
    } while (local_10 != 0);
  }
  iVar4 = 0;
  uVar5 = 0;
  do {
    if (local_58[uVar5] != 0) {
      if (*(int *)(param_3 + (uVar5 / 3) * 4) == 0) {
        iVar3 = FUN_005f74cf(*(undefined4 *)(param_1 + 0x60),uVar5 / 3,uVar5 % 3,0);
        *(int *)(param_2 + iVar4 * 4) = iVar3;
        if (iVar3 == -1) {
          return 0x8007000e;
        }
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x14) + iVar3 * 4) + 0x20) = 0;
        iVar4 = iVar4 + 1;
        if (iVar4 == param_4) {
          return 0;
        }
      }
    }
    uVar5 = uVar5 + 1;
    if (0x11 < uVar5) {
      FUN_005fbec8(param_1,0,0x11a9,"program too complex: out of temporary registers");
      return 0x80004005;
    }
  } while( true );
}

