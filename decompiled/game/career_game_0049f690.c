/* Decompiled from Speed.exe @ 0049f690 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


/* WARNING: Removing unreachable block (ram,0x0049f6cc) */

void FUN_0049f690(int param_1,float param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *local_4;
  
  local_4 = (int *)0x0;
  FUN_005a0160(param_2,&local_4);
  if (local_4 == (int *)0x0) {
    param_2 = 1.0;
  }
  else {
    param_2 = (float)(int)param_2 / (float)*local_4;
    if (param_2 < DAT_006cc7a4) {
      param_2 = 0.0;
    }
  }
  if ((((*(int *)(param_1 + 0x10) == 0) || (iVar2 = FUN_004f65d0(), iVar2 == 0)) ||
      (iVar2 = FUN_004ffb70(), iVar2 == 0)) && (DAT_0073578c != 0)) {
    FUN_004ef050(0x282d2c0a);
  }
  FUN_00496040(param_2 * *(float *)(param_1 + 0x14));
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  FUN_004f6d10(&local_4,&param_2);
  FUN_004f7000(uVar1,param_2);
  return;
}

