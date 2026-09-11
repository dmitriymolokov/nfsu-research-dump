/* Decompiled from Speed.exe @ 00572590 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileVAs */


void FUN_00572590(int *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  code *pcVar4;
  int iVar5;
  undefined4 *puVar6;
  
  if (param_1[1] == 0) {
    if ((*param_1 != 0) && (param_1[6] == 0)) {
      iVar5 = FUN_00572b50(param_2,0);
      if (iVar5 != 0) {
        *(undefined4 *)(iVar5 + 0x150) = 0;
        *(undefined1 *)(iVar5 + 0x3f) = 1;
        FUN_00572d90(param_1);
        *(undefined1 *)(iVar5 + 0x3f) = 0;
      }
    }
  }
  else {
    iVar5 = FUN_00572b50(param_2,0);
    if (iVar5 != 0) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((int *)param_1[0x1a] == param_1 + 0x1a) {
      puVar6 = _malloc(0x9558);
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        puVar6[10] = 0;
        puVar6[0xb] = 0;
      }
      puVar1 = (undefined4 *)param_1[0x1b];
      *puVar1 = puVar6;
      param_1[0x1b] = (int)puVar6;
      puVar6[1] = puVar1;
      *puVar6 = param_1 + 0x1a;
    }
    piVar2 = (int *)param_1[0x1a];
    if (piVar2 != param_1 + 0x1a) {
      iVar5 = *piVar2;
      piVar3 = (int *)piVar2[1];
      *piVar3 = iVar5;
      *(int **)(iVar5 + 4) = piVar3;
      piVar3 = (int *)param_1[0x1d];
      *piVar3 = (int)piVar2;
      param_1[0x1d] = (int)piVar2;
      *piVar2 = (int)(param_1 + 0x1c);
      piVar2[1] = (int)piVar3;
      FUN_00571a40();
      piVar2[0x54] = 0;
      *(undefined1 *)((int)piVar2 + 0x3e) = 1;
      FUN_00572d90(param_1);
      *(undefined1 *)((int)piVar2 + 0x3e) = 0;
      piVar2[0x55] = piVar2[0x54];
      return;
    }
  }
  return;
}

