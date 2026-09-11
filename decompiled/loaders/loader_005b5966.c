/* Decompiled from Speed.exe @ 005b5966 */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 FUN_005b5966(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined4 local_8;
  
  local_8 = 0;
  if (param_3 == 0) {
    local_8 = 0x8876086c;
  }
  else {
    uVar5 = FUN_005b4dd4(param_2);
    puVar3 = (undefined4 *)((ulonglong)uVar5 >> 0x20);
    iVar1 = (int)uVar5;
    if (iVar1 == 0) {
      local_8 = 0x8876086c;
    }
    else {
      puVar4 = puVar3;
      for (iVar2 = 0x117; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
      *puVar3 = *(undefined4 *)(iVar1 + 0x20);
      puVar3[1] = *(undefined4 *)(iVar1 + 0x24);
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3[0x85] = 0;
      puVar3[0x106] = 0;
    }
  }
  return local_8;
}

