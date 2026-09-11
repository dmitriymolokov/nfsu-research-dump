/* Decompiled from Speed.exe @ 005d01ec */
/* Module: Loader */
/* Ghidra DecompileAll */


int FUN_005d01ec(int param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_8;
  
  iVar2 = param_1;
  local_8 = 0;
  if ((*(int *)(param_1 + 0x84) == 0) ||
     (iVar3 = *(int *)(param_1 + 0x34) * 0xac + *(int *)(param_1 + 0x1c),
     *(uint *)(iVar3 + 0x2c) <= param_2)) {
    local_8 = -0x7789f794;
  }
  else {
    *(uint *)(param_1 + 0x30) = param_2;
    iVar3 = param_2 * 0x3c + *(int *)(iVar3 + 0x30);
    param_2 = 0;
    if (*(int *)(iVar3 + 0x24) != 0) {
      param_1 = 0;
      do {
        iVar4 = *(int *)(iVar3 + 0x28) + param_1;
        local_8 = FUN_005cdca7(iVar4);
        if ((local_8 < 0) || (local_8 = FUN_005c97cb(iVar4,0xffffffff), local_8 < 0)) break;
        param_2 = param_2 + 1;
        param_1 = param_1 + 0xac;
      } while (param_2 < *(uint *)(iVar3 + 0x24));
    }
  }
  piVar1 = (int *)(iVar2 + 0xb4);
  if (*piVar1 != 0) {
    __controlfp(*(uint *)(iVar2 + 0xb8),0x30000);
    *piVar1 = 0;
  }
  return local_8;
}

