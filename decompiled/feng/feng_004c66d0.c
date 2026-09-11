/* Decompiled from Speed.exe @ 004c66d0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004c66d0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  char *pcVar9;
  int *piVar10;
  undefined *local_10;
  int local_c;
  undefined *local_8;
  
  local_c = 0;
  if (0 < DAT_0075ee00) {
    local_8 = &DAT_0075ac60;
    iVar7 = DAT_00734588;
    do {
      if (((int)local_8 < 0x75ac60) || (local_10 = local_8, 0x75edff < (int)local_8)) {
        local_10 = (undefined *)0x0;
      }
      iVar5 = 0;
      piVar8 = (int *)(iVar7 + 0xd0);
      do {
        if (*piVar8 == *(int *)(local_10 + 8)) {
          iVar5 = iVar5 * 0xc90 + iVar7;
          goto LAB_004c6742;
        }
        iVar5 = iVar5 + 1;
        piVar8 = piVar8 + 0x324;
      } while (iVar5 < 0x23);
      iVar5 = 0;
LAB_004c6742:
      iVar5 = *(int *)(iVar5 + 0xc50) * 0xc90 + iVar7;
      if (iVar5 != 0) {
        uVar6 = 0;
        _DAT_00735e70 = 0;
        if (*(short *)(iVar5 + 0xc58) != 0) {
          if (DAT_0073766c != 0) {
            piVar8 = (int *)(DAT_00737668 + 0x24);
            do {
              if ((piVar8[-1] == 0) && (*piVar8 == *(int *)(iVar5 + 0xc50))) {
                if (*(char *)(uVar6 * 0x34 + 0x30 + DAT_00737668) != '\0') goto LAB_004c67ce;
                break;
              }
              uVar6 = uVar6 + 1;
              piVar8 = piVar8 + 0xd;
            } while (uVar6 < DAT_0073766c);
          }
          cVar4 = FUN_005a1630();
          if (cVar4 == '\0') goto LAB_004c6839;
        }
LAB_004c67ce:
        piVar8 = _malloc(0x740);
        if (piVar8 == (int *)0x0) {
          piVar8 = (int *)0x0;
        }
        else {
          iVar7 = *(int *)(local_10 + 0x338);
          iVar1 = *(int *)(local_10 + 0x344);
          FUN_00417600();
          piVar8[0x1cc] = iVar5;
          piVar8[0x1cd] = iVar7;
          piVar8[0x1ce] = iVar1;
        }
        FUN_004ac5a0(local_10,0,piVar8 + 4);
        puVar2 = *(undefined4 **)(param_1 + 0x44);
        *puVar2 = piVar8;
        *(int **)(param_1 + 0x44) = piVar8;
        piVar8[1] = (int)puVar2;
        *piVar8 = param_1 + 0x40;
        iVar7 = DAT_00734588;
      }
LAB_004c6839:
      local_c = local_c + 1;
      local_8 = local_8 + 0x348;
    } while (local_c < DAT_0075ee00);
  }
  piVar8 = (int *)(param_1 + 0x40);
  FUN_00564990(piVar8,&LAB_004c2bc0);
  piVar10 = (int *)*piVar8;
  if (piVar10 != piVar8) {
    do {
      iVar7 = *(int *)(piVar10[0x1cc] + 0xc50);
      if ((((iVar7 == 0x13) || (iVar7 == 0x11)) || (iVar7 == 0x12)) || (iVar7 == 0x10)) {
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
      iVar7 = FUN_004f8730(param_1 + 0x4c,piVar10[0x1ce],0,!bVar3);
      iVar5 = *(int *)(piVar10[0x1cc] + 0xc50) * 0xc90 + DAT_00734588;
      pcVar9 = (char *)(iVar5 + 0xc0);
      if ((DAT_00734998 != 0) && (*(int *)(iVar5 + 0xc50) == 0xe)) {
        pcVar9 = "HONDA";
      }
      iVar5 = FUN_004f42f0("CARSELECT_MANUFACTURER_%s",pcVar9);
      if ((iVar7 != 0) && (*(int *)(iVar7 + 0x24) != iVar5)) {
        *(int *)(iVar7 + 0x24) = iVar5;
        *(uint *)(iVar7 + 0x1c) = *(uint *)(iVar7 + 0x1c) | 0x400000;
      }
      piVar10 = (int *)*piVar10;
    } while (piVar10 != piVar8);
  }
  piVar10 = (int *)*piVar8;
  *(int **)(param_1 + 0x48) = piVar10;
  for (; piVar10 != piVar8; piVar10 = (int *)*piVar10) {
    if (piVar10[0x1ce] == DAT_00758c28) {
      *(int **)(param_1 + 0x48) = piVar10;
    }
  }
  DAT_00758c28 = *(undefined4 *)(*(int *)(param_1 + 0x48) + 0x738);
  FUN_004f8960();
  return;
}

