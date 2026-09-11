/* Decompiled from Speed.exe @ 004ff2f0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004ff2f0(int param_1,int param_2,char param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int extraout_ECX;
  int extraout_ECX_00;
  int *unaff_ESI;
  int iVar5;
  
  iVar3 = *(int *)(param_1 + 0x4c);
  do {
    if (iVar3 == 0) {
      if (param_3 != '\0') {
        iVar1 = FUN_004ff560(param_1);
        iVar3 = *(int *)(extraout_ECX + 0x2c);
        iVar5 = *(int *)(iVar1 + 4 + iVar3);
        piVar2 = (int *)(iVar1 + iVar3);
        piVar2[2] = *(int *)(iVar1 + 8 + iVar3) + unaff_ESI[2];
        piVar2[1] = iVar5 + unaff_ESI[1];
        *piVar2 = *piVar2 + *unaff_ESI;
        piVar2[3] = piVar2[3] + unaff_ESI[3];
        return;
      }
      iVar3 = FUN_004ff560(param_1);
      piVar2 = (int *)(iVar3 + *(int *)(extraout_ECX_00 + 0x2c));
      piVar2[3] = unaff_ESI[3];
      piVar2[2] = unaff_ESI[2];
      piVar2[1] = unaff_ESI[1];
      *piVar2 = *unaff_ESI;
      return;
    }
    uVar4 = 0;
    if (*(uint *)(iVar3 + 0x1c) != 0) {
      iVar5 = *(int *)(iVar3 + 0x20) + 4;
      do {
        if ((int)*(char *)(iVar5 + 3) == *(int *)(&DAT_006b66e4 + param_2 * 4)) {
          iVar5 = uVar4 * 0x38 + *(int *)(iVar3 + 0x20);
          if (iVar5 != 0) {
            if (param_3 == '\0') {
              *(int *)(iVar5 + 0x24) = unaff_ESI[3];
              *(int *)(iVar5 + 0x20) = unaff_ESI[2];
              *(int *)(iVar5 + 0x1c) = unaff_ESI[1];
              *(int *)(iVar5 + 0x18) = *unaff_ESI;
            }
            else {
              *(int *)(iVar5 + 0x20) = *(int *)(iVar5 + 0x20) + unaff_ESI[2];
              *(int *)(iVar5 + 0x1c) = *(int *)(iVar5 + 0x1c) + unaff_ESI[1];
              *(int *)(iVar5 + 0x18) = *(int *)(iVar5 + 0x18) + *unaff_ESI;
              *(int *)(iVar5 + 0x24) = *(int *)(iVar5 + 0x24) + unaff_ESI[3];
            }
            *(byte *)(iVar5 + 3) = *(byte *)(iVar5 + 3) & 0x7f;
          }
          break;
        }
        uVar4 = uVar4 + 1;
        iVar5 = iVar5 + 0x38;
      } while (uVar4 < *(uint *)(iVar3 + 0x1c));
    }
    iVar3 = *(int *)(iVar3 + 4);
  } while( true );
}

