/* Decompiled from Speed.exe @ 0048cbd0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0048cbd0(char param_1)

{
  float fVar1;
  int iVar2;
  undefined4 *puVar3;
  float fVar4;
  int unaff_EDI;
  float10 fVar5;
  float local_20;
  float local_1c;
  float local_18;
  
  iVar2 = *(int *)(unaff_EDI + 0x2c);
  local_1c = *(float *)(iVar2 + 0x74);
  local_20 = *(float *)(iVar2 + 0x70);
  local_18 = *(float *)(iVar2 + 0x78);
  fVar1 = local_1c * *(float *)(iVar2 + 0x94) +
          local_18 * *(float *)(iVar2 + 0x98) + local_20 * *(float *)(iVar2 + 0x90);
  if (fVar1 < DAT_006cc7a4) {
    fVar1 = fVar1 * _DAT_006ccc08;
    local_20 = fVar1 * *(float *)(iVar2 + 0x90) + local_20;
    local_1c = fVar1 * *(float *)(iVar2 + 0x94) + local_1c;
    local_18 = fVar1 * *(float *)(iVar2 + 0x98) + local_18;
  }
  fVar5 = (float10)FUN_00583f20(&PTR_DAT_00705b20,*(undefined4 *)(iVar2 + 0x3d4));
  fVar1 = (float)fVar5;
  FUN_00567370();
  fVar4 = _DAT_006cc7bc - fVar1;
  FUN_004831c0(fVar4 * *(float *)(iVar2 + 0x90) + local_20 * fVar1,
               fVar4 * *(float *)(iVar2 + 0x94) + local_1c * fVar1,
               fVar4 * *(float *)(iVar2 + 0x98) + local_18 * fVar1);
  if (param_1 != '\0') {
    puVar3 = *(undefined4 **)(unaff_EDI + 0x3c);
    *puVar3 = puVar3[2];
    puVar3[1] = puVar3[3];
    *(undefined2 *)(puVar3 + 0xb) = 0;
    puVar3[0xc] = puVar3[0xe];
    puVar3[0xd] = puVar3[0xf];
    *(undefined2 *)(puVar3 + 0x17) = 0;
    puVar3[0x18] = puVar3[0x1a];
    puVar3[0x19] = puVar3[0x1b];
    *(undefined2 *)(puVar3 + 0x23) = 0;
  }
  return;
}

