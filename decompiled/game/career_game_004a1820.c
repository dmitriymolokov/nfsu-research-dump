/* Decompiled from Speed.exe @ 004a1820 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a1820(int param_1)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  int unaff_EBX;
  int iVar4;
  undefined *puVar5;
  float local_2c;
  float local_28;
  undefined1 local_24 [4];
  undefined1 local_20 [32];
  
  iVar4 = *(int *)(param_1 + 4);
  if (((DAT_006fbf14 == 0) && (*(int *)(param_1 + 0x10) == 0)) &&
     (iVar2 = FUN_0041ffe0(), iVar2 != 0)) {
    iVar4 = iVar2;
  }
  iVar4 = *(int *)(iVar4 + 0x1c);
  if (iVar4 == 0) {
    return;
  }
  if ((*(uint *)(unaff_EBX + 0x18) & *(uint *)(unaff_EBX + 0x10)) == 0 &&
      (*(uint *)(unaff_EBX + 0x1c) & *(uint *)(unaff_EBX + 0x14)) == 0) {
    return;
  }
  iVar2 = (int)*(char *)(iVar4 + 9);
  if (((DAT_0078a30c == 1) && (DAT_0078a31c == 0)) && (DAT_0078a368 == 0)) {
    FUN_004f6910(*(undefined4 *)(unaff_EBX + 0x24));
    FUN_004149d0();
    FUN_004f6d10(&local_28,&local_2c);
    FUN_004f7350(&local_2c,local_24);
    FUN_00496010(local_2c + local_28 + _DAT_006cca94);
    if (0x62 < iVar2) {
      iVar2 = 0x62;
    }
  }
  else {
    FUN_004f68a0(&DAT_006c72e8,*(undefined4 *)(DAT_0073619c + 0x530));
    FUN_004f6970(*(undefined4 *)(unaff_EBX + 0x24));
  }
  FUN_004f68a0(&PTR_LAB_006c7968,iVar2 + 1);
  iVar2 = DAT_0073619c;
  if (((DAT_0078a30c == 2) && (DAT_0078a310 != 0)) &&
     ((DAT_0078a310 != 0x7fffffff && (DAT_0078a368 == 0)))) {
    iVar2 = *(int *)(iVar4 + 0x24 + *(char *)(DAT_0073619c + 0x53e) * 4);
    if ((iVar2 == 0) || (iVar2 == 0x7fffffff)) {
LAB_004a1a58:
      FUN_004f66f0();
      goto LAB_004a1a65;
    }
    local_2c = (float)((iVar2 - DAT_0073ad34) + DAT_0078a310);
    FUN_00586580(local_20);
  }
  else {
    iVar1 = *(int *)(iVar4 + 0x24 + *(char *)(DAT_0073619c + 0x53e) * 4);
    if ((iVar1 == 0) || (iVar1 == 0x7fffffff)) goto LAB_004a1a58;
    if (*(char *)(iVar4 + 0xd) != '\0') {
      *(int *)(unaff_EBX + 0x44) = DAT_0073ad34;
      *(undefined4 *)(unaff_EBX + 0x48) =
           *(undefined4 *)(iVar4 + 0x38 + *(char *)(iVar2 + 0x53f) * 4);
    }
    local_28 = (float)(DAT_0073ad34 - *(int *)(unaff_EBX + 0x44));
    if (_DAT_006cc7ac < (float)(int)local_28 * _DAT_006cca38) {
      *(int *)(unaff_EBX + 0x48) =
           DAT_0073ad34 - *(int *)(iVar4 + 0x24 + *(char *)(iVar2 + 0x53e) * 4);
    }
    FUN_00586580(local_20);
  }
  FUN_004f68a0(&DAT_006cc568,local_20);
LAB_004a1a65:
  if ((DAT_0078a345 == '\0') && (DAT_007361a4 == 0)) {
    local_2c = *(float *)(iVar4 + 0x60 + *(char *)(DAT_0073619c + 0x53f) * 4);
    if ((float)(int)local_2c * _DAT_006cca38 == DAT_006cc7a4) {
      FUN_004f68c0(0x20,"--:--:--");
    }
    else {
      FUN_00586580(local_20);
    }
    puVar3 = local_20;
    puVar5 = &DAT_006cc568;
  }
  else {
    puVar3 = (undefined1 *)FUN_00674898();
    puVar5 = &DAT_006ca778;
  }
  FUN_004f68a0(puVar5,puVar3);
  if (((DAT_0078a345 != '\0') || (DAT_007361a4 != 0)) && (DAT_0078a320 == 2)) {
    FUN_00414a10();
    FUN_00414a10();
    FUN_00414a10();
  }
  return;
}

