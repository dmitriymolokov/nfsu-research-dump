/* Decompiled from Speed.exe @ 005bc47a */
/* Module: Loader */
/* Ghidra DecompileAll */


void __thiscall FUN_005bc47a(int param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  
  uVar3 = 0;
  uVar5 = 0;
  piVar4 = (int *)(param_1 + 0x20);
  uVar6 = 5;
  uVar2 = 0;
  if ((param_2 != 0) && (*(int *)(param_2 + 4) == 2)) {
    piVar4 = (int *)(param_2 + 0x10);
    iVar1 = *piVar4;
    uVar2 = uVar3;
    if (iVar1 == 2) {
      uVar5 = *(uint *)(param_2 + 0x18);
      uVar6 = (uVar5 & 0xbfffffff | 0x20000000) >> 0x1d;
    }
    else {
      if (iVar1 == 3) {
        uVar6 = 4;
      }
      else {
        if (iVar1 != 4) {
          if (iVar1 == 5) {
            uVar6 = 9;
          }
          else if (iVar1 == 6) {
            uVar6 = 10;
          }
          else if (iVar1 == 7) {
            uVar6 = 0xb;
          }
          else {
            if (iVar1 != 8) goto LAB_005bc4e7;
            uVar6 = 0xc;
          }
          uVar2 = *(undefined8 *)(param_2 + 0x18);
          goto LAB_005bc4e7;
        }
        uVar6 = 8;
      }
      uVar5 = *(uint *)(param_2 + 0x18);
    }
  }
LAB_005bc4e7:
  FUN_005bc356(uVar6,uVar5,uVar2,piVar4);
  return;
}

