/* Decompiled from Speed.exe @ 005c0e94 */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 * __thiscall FUN_005c0e94(undefined4 param_1,int param_2,int param_3)

{
  int *piVar1;
  void *pvVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 **ppuVar7;
  undefined4 uVar8;
  char *pcVar9;
  undefined4 uVar10;
  undefined4 *local_14;
  int local_10;
  uint local_c;
  undefined4 local_8;
  
  local_14 = (undefined4 *)0x0;
  ppuVar7 = &local_14;
  local_8 = param_1;
  if (param_3 == 0) {
LAB_005c104e:
    local_14 = (undefined4 *)0x0;
  }
  else {
    do {
      if (*(int *)(param_3 + 8) == 0) {
LAB_005c1041:
        if (local_14 != (undefined4 *)0x0) {
          (**(code **)*local_14)(1);
        }
        goto LAB_005c104e;
      }
      pvVar2 = _malloc(0x14);
      if (pvVar2 == (void *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        puVar3 = (undefined4 *)FUN_005d78db(0,0,"Stmts");
      }
      *ppuVar7 = puVar3;
      if (puVar3 == (undefined4 *)0x0) goto LAB_005c1041;
      pvVar2 = _malloc(0x30);
      if (pvVar2 == (void *)0x0) {
        iVar4 = 0;
      }
      else {
        iVar4 = FUN_005d7db0(0,0,0,0);
      }
      if (iVar4 == 0) goto LAB_005c1041;
      (*ppuVar7)[2] = iVar4;
      ppuVar7 = (undefined4 **)(*ppuVar7 + 3);
      local_c = 1;
      local_10 = 0;
      if (param_2 != 0) {
        iVar5 = FUN_005d7885(param_2);
        *(int *)(iVar4 + 0x18) = iVar5;
        if (iVar5 == 0) goto LAB_005c1041;
      }
      for (iVar5 = *(int *)(param_3 + 8); *(int *)(iVar5 + 4) != 2; iVar5 = *(int *)(iVar5 + 8)) {
        pvVar2 = _malloc(0x18);
        if (pvVar2 == (void *)0x0) {
          iVar6 = 0;
        }
        else {
          iVar6 = FUN_005d8044();
        }
        if (iVar6 == 0) goto LAB_005c1041;
        *(undefined4 *)(iVar6 + 0x10) = *(undefined4 *)(iVar4 + 0x18);
        *(int *)(iVar4 + 0x18) = iVar6;
        piVar1 = (int *)(iVar6 + 0x14);
        if (*(int *)(iVar5 + 0xc) == 0) {
          local_10 = 0xc00;
LAB_005c0f96:
          *piVar1 = 1;
        }
        else {
          iVar6 = FUN_005c0e2d(*(int *)(iVar5 + 0xc),piVar1);
          if (iVar6 < 0) {
            local_10 = 0xbf2;
            goto LAB_005c0f96;
          }
        }
        local_c = *piVar1 * local_c;
      }
      iVar6 = FUN_005d7885(iVar5);
      *(int *)(iVar4 + 0x14) = iVar6;
      if (iVar6 == 0) goto LAB_005c1041;
      if (local_10 == 0xbf2) {
        uVar10 = *(undefined4 *)(iVar5 + 0x18);
        pcVar9 = "\'%s\': array dimensions must be literal scalar expressions";
        uVar8 = 0xbf2;
LAB_005c1035:
        FUN_005ba1d9(local_8,iVar5 + 0x10,uVar8,pcVar9,uVar10);
        goto LAB_005c1041;
      }
      if (local_10 == 0xc00) {
        uVar10 = *(undefined4 *)(iVar5 + 0x18);
        pcVar9 = "\'%s\': array dimensions of type must be explicit";
        uVar8 = 0xc00;
        goto LAB_005c1035;
      }
      if ((local_c == 0) || (0x10000 < local_c)) {
        uVar10 = *(undefined4 *)(iVar5 + 0x18);
        pcVar9 = "\'%s\': array dimension must be between 1 and 65536";
        uVar8 = 0xbf3;
        goto LAB_005c1035;
      }
      iVar4 = FUN_005ba3df(iVar4,1);
      if (iVar4 < 0) goto LAB_005c1041;
      param_3 = *(int *)(param_3 + 0xc);
    } while (param_3 != 0);
  }
  return local_14;
}

