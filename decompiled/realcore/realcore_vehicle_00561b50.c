/* Decompiled from Speed.exe @ 00561b50 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_00561b50(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int local_1004;
  undefined1 local_1000 [2048];
  undefined1 local_800 [2044];
  undefined4 uStack_4;
  
  uStack_4 = 0x561b5a;
  param_2 = *(int *)(param_1 + 0x3cc) + param_2;
  iVar1 = *(int *)(param_1 + 0x3c4) + -0xe;
  *(int *)(param_1 + 0x3cc) = param_2;
  if (iVar1 < param_2) {
    *(int *)(param_1 + 0x3cc) = iVar1;
  }
  if (*(int *)(param_1 + 0x3cc) < 0) {
    *(undefined4 *)(param_1 + 0x3cc) = 0;
  }
  piVar2 = (int *)(param_1 + 0x6c);
  local_1004 = 0;
  do {
    iVar1 = *piVar2;
    if (*(int *)(param_1 + 0xa4 + (*(int *)(param_1 + 0x3cc) + local_1004) * 4) == 0) {
      FUN_0059ff40(local_800,0x800);
    }
    else {
      FUN_0059ff40(local_1000,0x800);
    }
    FUN_00504080();
    *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) | 0x400000;
    local_1004 = local_1004 + 1;
    piVar2 = piVar2 + 1;
  } while (local_1004 < 0xe);
  return;
}

