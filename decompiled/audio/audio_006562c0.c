/* Decompiled from Speed.exe @ 006562c0 */
/* Module: Audio */
/* Ghidra DecompileVAs */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006562c0(float param_1)

{
  undefined4 uVar1;
  int iVar2;
  int local_c;
  int local_8;
  undefined4 local_4;
  
  local_8 = 0;
  local_4 = 0;
  iVar2 = 0;
  local_c = 0;
  if (DAT_00716465 != 0) {
    do {
      if (_DAT_006cc7bc <= param_1) {
        if ((&DAT_007165ac)[iVar2] != 0) {
          FUN_006510d0((&DAT_007165ac)[iVar2]);
          (&DAT_007165ac)[iVar2] = 0;
        }
      }
      else {
        if ((&DAT_007165ac)[iVar2] == 0) {
          uVar1 = FUN_00650fd0(0x28);
          (&DAT_007165ac)[iVar2] = uVar1;
          FUN_00659f30(uVar1);
          *(undefined4 *)((&DAT_007165ac)[iVar2] + 8) = 0;
        }
        local_8 = (uint)DAT_00713d9a << 8;
        local_c = (int)ROUND((float)DAT_00713d9a * param_1) << 7;
        local_4 = 0x100;
        FUN_00659f60((&DAT_007165ac)[iVar2],&local_c);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)(uint)DAT_00716465);
  }
  return;
}

