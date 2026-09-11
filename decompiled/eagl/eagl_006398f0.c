/* Decompiled from Speed.exe @ 006398f0 */
/* Module: EAGL */
/* Ghidra DecompileAll */


int FUN_006398f0(uint param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = (param_1 & 0x1f) * 0xac;
  piVar3 = (int *)(iVar2 + DAT_0070f36c);
  if (*(int *)(iVar2 + DAT_0070f36c) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00642360(piVar3 + 5);
  }
  if (*piVar3 == 0) {
LAB_00639975:
    iVar2 = -3;
  }
  else {
    if ((piVar3[4] == 0) || (*(uint *)(piVar3[4] + 4) != param_1)) {
      iVar2 = FUN_00641fb0(piVar3 + 5,&LAB_006390f0,param_1);
      if (iVar2 == 0) {
        iVar2 = FUN_00641fb0(piVar3 + 0x12,&LAB_006390f0,param_1);
        if (iVar2 != 0) {
          if ((*(byte *)(iVar2 + 0xc) & 2) == 0) {
            iVar2 = (int)*(char *)(iVar2 + 0x10);
          }
          else {
            iVar2 = -1;
          }
          goto LAB_0063997a;
        }
        goto LAB_00639975;
      }
    }
    iVar2 = 0;
  }
LAB_0063997a:
  if (*piVar3 != 0) {
    FUN_00642380(piVar3 + 5,uVar1);
  }
  return iVar2;
}

