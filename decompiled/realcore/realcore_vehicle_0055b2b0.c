/* Decompiled from Speed.exe @ 0055b2b0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


void FUN_0055b2b0(int param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  
  iVar1 = param_1;
  if (*(char *)(param_1 + 0x45c) != '\0') {
    piVar4 = (int *)(param_1 + 0x40);
    param_1 = 2;
    do {
      if ((*piVar4 != 0) && (cVar2 = FUN_004f7eb0(iVar1), cVar2 != '\0')) {
        if (*(int *)(*piVar4 + 0x10) == 0x70355aa6) {
          if (((*(int *)(iVar1 + 0xc) == 0) || (iVar3 = FUN_004f65d0(), iVar3 == 0)) ||
             (iVar3 = FUN_004ffb70(), iVar3 == 0)) {
            if (DAT_0073578c == 0) goto LAB_0055b3b6;
            iVar3 = FUN_004ef050(0x3eb860d2);
          }
          if ((DAT_0073578c != 0) && (*(int *)(DAT_0073578c + 8) != 0)) {
            iVar5 = *piVar4;
            uVar6 = *(undefined4 *)(iVar1 + 0x48);
LAB_0055b3ac:
            FUN_004f0700(0xc407210,iVar5,uVar6,iVar3,0);
          }
        }
        else if (*(int *)(*piVar4 + 0x10) == 0x70355aa7) {
          if (((*(int *)(iVar1 + 0xc) == 0) || (iVar3 = FUN_004f65d0(), iVar3 == 0)) ||
             (iVar3 = FUN_004ffb70(), iVar3 == 0)) {
            if (DAT_0073578c == 0) goto LAB_0055b3b6;
            iVar3 = FUN_004ef050(0x740db178);
          }
          if ((DAT_0073578c != 0) && (*(int *)(DAT_0073578c + 8) != 0)) {
            uVar6 = *(undefined4 *)(iVar1 + 0x48);
            iVar5 = *piVar4;
            goto LAB_0055b3ac;
          }
        }
      }
LAB_0055b3b6:
      piVar4 = piVar4 + 1;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  return;
}

