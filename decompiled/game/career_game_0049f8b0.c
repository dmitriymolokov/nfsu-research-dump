/* Decompiled from Speed.exe @ 0049f8b0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


undefined4 * FUN_0049f8b0(undefined4 *param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  char *pcVar8;
  undefined4 *puVar9;
  int iVar10;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00687e98;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = param_1;
  param_1[1] = param_1;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[4] = param_2;
  uVar3 = DAT_00758ad4;
  iVar6 = DAT_007361b4;
  iVar4 = 0;
  local_4 = 0;
  if (0 < DAT_007787b0) {
    piVar7 = &DAT_00777cd4;
    do {
      if (*piVar7 == DAT_0078a410) {
        puVar9 = &DAT_00777cd0 + iVar4 * 0x57;
        goto LAB_0049f91a;
      }
      iVar4 = iVar4 + 1;
      piVar7 = piVar7 + 0x57;
    } while (iVar4 < DAT_007787b0);
  }
  puVar9 = (undefined4 *)0x0;
LAB_0049f91a:
  uVar5 = FUN_00674898();
  param_1[9] = uVar5;
  FUN_004387e0(puVar9[0x30]);
  piVar7 = (int *)(iVar6 + 0x960);
  param_1[0xc] = 0;
  local_14 = 0x1f;
  do {
    if (*(char *)(*piVar7 + 0x14) != '\0') {
      iVar6 = FUN_00674898();
      if (iVar6 != 0) {
        iVar4 = FUN_0059fb80();
        if (iVar4 == 0) {
          iVar4 = FUN_0059fb80();
        }
        puVar9 = _malloc(0x50);
        if (puVar9 == (undefined4 *)0x0) {
          puVar9 = (undefined4 *)0x0;
        }
        else {
          pcVar8 = (char *)(puVar9 + 3);
          puVar9[2] = 0;
          iVar10 = 0x40;
          iVar4 = iVar4 - (int)pcVar8;
          do {
            cVar1 = pcVar8[iVar4];
            iVar10 = iVar10 + -1;
            *pcVar8 = cVar1;
            if (cVar1 == '\0') break;
            pcVar8 = pcVar8 + 1;
          } while (iVar10 != 0);
          puVar9[0x13] = iVar6;
        }
        puVar2 = (undefined4 *)param_1[1];
        *puVar2 = puVar9;
        param_1[1] = puVar9;
        puVar9[1] = puVar2;
        *puVar9 = param_1;
        param_1[0xc] = param_1[0xc] + iVar6;
      }
    }
    piVar7 = piVar7 + 1;
    local_14 = local_14 + -1;
    if (local_14 == 0) {
      param_1[2] = 0;
      param_1[3] = *param_1;
      FUN_0049f120();
      param_1[10] = 0;
      param_1[0xd] = uVar3;
      param_1[5] = 0x43cb0000;
      param_1[6] = 0xc3340000;
      ExceptionList = local_c;
      return param_1;
    }
  } while( true );
}

