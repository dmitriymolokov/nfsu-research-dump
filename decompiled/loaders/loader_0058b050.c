/* Decompiled from Speed.exe @ 0058b050 */
/* Module: Loader */
/* Ghidra DecompileAll */


int __fastcall
FUN_0058b050(undefined4 param_1,undefined4 *param_2,int param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  
  *(undefined1 *)(param_3 + 0xc) = 0;
  *(undefined1 *)(param_3 + 0xd) = 0;
  *(undefined4 *)(param_3 + 8) = *param_2;
  *(undefined4 *)(param_3 + 0x10) = 0;
  puVar4 = (undefined4 *)(param_3 + 0x14);
  for (iVar3 = 0x78; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  piVar5 = param_2 + 0x113;
  puVar4 = (undefined4 *)(param_3 + 0x18);
  iVar3 = 0x1e;
  do {
    iVar1 = *piVar5;
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(iVar1 + 0x20);
    }
    puVar4[-1] = uVar2;
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(iVar1 + 0x24);
    }
    *puVar4 = uVar2;
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(iVar1 + 0x28);
    }
    puVar4[1] = uVar2;
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(iVar1 + 0x2c);
    }
    puVar4[2] = uVar2;
    puVar4 = puVar4 + 4;
    piVar5 = piVar5 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  if (param_5 != 0) {
    iVar3 = 0;
    puVar4 = (undefined4 *)(param_3 + 0x14);
    do {
      if ((DAT_006f06e0 != iVar3) && (DAT_006f06dc != iVar3 && DAT_006f06d8 != iVar3)) {
        *puVar4 = 0;
      }
      iVar3 = iVar3 + 1;
      puVar4 = puVar4 + 4;
    } while (iVar3 < 0x1e);
  }
  return param_3;
}

