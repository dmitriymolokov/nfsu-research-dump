/* Decompiled from Speed.exe @ 00589c90 */
/* Module: Loader */
/* Ghidra DecompileAll */


void __fastcall FUN_00589c90(undefined4 param_1)

{
  int *piVar1;
  int *piVar2;
  int *_Memory;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  bool bVar8;
  
  if (DAT_00734514 != 0) {
    FUN_00567220(param_1);
    DAT_00734514 = 0;
  }
  piVar6 = DAT_00737bcc;
  puVar7 = &DAT_00731120;
  for (iVar5 = 0x1d; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  piVar4 = (int *)FUN_0040a880();
  piVar1 = DAT_00737bd4;
  if (piVar6 != piVar4) {
    do {
      iVar3 = DAT_007349b4;
      piVar1 = (int *)piVar6[1];
      piVar2 = (int *)*piVar6;
      _Memory = (int *)piVar6[2];
      *piVar1 = (int)piVar2;
      piVar2[1] = (int)piVar1;
      iVar5 = *(int *)(iVar3 + 0x18);
      *piVar6 = *(int *)(iVar3 + 0x10);
      *(int *)(iVar3 + 0x18) = iVar5 + -1;
      bVar8 = DAT_007349b8 != 0;
      *(int **)(iVar3 + 0x10) = piVar6;
      if (bVar8) {
        if (*(int *)(iVar3 + 0x18) == 0) {
          FUN_00567220();
          DAT_007349b4 = 0;
        }
        else {
          DAT_007349b8 = 1;
        }
      }
      piVar6 = (int *)_Memory[1];
      iVar5 = *_Memory;
      *piVar6 = iVar5;
      *(int **)(iVar5 + 4) = piVar6;
      DAT_0078ea30 = DAT_0078ea30 + -1;
      FUN_00401db0();
      _free(_Memory);
      piVar6 = piVar2;
      piVar1 = DAT_00737bd4;
    } while (piVar2 != piVar4);
  }
  while ((int **)piVar1 != &DAT_00737bd4) {
    iVar5 = *piVar1;
    piVar6 = (int *)piVar1[1];
    DAT_00737bd4 = piVar1;
    *piVar6 = iVar5;
    *(int **)(iVar5 + 4) = piVar6;
    FUN_00401db0();
    _free(piVar1);
    piVar1 = DAT_00737bd4;
  }
  DAT_00737bd4 = piVar1;
  return;
}

