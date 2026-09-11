/* Decompiled from Speed.exe @ 005a25a0 */
/* Module: Loader */
/* Ghidra DecompileAll */


void __fastcall FUN_005a25a0(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar4 = FUN_005a0350();
  iVar3 = (int)((ulonglong)uVar4 >> 0x20);
  uVar1 = (uint)uVar4;
  if (uVar1 < 0x20) {
    iVar2 = (&DAT_00733f78)[uVar1];
  }
  else {
    iVar2 = 0;
  }
  switch(param_1) {
  default:
    iVar2 = 0;
    break;
  case 1:
    iVar2 = *(int *)(iVar2 + 4);
    break;
  case 2:
    iVar2 = *(int *)(iVar2 + 8);
    break;
  case 3:
    iVar2 = *(int *)(iVar2 + 0xc);
  }
  *(int *)(iVar3 + 0x1374) = *(int *)(iVar3 + 0x1374) - iVar2;
  *(int *)(iVar3 + 0x137c) = *(int *)(iVar3 + 0x137c) + iVar2;
  if (((uVar1 != 8) && (uVar1 != 5)) && (uVar1 != 0xffffffff)) {
    FUN_005a34a0();
  }
  return;
}

