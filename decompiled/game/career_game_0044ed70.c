/* Decompiled from Speed.exe @ 0044ed70 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


int * FUN_0044ed70(int *param_1,float param_2,char param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  bool bVar8;
  bool bVar9;
  int *local_10;
  int local_c;
  
  iVar1 = *(int *)(*param_1 + 0x3c);
  local_10 = (int *)0x0;
  local_c = 0;
  piVar6 = (int *)0x0;
  if ('\0' < *(char *)(iVar1 + 0x1c)) {
    do {
      iVar5 = FUN_00468820(local_c);
      if (param_2 <= *(float *)(iVar5 + 0x60)) {
        iVar5 = *(int *)(iVar5 + 100);
        cVar4 = *(char *)(*(int *)(iVar5 + 600) + 0x15);
        if ((cVar4 == '\0') && (*(char *)(*(int *)(iVar5 + 0x25c) + 0x15) == '\0')) {
          iVar7 = *(int *)(*(int *)(iVar5 + 600) + 0x140);
          if (iVar7 == *param_1) {
            iVar7 = *(int *)(*(int *)(iVar5 + 0x25c) + 0x140);
          }
          iVar5 = FUN_0057b4e0(iVar7);
          if (iVar5 != -1) {
            piVar6 = param_1 + iVar5 * 0xe + 2;
LAB_0044ee58:
            if (piVar6 != (int *)0x0) {
              if (param_3 != '\0') {
                iVar5 = piVar6[0xd];
                iVar7 = FUN_00647b70();
                if ((iVar7 != 6) || (*(int *)(*(int *)(*(int *)(iVar5 + 0x1d4) + 0x90) + 0x1c) == 0)
                   ) goto LAB_0044ef9e;
              }
              if (local_10 != (int *)0x0) {
                iVar5 = piVar6[0xd];
                iVar7 = FUN_00647b70();
                if (((iVar7 != 6) ||
                    (*(int *)(*(int *)(*(int *)(*(int *)(iVar5 + 0x1d4) + 0x90) + 0x14) + 4) != 1))
                   || (cVar4 = FUN_0057a6b0(), cVar4 != '\0')) {
                  iVar5 = piVar6[0xd];
                  bVar8 = false;
                  iVar7 = FUN_00647b70();
                  if (iVar7 == 6) {
                    bVar8 = *(int *)(*(int *)(*(int *)(*(int *)(iVar5 + 0x1d4) + 0x90) + 0x14) + 4)
                            == 1;
                  }
                  iVar5 = local_10[0xd];
                  bVar9 = false;
                  iVar7 = FUN_00647b70();
                  if (iVar7 == 6) {
                    bVar9 = *(int *)(*(int *)(*(int *)(*(int *)(iVar5 + 0x1d4) + 0x90) + 0x14) + 4)
                            == 1;
                  }
                  if (bVar8 == bVar9) {
                    fVar2 = (float)local_10[4] - (float)param_1[(char)param_1[0xe2] * 0xe + 6];
                    fVar3 = (float)piVar6[4] - (float)param_1[(char)param_1[0xe2] * 0xe + 6];
                    if (((fVar2 < DAT_006cc7a4) && (DAT_006cc7a4 < fVar3)) || (fVar3 < fVar2))
                    goto LAB_0044ef9a;
                  }
                  goto LAB_0044ef9e;
                }
              }
LAB_0044ef9a:
              local_10 = piVar6;
            }
          }
        }
        else {
          if (cVar4 == '\0') {
            bVar8 = *(char *)(*(int *)(iVar5 + 0x25c) + 0x15) == '\x04';
          }
          else {
            if (cVar4 != '\x04') goto LAB_0044ef9e;
            bVar8 = *(char *)(*(int *)(iVar5 + 0x25c) + 0x15) == '\0';
          }
          if (bVar8) {
            FUN_00466450();
            piVar6 = (int *)FUN_0057b550();
            goto LAB_0044ee58;
          }
        }
      }
LAB_0044ef9e:
      local_c = local_c + 1;
      piVar6 = local_10;
    } while (local_c < *(char *)(iVar1 + 0x1c));
  }
  return piVar6;
}

