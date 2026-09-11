/* Decompiled from Speed.exe @ 004457c0 */
/* Module: Loader */
/* Symbol: scenery_parse — CHUNK_SCENERY 0x80034100 sub-chunk walker (0x34101–0x34104) */
/* Ghidra DecompileVAs (nocd unpacked; retail game/Speed.exe is THX-packed) */


undefined4 FUN_004457c0(int *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int local_28;
  
  if (*param_1 != 0x80034100) {
    return 0;
  }
  iVar5 = param_1[1] + 8 + (int)param_1;
  piVar4 = param_1 + 2;
  local_28 = 0;
  if (piVar4 < (int *)iVar5) {
    do {
      uVar1 = *piVar4;
      if (uVar1 == 0x34101) {
        /* header / model table anchor */
        local_28 = (int)piVar4 + 0x17 & 0xfffffff0;
      }
      else if (uVar1 == 0x34102) {
        /* instance list pointer + count = chunk_size / 0x30 (48-byte records) */
        *(int *)(local_28 + 0x18) = (int)(piVar4 + 2);
        *(uint *)(local_28 + 0x1c) = (uint)(piVar4[1] * 0x38e38e39) >> 4;
      }
      else if (uVar1 == 0x34103) {
        *(int *)(local_28 + 0x20) = (int)piVar4 + 0x17 & 0xfffffff0;
        iVar2 = piVar4[1] - ((int)piVar4 + 0x17 & 0xfffffff0) + 8;
        *(uint *)(local_28 + 0x24) = (uint)(iVar2 * 0xaaaaaaab) >> 5;
      }
      else if (uVar1 == 0x34104) {
        *(int *)(local_28 + 0x28) = (int)(piVar4 + 2);
        *(uint *)(local_28 + 0x2c) = (uint)(piVar4[1] * 0xaaaaaaab) >> 4;
      }
      piVar4 = (int *)((int)piVar4 + piVar4[1] + 8);
    } while (piVar4 < (int *)iVar5);
  }
  /* instance loop: stride 0x48 per record */
  iVar6 = *(int *)(local_28 + 0x1c);
  for (iVar3 = 0; iVar3 < (int)iVar6; iVar3 = iVar3 + 1) {
    /* bind instance records into scenery section lists */
  }
  *(undefined4 *)(local_28 + 8) = 1;
  return 1;
}
