/* Decompiled from Speed.exe @ 004f0b00 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004f0b00(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  
  puVar2 = (undefined4 *)0x0;
  if (*(int *)(param_1 + 0x411c) != 0) {
    puVar2 = (undefined4 *)FUN_004ee670();
  }
joined_r0x004f0b22:
  if (puVar2 == (undefined4 *)0x0) {
    return;
  }
  if (*(char *)(param_1 + 0x5251) != '\0') {
    (**(code **)(**(int **)(param_1 + 0x10c) + 0x58))
              (puVar2[6],puVar2[4],puVar2[3],puVar2[5],puVar2[7]);
  }
  uVar3 = puVar2[4];
  if (uVar3 < 0xfffffffd) {
    if (uVar3 == 0xfffffffc) {
      iVar6 = *(int *)(param_1 + 0xe4);
      if (iVar6 != 0) {
        do {
          if (iVar6 == puVar2[5]) {
            if (iVar6 != 0) {
              iVar1 = *(int *)(iVar6 + 0x50);
              goto joined_r0x004f0d3b;
            }
            break;
          }
          iVar6 = *(int *)(iVar6 + 4);
        } while (iVar6 != 0);
      }
    }
    else if (uVar3 == 0) {
      for (iVar6 = *(int *)(param_1 + 0xe4); iVar6 != 0; iVar6 = *(int *)(iVar6 + 4)) {
        for (iVar1 = *(int *)(iVar6 + 0x50); iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
          if (*(int *)(iVar1 + 0xc) == puVar2[6]) {
            if (iVar1 != 0) {
              FUN_004f1040(param_1,iVar1,0,iVar6,puVar2[7]);
            }
            break;
          }
        }
        uVar3 = 0;
        if (*(uint *)(iVar6 + 0x60) != 0) {
          piVar4 = *(int **)(iVar6 + 100);
          do {
            if (*piVar4 == puVar2[6]) {
              piVar4 = *(int **)(iVar6 + 100) + uVar3 * 4;
              if ((piVar4 != (int *)0x0) && (uVar3 = piVar4[2], uVar3 != 0)) {
                uVar5 = 0;
                do {
                  FUN_004f0fd0(param_1,iVar6,puVar2[7]);
                  uVar5 = uVar5 + 1;
                } while (uVar5 < uVar3);
              }
              break;
            }
            uVar3 = uVar3 + 1;
            piVar4 = piVar4 + 4;
          } while (uVar3 < *(uint *)(iVar6 + 0x60));
        }
      }
    }
    else if (uVar3 == 0xfffffffa) {
      if (puVar2[6] == 0x59bed120) {
        *(undefined1 *)(param_1 + 1) = 1;
      }
      else if (puVar2[6] == 0x5d4ce32d) {
        *(undefined1 *)(param_1 + 1) = 0;
      }
    }
    else {
      if (uVar3 != 0xfffffffb) goto LAB_004f0de3;
      (**(code **)(**(int **)(param_1 + 0x10c) + 0x1c))(puVar2[6],puVar2[3],puVar2[7],puVar2[5]);
    }
  }
  else if (uVar3 == 0xfffffffd) {
    for (iVar6 = *(int *)(puVar2[5] + 0x50); iVar6 != 0; iVar6 = *(int *)(iVar6 + 4)) {
      if (*(int *)(iVar6 + 0xc) == puVar2[6]) {
        if (iVar6 != 0) {
          FUN_004f1040(param_1,iVar6,0,puVar2[5],puVar2[7]);
        }
        break;
      }
    }
  }
  else if (uVar3 == 0xfffffffe) {
    for (iVar6 = *(int *)(param_1 + 0xe4); iVar6 != 0; iVar6 = *(int *)(iVar6 + 4)) {
      for (iVar1 = *(int *)(iVar6 + 0x50); iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
        if (*(int *)(iVar1 + 0xc) == puVar2[6]) {
          if (iVar1 != 0) {
            FUN_004f1040(param_1,iVar1,0,iVar6,puVar2[7]);
          }
          break;
        }
      }
    }
  }
  else if (uVar3 == 0xffffffff) {
    (**(code **)(**(int **)(param_1 + 0x10c) + 0x18))(puVar2[6],puVar2[3],puVar2[7],puVar2[5]);
  }
  else {
LAB_004f0de3:
    FUN_004f0fd0(param_1,puVar2[5],puVar2[7]);
  }
  goto LAB_004f0c8d;
joined_r0x004f0d3b:
  if (iVar1 == 0) goto LAB_004f0d5d;
  if (*(int *)(iVar1 + 0xc) == puVar2[6]) {
    if (iVar1 != 0) {
      FUN_004f1040(param_1,iVar1,0,iVar6,puVar2[7]);
    }
    goto LAB_004f0d5d;
  }
  iVar1 = *(int *)(iVar1 + 4);
  goto joined_r0x004f0d3b;
LAB_004f0d5d:
  uVar3 = 0;
  if (*(uint *)(iVar6 + 0x60) != 0) {
    piVar4 = *(int **)(iVar6 + 100);
    do {
      if (*piVar4 == puVar2[6]) {
        piVar4 = *(int **)(iVar6 + 100) + uVar3 * 4;
        if (piVar4 != (int *)0x0) {
          uVar3 = piVar4[2];
          uVar5 = 0;
          if (uVar3 != 0) {
            do {
              FUN_004f0fd0(param_1,iVar6,puVar2[7]);
              uVar5 = uVar5 + 1;
            } while (uVar5 < uVar3);
          }
        }
        break;
      }
      uVar3 = uVar3 + 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 < *(uint *)(iVar6 + 0x60));
  }
LAB_004f0c8d:
  (**(code **)*puVar2)(1);
  puVar2 = *(undefined4 **)(param_1 + 0x411c);
  if (puVar2 == (undefined4 *)0x0) {
    return;
  }
  *(undefined4 *)(param_1 + 0x411c) = puVar2[1];
  if (puVar2 == *(undefined4 **)(param_1 + 0x4120)) {
    *(undefined4 *)(param_1 + 0x4120) = puVar2[2];
  }
  if (puVar2[2] != 0) {
    *(undefined4 *)(puVar2[2] + 4) = puVar2[1];
  }
  if (puVar2[1] != 0) {
    *(undefined4 *)(puVar2[1] + 8) = puVar2[2];
  }
  puVar2[1] = 0xabadcafe;
  puVar2[2] = 0xabadcafe;
  *(int *)(param_1 + 0x4118) = *(int *)(param_1 + 0x4118) + -1;
  goto joined_r0x004f0b22;
}

