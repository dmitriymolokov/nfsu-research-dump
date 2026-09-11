/* Decompiled from Speed.exe @ 005c8fd2 */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 FUN_005c8fd2(int *param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  bool bVar5;
  
  uVar2 = 0;
  if (param_3 == (undefined4 *)0x0) {
    uVar2 = 0x80004005;
  }
  else {
    iVar1 = 4;
    bVar5 = true;
    piVar3 = param_2;
    piVar4 = &DAT_006a08b8;
    do {
      if (iVar1 == 0) break;
      iVar1 = iVar1 + -1;
      bVar5 = *piVar3 == *piVar4;
      piVar3 = piVar3 + 1;
      piVar4 = piVar4 + 1;
    } while (bVar5);
    if (!bVar5) {
      iVar1 = 4;
      bVar5 = true;
      piVar3 = &DAT_006abe14;
      do {
        if (iVar1 == 0) break;
        iVar1 = iVar1 + -1;
        bVar5 = *param_2 == *piVar3;
        param_2 = param_2 + 1;
        piVar3 = piVar3 + 1;
      } while (bVar5);
      if (!bVar5) {
        return 0x80004002;
      }
    }
    *param_3 = param_1;
    (**(code **)(*param_1 + 4))(param_1);
  }
  return uVar2;
}

