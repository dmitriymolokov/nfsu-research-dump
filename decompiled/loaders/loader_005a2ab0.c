/* Decompiled from Speed.exe @ 005a2ab0 */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 FUN_005a2ab0(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int local_44;
  undefined4 auStack_38 [14];
  
  local_44 = *(int *)(param_1 + 0x589c);
  iVar5 = 0;
  if (0 < local_44) {
    puVar4 = auStack_38;
    param_1 = param_1 + 0x586c;
    do {
      puVar4 = puVar4 + 3;
      if ((iVar5 < 0) || (iVar2 = param_1, local_44 <= iVar5)) {
        iVar2 = 0;
      }
      *puVar4 = *(undefined4 *)(iVar2 + 4);
      puVar4[-1] = iVar5;
      uVar3 = FUN_005a29c0();
      puVar4[1] = uVar3;
      iVar5 = iVar5 + 1;
      param_1 = param_1 + 0xc;
    } while (iVar5 < local_44);
    if (0 < local_44) {
      iVar5 = local_44 + -1;
      do {
        if (0 < iVar5) {
          puVar4 = auStack_38 + 2;
          param_1 = iVar5;
          do {
            if ((int)puVar4[2] < (int)puVar4[5]) {
              uVar3 = *puVar4;
              uVar1 = puVar4[1];
              auStack_38[1] = puVar4[2];
              *puVar4 = puVar4[3];
              puVar4[3] = uVar3;
              puVar4[1] = puVar4[4];
              puVar4[4] = uVar1;
              puVar4[2] = puVar4[5];
              puVar4[5] = auStack_38[1];
            }
            puVar4 = puVar4 + 3;
            param_1 = param_1 + -1;
          } while (param_1 != 0);
        }
        local_44 = local_44 + -1;
      } while (local_44 != 0);
    }
  }
  return auStack_38[param_2 * 3];
}

