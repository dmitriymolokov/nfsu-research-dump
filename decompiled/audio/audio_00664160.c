/* Decompiled from Speed.exe @ 00664160 */
/* Module: Audio */
/* Ghidra DecompileAll */


int FUN_00664160(int *param_1,uint *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  FUN_00668d60(param_1 + 100);
  for (; 0 < param_3; param_3 = param_3 - uVar2) {
    if (*(char *)((int)param_2 + 6) == '\x03') {
      (**(code **)(*param_1 + 0x1c))(*param_1);
    }
    else {
      iVar1 = FUN_00663980();
      if (iVar1 < 1) break;
    }
    uVar2 = (ushort)param_2[1] + 0x1b & 0x7ffc;
    iVar3 = iVar3 + uVar2;
    *param_2 = uVar2;
    if (param_3 == 1) break;
    param_2 = (uint *)((int)param_2 + uVar2);
  }
  if (0 < param_1[0x6d]) {
    FUN_00663dc0();
  }
  FUN_00668df0(param_1 + 100);
  return iVar3;
}

