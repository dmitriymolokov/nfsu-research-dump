/* Decompiled from Speed.exe @ 005c7ed5 */
/* Module: Loader */
/* Ghidra DecompileAll */


int __fastcall FUN_005c7ed5(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int local_24 [8];
  
  if (*(int *)(param_1 + 0x48) == 0) {
    iVar1 = -0x7789f794;
  }
  else {
    do {
      iVar1 = FUN_005c7bd2(local_24);
      if (iVar1 < 0) {
        return iVar1;
      }
    } while (local_24[0] != 0xd);
    iVar1 = *(int *)(param_1 + 0x48);
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(iVar1 + 4);
    *(undefined4 *)(iVar1 + 4) = 0;
    FUN_005c54ec(1);
    if (*(undefined4 **)(param_1 + 0x48) == (undefined4 *)0x0) {
      uVar2 = 1;
    }
    else {
      uVar2 = **(undefined4 **)(param_1 + 0x48);
    }
    *(undefined4 *)(param_1 + 0x80) = uVar2;
    iVar1 = 0;
  }
  return iVar1;
}

