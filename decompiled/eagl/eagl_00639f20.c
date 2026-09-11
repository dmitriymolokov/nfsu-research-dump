/* Decompiled from Speed.exe @ 00639f20 */
/* Module: EAGL */
/* Ghidra DecompileAll */


void FUN_00639f20(uint param_1,code *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  uVar1 = param_1;
  iVar3 = 0;
  piVar4 = (int *)((param_1 & 0x1f) * 0xac + DAT_0070f36c);
  if (param_2 == (code *)0x0) {
    FUN_00642450("FILESYS_callbackop - can not specify a NULL callback.\n");
  }
  if (*piVar4 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = FUN_00642360(piVar4 + 5);
  }
  if (*piVar4 != 0) {
    iVar2 = piVar4[4];
    if ((iVar2 == 0) || (*(uint *)(iVar2 + 4) != uVar1)) {
      iVar2 = FUN_00641fb0(piVar4 + 5,&LAB_006390f0,uVar1);
      if (iVar2 == 0) {
        iVar2 = FUN_00641fb0(piVar4 + 0x12,&LAB_006390f0,uVar1);
      }
      else {
        iVar3 = 1;
      }
    }
    else {
      iVar3 = -1;
    }
    if (iVar2 != 0) {
      uVar1 = *(uint *)(iVar2 + 0xc);
      *(uint *)(iVar2 + 0xc) = uVar1 | 4;
      if (iVar3 == 0) {
        *(uint *)(iVar2 + 0xc) = uVar1 | 0xc;
        *(undefined4 *)(iVar2 + 0x20) = 0;
        (*param_2)(*(undefined4 *)(iVar2 + 4),(int)*(char *)(iVar2 + 0x10),
                   *(undefined4 *)(iVar2 + 0x1c));
      }
      else {
        *(code **)(iVar2 + 0x20) = param_2;
      }
      goto LAB_00639ff7;
    }
  }
  FUN_00642450("FILESYS_callbackop - UNKNOWN FILEOP.\n");
LAB_00639ff7:
  if (*piVar4 != 0) {
    FUN_00642380(piVar4 + 5,param_1);
  }
  return;
}

