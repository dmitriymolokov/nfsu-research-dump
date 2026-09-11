/* Decompiled from Speed.exe @ 0058c840 */
/* Module: Loader */
/* Ghidra DecompileAll */


void FUN_0058c840(int param_1)

{
  short *psVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined1 local_1e0 [480];
  
  piVar5 = *(int **)(param_1 + 0x3c);
  iVar6 = DAT_007344ec;
  if (piVar5 != (int *)(param_1 + 0x3c)) {
    do {
      if ((*(char *)((int)piVar5 + 0xba2) == '\x02') && (*(char *)((int)piVar5 + 0xba3) != '\0')) {
        iVar4 = piVar5[0x364];
        if (0 < iVar4) {
          piVar3 = piVar5 + 0x365;
          do {
            if (*piVar3 != 0) {
              psVar1 = (short *)(*piVar3 + 0xc);
              *psVar1 = *psVar1 + -1;
            }
            piVar3 = piVar3 + 1;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
        iVar4 = FUN_0058c1c0(param_1,local_1e0,0x78,piVar5 + 0x365);
        piVar5[0x364] = 0;
        if (iVar4 != 0) {
          FUN_0053ec90(&DAT_00740420,local_1e0,iVar4);
          iVar6 = DAT_007344ec;
        }
        if (piVar5[0x2ea] != 0) {
          psVar1 = (short *)(piVar5[0x2ea] + 0x50);
          *psVar1 = *psVar1 + -1;
          piVar3 = (int *)piVar5[0x2ea];
          if (((short)piVar3[0x14] == 0) && (*(char *)((int)piVar3 + 0x52) != '\x01')) {
            if (*(char *)((int)piVar3 + 0x52) == '\x02') {
              FUN_0053f3e0(piVar3 + 2,0,0);
              iVar6 = DAT_007344ec;
            }
            iVar4 = *piVar3;
            piVar2 = (int *)piVar3[1];
            *piVar2 = iVar4;
            *(int **)(iVar4 + 4) = piVar2;
            iVar4 = *(int *)(iVar6 + 0x18);
            *piVar3 = *(int *)(iVar6 + 0x10);
            *(int *)(iVar6 + 0x18) = iVar4 + -1;
            *(int **)(iVar6 + 0x10) = piVar3;
          }
          piVar5[0x2ea] = 0;
        }
      }
      piVar5 = (int *)*piVar5;
    } while (piVar5 != (int *)(param_1 + 0x3c));
  }
  return;
}

