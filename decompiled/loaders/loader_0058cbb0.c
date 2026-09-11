/* Decompiled from Speed.exe @ 0058cbb0 */
/* Module: Loader */
/* Ghidra DecompileAll */


void __fastcall FUN_0058cbb0(undefined4 *param_1)

{
  short *psVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined1 local_1e0 [480];
  
  iVar3 = FUN_0058b7d0();
  if ((iVar3 == 0) && (iVar3 = FUN_0058b8a0(param_1), iVar3 == 0)) {
    puVar6 = (undefined4 *)param_1[0x13];
    if (puVar6 != param_1 + 0x13) {
      do {
        if (0 < (int)puVar6[2]) {
          if (*(char *)(*(int *)(puVar6[4] + 0x10) + 0x5a) == '\0') {
            FUN_0058b330(param_1);
            return;
          }
          if ((*(char *)(puVar6[4] + 0xd) == '\0') && (iVar3 = FUN_0058b630(param_1), iVar3 != 0)) {
            return;
          }
          iVar3 = puVar6[6];
          if (*(char *)(iVar3 + 0xba1) == '\0') {
            if (*(char *)(*(int *)(iVar3 + 0xba4) + 0x52) == '\0') {
              FUN_0058b4d0();
              return;
            }
            iVar4 = FUN_0058bce0(param_1,iVar3,1);
            if (iVar4 != 0) {
              return;
            }
          }
          if (*(char *)(iVar3 + 0xba2) == '\0') {
            if ((*(int *)(iVar3 + 0xba8) != 0) &&
               (*(char *)(*(int *)(iVar3 + 0xba8) + 0x52) == '\0')) {
              FUN_0058b4d0();
              return;
            }
            iVar4 = FUN_0058bce0(param_1,iVar3,0);
            if (iVar4 != 0) {
              return;
            }
          }
          if ((((*(char *)(iVar3 + 0xba3) == '\0') && (FUN_0058be50(param_1), param_1[3] == 0)) &&
              (*(char *)(iVar3 + 0xba2) == '\x02')) && (*(char *)(iVar3 + 0xba3) != '\0')) {
            iVar4 = *(int *)(iVar3 + 0xd90);
            if (0 < iVar4) {
              piVar5 = (int *)(iVar3 + 0xd94);
              do {
                if (*piVar5 != 0) {
                  psVar1 = (short *)(*piVar5 + 0xc);
                  *psVar1 = *psVar1 + -1;
                }
                piVar5 = piVar5 + 1;
                iVar4 = iVar4 + -1;
              } while (iVar4 != 0);
            }
            iVar4 = FUN_0058c1c0(param_1,local_1e0,0x78,iVar3 + 0xd94);
            *(undefined4 *)(iVar3 + 0xd90) = 0;
            if (iVar4 != 0) {
              FUN_0053ec90(&DAT_00740420,local_1e0,iVar4);
            }
            if (*(int *)(iVar3 + 0xba8) != 0) {
              psVar1 = (short *)(*(int *)(iVar3 + 0xba8) + 0x50);
              *psVar1 = *psVar1 + -1;
              FUN_0058b520(param_1);
              *(undefined4 *)(iVar3 + 0xba8) = 0;
            }
          }
        }
        puVar6 = (undefined4 *)*puVar6;
      } while (puVar6 != param_1 + 0x13);
    }
    if (param_1[3] == 0) {
      FUN_0058c840(param_1);
    }
    pcVar2 = (code *)*param_1;
    if (pcVar2 != (code *)0x0) {
      *param_1 = 0;
      (*pcVar2)(param_1[1]);
    }
  }
  return;
}

