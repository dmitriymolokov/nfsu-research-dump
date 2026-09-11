/* Decompiled from Speed.exe @ 00639ad0 */
/* Module: EAGL */
/* Ghidra DecompileAll */


void fn_00639ad0(uint param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  uVar1 = param_1;
  iVar3 = (param_1 & 0x1f) * 0xac;
  piVar4 = (int *)(iVar3 + DAT_0070f36c);
  iVar2 = 0;
  if (*(int *)(iVar3 + DAT_0070f36c) == 0) {
    param_1 = 0;
  }
  else {
    param_1 = FUN_00642360(piVar4 + 5);
  }
  if (*piVar4 != 0) {
    iVar3 = piVar4[4];
    if ((iVar3 == 0) || (*(uint *)(iVar3 + 4) != uVar1)) {
      iVar3 = FUN_00641fb0(piVar4 + 5,&LAB_006390f0,uVar1);
      if (iVar3 == 0) {
        iVar3 = FUN_00641fb0(piVar4 + 0x12,&LAB_006390f0,uVar1);
      }
      else {
        iVar2 = 1;
      }
    }
    else {
      iVar2 = -1;
    }
    if ((iVar3 != 0) && (iVar2 != 0)) {
      switch(*(undefined4 *)(iVar3 + 8)) {
      case 2:
      case 3:
        if (piVar4[4] == iVar3) {
          FUN_0063dac0(*(undefined4 *)(iVar3 + 0x18));
        }
      case 0:
      case 4:
      case 6:
      case 8:
      case 9:
        *(uint *)(iVar3 + 0xc) = *(uint *)(iVar3 + 0xc) | 2;
        iVar2 = FUN_00641e90(piVar4 + 5,iVar3);
        if (iVar2 != 0) {
          FUN_00641cb0(piVar4 + 0x12,iVar3);
          if (*(code **)(iVar3 + 0x20) != (code *)0x0) {
            *(uint *)(iVar3 + 0xc) = *(uint *)(iVar3 + 0xc) | 8;
            (**(code **)(iVar3 + 0x20))
                      (*(undefined4 *)(iVar3 + 4),0xffffffff,*(undefined4 *)(iVar3 + 0x1c));
          }
        }
      }
    }
  }
  if (*piVar4 != 0) {
    FUN_00642380(piVar4 + 5,param_1);
  }
  return;
}

