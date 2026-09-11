/* Decompiled from Speed.exe @ 005e293e */
/* Module: Loader */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __fastcall FUN_005e293e(int *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar4 = param_1[1];
  if ((iVar4 == 0) || (*(int *)(iVar4 + 4) != 3)) {
    uVar2 = 0;
  }
  else if (param_1[2] == 0) {
    uVar2 = 0x80004005;
  }
  else {
    uVar2 = FUN_005fbfb9(iVar4,*param_1 + 4,param_1[4],param_1[5]);
    if (-1 < (int)uVar2) {
      _free((void *)param_1[6]);
      puVar3 = _malloc(*(int *)(iVar4 + 0x18) << 2);
      param_1[6] = (int)puVar3;
      if (puVar3 == (undefined4 *)0x0) {
        uVar2 = 0x8007000e;
      }
      else {
        for (uVar2 = *(uint *)(iVar4 + 0x18) & 0x3fffffff; uVar2 != 0; uVar2 = uVar2 - 1) {
          *puVar3 = 0xffffffff;
          puVar3 = puVar3 + 1;
        }
        for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
          *(undefined1 *)puVar3 = 0xff;
          puVar3 = (undefined4 *)((int)puVar3 + 1);
        }
        iVar4 = FUN_005f74cf(*(undefined4 *)(param_1[2] + 0x50),0,0,0x3ff0000000000000);
        param_1[8] = iVar4;
        iVar4 = FUN_005f74cf(*(undefined4 *)(param_1[2] + 0x50),0,0,0);
        uVar1 = _DAT_0069f3c8;
        param_1[9] = iVar4;
        iVar4 = FUN_005f74cf(*(undefined4 *)(param_1[2] + 0x50),0,0,uVar1);
        param_1[10] = iVar4;
        param_1[0xb] = param_1[8];
        uVar2 = FUN_005dc760();
        if (-1 < (int)uVar2) {
          uVar2 = -(uint)(param_1[0xd] != 0) & 0x80004005;
        }
      }
    }
  }
  return uVar2;
}

