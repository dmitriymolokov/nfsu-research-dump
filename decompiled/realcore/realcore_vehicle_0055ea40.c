/* Decompiled from Speed.exe @ 0055ea40 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


void FUN_0055ea40(int param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int extraout_EDX;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x14) + 0x60);
  do {
    if (iVar1 == 0) {
      return;
    }
    if (*(int *)(param_1 + 4) == -1) {
      FUN_004f6910();
    }
    else {
      FUN_004f6970(iVar1);
      iVar2 = *(int *)(extraout_EDX + 4);
      iVar4 = FUN_0055e9f0();
      if (iVar4 + -1 < iVar2) {
        if (*(int *)(param_1 + 8) < iVar2) {
          if (*(int *)(param_1 + 0xc) < iVar2) {
            if (*(int *)(iVar1 + 0x18) < 0x100) {
              cVar3 = FUN_004feb50();
              if (cVar3 == '\0') {
                *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) | 0x400000;
              }
              goto LAB_0055eb84;
            }
          }
          else if (*(int *)(iVar1 + 0x18) < 0x100) {
            cVar3 = FUN_004feb50();
            if (cVar3 == '\0') {
              *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) | 0x400000;
            }
LAB_0055eb84:
            FUN_004ff2f0(iVar1,0,0);
          }
        }
        else if (*(int *)(iVar1 + 0x18) < 0x100) {
          cVar3 = FUN_004feb50();
          if (cVar3 == '\0') {
            *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) | 0x400000;
          }
          goto LAB_0055eb84;
        }
      }
      else if (*(int *)(iVar1 + 0x18) < 0x100) {
        cVar3 = FUN_004feb50();
        if (cVar3 == '\0') {
          *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) | 0x400000;
        }
        goto LAB_0055eb84;
      }
    }
    iVar1 = *(int *)(iVar1 + 4);
  } while( true );
}

