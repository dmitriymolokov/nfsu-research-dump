/* Decompiled from Speed.exe @ 00584500 */
/* Module: Loader */
/* Ghidra DecompileAll */


void __thiscall FUN_00584500(int param_1,float param_2,float param_3)

{
  float fVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  
  if (*(byte *)(param_1 + 6) < *(byte *)(param_1 + 5)) {
    *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) + 1;
  }
  fVar1 = param_2 + *(float *)(param_1 + 8);
  iVar2 = (uint)*(byte *)(param_1 + 7) * 4;
  *(float *)(param_1 + 8) = fVar1;
  uVar5 = 0;
  *(float *)(param_1 + 8) = fVar1 - *(float *)(iVar2 + *(int *)(param_1 + 0x10));
  *(float *)(iVar2 + *(int *)(param_1 + 0x30)) = param_3;
  *(float *)(*(int *)(param_1 + 0x10) + (uint)*(byte *)(param_1 + 7) * 4) = param_2;
  if (*(float *)(param_1 + 0x28) <
      param_3 - *(float *)(*(int *)(param_1 + 0x30) + *(int *)(param_1 + 0x2c) * 4)) {
    uVar4 = (uint)*(byte *)(param_1 + 5);
    uVar5 = 0;
    do {
      if ((int)uVar4 <= (int)uVar5) break;
      iVar2 = *(int *)(param_1 + 0x2c) * 4;
      if (DAT_006cc7a4 < *(float *)(iVar2 + *(int *)(param_1 + 0x30))) {
        *(float *)(param_1 + 8) =
             *(float *)(param_1 + 8) - *(float *)(*(int *)(param_1 + 0x10) + iVar2);
        *(undefined4 *)(*(int *)(param_1 + 0x10) + iVar2) = 0;
        *(undefined4 *)(*(int *)(param_1 + 0x30) + *(int *)(param_1 + 0x2c) * 4) = 0;
        iVar2 = *(int *)(param_1 + 0x2c) + 1;
        *(int *)(param_1 + 0x2c) = iVar2;
        uVar4 = (uint)*(byte *)(param_1 + 5);
        if ((int)uVar4 <= iVar2) {
          *(undefined4 *)(param_1 + 0x2c) = 0;
        }
        *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + -1;
      }
      uVar5 = uVar5 + 1;
    } while (*(float *)(param_1 + 0x28) <
             param_3 - *(float *)(*(int *)(param_1 + 0x30) + *(int *)(param_1 + 0x2c) * 4));
  }
  if (uVar5 != *(byte *)(param_1 + 5)) {
    bVar3 = *(char *)(param_1 + 7) + 1;
    *(byte *)(param_1 + 7) = bVar3;
    *(float *)(param_1 + 0xc) = *(float *)(param_1 + 8) / (float)*(byte *)(param_1 + 6);
    if (*(byte *)(param_1 + 5) <= bVar3) {
      *(undefined1 *)(param_1 + 7) = 0;
    }
    return;
  }
  FUN_005844b0(0);
  return;
}

