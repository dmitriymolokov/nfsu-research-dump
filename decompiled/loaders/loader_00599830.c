/* Decompiled from Speed.exe @ 00599830 */
/* Module: Loader */
/* Ghidra DecompileAll */


/* WARNING: Removing unreachable block (ram,0x00599840) */
/* WARNING: Removing unreachable block (ram,0x00599857) */
/* WARNING: Removing unreachable block (ram,0x0059985e) */
/* WARNING: Removing unreachable block (ram,0x00599884) */
/* WARNING: Removing unreachable block (ram,0x0059987d) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00599830(undefined4 param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  float10 fVar4;
  float local_1c;
  float local_14;
  
  uVar2 = FUN_0059b370();
  local_14 = DAT_006b5a60;
  fVar4 = (float10)FUN_00424e00();
  if (fVar4 < (float10)_DAT_006b5a5c) {
    local_14 = DAT_006b5a64;
  }
  fVar4 = (float10)FUN_004216f0(0x3f800000);
  if (((float10)local_14 <= fVar4) || (cVar1 = FUN_00599c80(param_1,uVar2), cVar1 == '\0')) {
    iVar3 = FUN_00424d50();
    if (iVar3 == 0) {
      fVar4 = (float10)FUN_0059b3e0(uVar2);
      local_1c = (float)fVar4;
    }
    else {
      FUN_00424db0();
      iVar3 = FUN_0041e4c0();
      local_1c = *(float *)(param_2 + iVar3 * 4);
    }
    cVar1 = FUN_00421a50();
    if (cVar1 != '\0') {
      uVar2 = FUN_005999c0(param_1,uVar2,local_1c);
      return uVar2;
    }
    cVar1 = FUN_00421a50();
    if (cVar1 == '\0') {
      uVar2 = FUN_0059a2c0(param_1,uVar2,local_1c);
      return uVar2;
    }
  }
  return 1;
}

