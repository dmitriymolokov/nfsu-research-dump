/* Decompiled from Speed.exe @ 005dc68d */
/* Module: Loader */
/* Ghidra DecompileAll */


int __thiscall FUN_005dc68d(int param_1,int param_2,int *param_3,uint param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  uint local_8;
  
  bVar1 = true;
  if (param_4 != 0) {
    local_8 = param_4;
    piVar4 = param_3;
    do {
      while( true ) {
        iVar2 = FUN_005f762c();
        if ((*(int *)(iVar2 + 0x20) == -1) || (*(int *)(iVar2 + 4) != -1)) break;
        *piVar4 = *(int *)(iVar2 + 0x20);
      }
      iVar3 = FUN_005f7616();
      if (((*(byte *)(iVar3 + 4) & 0x80) == 0) || (*(int *)(iVar2 + 4) != -1)) {
        bVar1 = false;
      }
      piVar4 = piVar4 + 1;
      local_8 = local_8 - 1;
    } while (local_8 != 0);
  }
  uVar5 = 0;
  if ((param_2 != 0) && (bVar1)) {
    if (param_4 != 0) {
      do {
        iVar2 = FUN_005f762c();
        iVar2 = FUN_005f74cf(*(undefined4 *)(*(int *)(param_1 + 8) + 0x50),0,0,
                             *(undefined8 *)(iVar2 + 0x10));
        param_3[uVar5] = iVar2;
        if (iVar2 == -1) {
          return -0x7ff8fff2;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < param_4);
    }
    iVar2 = FUN_005dc613(param_2,param_3,*(undefined4 *)(*(int *)(param_1 + 8) + 0x50),1,1,0,0);
    if (iVar2 < 0) {
      return iVar2;
    }
  }
  return 0;
}

