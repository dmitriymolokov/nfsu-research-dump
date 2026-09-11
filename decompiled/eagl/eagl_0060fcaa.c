/* Decompiled from Speed.exe @ 0060fcaa */
/* Module: EAGL */
/* Ghidra DecompileModule */


uint __fastcall FUN_0060fcaa(int param_1)

{
  short sVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int local_28 [9];
  
  uVar3 = 0;
  if (*(int *)(param_1 + 0xec) == 0) {
    local_28[0] = 0;
    local_28[1] = 0;
    local_28[2] = 0;
    local_28[6] = 0;
    local_28[5] = 0;
    local_28[7] = 0;
    local_28[4] = 0;
    local_28[3] = 0;
    local_28[8] = 0;
    if (*(int *)(param_1 + 8) != 0) {
      do {
        piVar2 = *(int **)(*(int *)(param_1 + 0x14) + local_28[8] * 4);
        if ((*(byte *)(*(int *)(*(int *)(param_1 + 0x10) + *piVar2 * 4) + 4) & 0x10) != 0) {
          sVar1 = *(short *)((int)piVar2 + 0x52);
          uVar3 = piVar2[0x14] & 0xffff;
          if (uVar3 == 1) {
            if (sVar1 == 0) {
              iVar4 = piVar2[0x11];
              local_28[piVar2[3]] = 1;
              local_28[4] = iVar4;
            }
          }
          else if (uVar3 == 5) {
            if (((sVar1 == 0) && (piVar2[3] != 0)) && (local_28[5] == 0)) {
              FUN_005fbec8(param_1,piVar2[0x11],0x11bc,"PSIZE must be a scalar");
              local_28[5] = 1;
              goto LAB_0060fd3d;
            }
          }
          else if (((uVar3 == 0xc) && (sVar1 == 0)) && ((piVar2[3] != 0 && (local_28[6] == 0)))) {
            FUN_005fbec8(param_1,piVar2[0x11],0x11bc,"FOG must be a scalar");
            local_28[6] = 1;
LAB_0060fd3d:
            local_28[7] = 1;
          }
        }
        local_28[8] = local_28[8] + 1;
      } while ((uint)local_28[8] < *(uint *)(param_1 + 8));
    }
    iVar4 = 0;
    uVar3 = 0;
    do {
      if (local_28[uVar3] != 0) {
        iVar4 = iVar4 + 1;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 4);
    if (iVar4 != 4) {
      FUN_005fbec8(param_1,local_28[4],0x11bd,
                   "vertex shader must minimally write all four components of POSITION");
      local_28[7] = 1;
    }
    uVar3 = -(uint)(local_28[7] != 0) & 0x80004005;
  }
  return uVar3;
}

