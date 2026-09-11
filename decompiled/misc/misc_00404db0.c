/* Decompiled from Speed.exe @ 00404db0 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void FUN_00404db0(int param_1,char *param_2,int param_3)

{
  undefined4 *puVar1;
  int *****lpFileName;
  int ******ppppppiVar2;
  int ******ppppppiVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  void *pvVar8;
  int *piVar9;
  undefined4 uVar10;
  HANDLE hFindFile;
  char *pcVar11;
  char cVar12;
  uint uVar13;
  int *******pppppppiVar14;
  int iVar15;
  uint local_590;
  int local_58c;
  undefined1 local_584 [48];
  int ******local_554 [4];
  char acStack_541 [1025];
  _WIN32_FIND_DATAA local_140;
  
  uVar13 = 0;
  iVar15 = 0;
  bVar4 = false;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  bVar6 = false;
  local_590 = 0;
  local_58c = 1;
  bVar5 = false;
  cVar7 = '\0';
  do {
    cVar12 = *param_2;
    pcVar11 = param_2 + 1;
    if (cVar12 == '\r') {
      cVar12 = *pcVar11;
      pcVar11 = param_2 + 2;
    }
    param_2 = pcVar11;
    if (cVar12 == '\0') {
      cVar12 = '\n';
LAB_00404e10:
      if (uVar13 != 0) {
        if (param_3 == 0) {
          return;
        }
        uVar10 = FUN_004051a0();
        FUN_00404ab0("Unterminated quotes %s\n",uVar10);
        return;
      }
      local_58c = local_58c + 1;
      bVar5 = false;
LAB_00404e20:
      if (bVar4) {
        if ((uVar13 == 0) &&
           ((((cVar12 == ' ' || (cVar12 == '\n')) ||
             ((cVar12 == '\t' || ((cVar12 == '=' || (cVar12 == ',')))))) ||
            ((cVar12 == '\r' || ((iVar15 != 0 && (acStack_541[iVar15] == ':')))))))) {
          acStack_541[iVar15 + 1] = '\0';
          if (bVar6) {
            FUN_00404b20();
            pvVar8 = _malloc(0x78);
            if (pvVar8 == (void *)0x0) {
              piVar9 = (int *)0x0;
            }
            else {
              piVar9 = (int *)FUN_00404b50(local_58c,*(undefined4 *)(param_1 + 8));
            }
            *(int **)(param_1 + 0x3c) = piVar9;
            *(undefined4 *)(param_1 + 0x38) = 1;
            puVar1 = *(undefined4 **)(param_1 + 0x34);
            *puVar1 = piVar9;
            *(int **)(param_1 + 0x34) = piVar9;
            piVar9[1] = (int)puVar1;
            *piVar9 = param_1 + 0x30;
          }
          else {
            if (*(int *)(param_1 + 0x3c) == 0) {
              if (param_3 == 0) {
                return;
              }
              uVar10 = FUN_004051a0();
              FUN_00404ab0("No command %s\n",uVar10);
              return;
            }
            FUN_00404b90(acStack_541 + 1);
          }
          bVar4 = false;
          iVar15 = 0;
          uVar13 = local_590;
        }
        else if (iVar15 < 0x3ff) {
          acStack_541[iVar15 + 1] = cVar12;
          iVar15 = iVar15 + 1;
          if ((cVar12 != ':') || (bVar6 = true, uVar13 != 0)) goto LAB_00405017;
        }
      }
      else if (((((cVar12 != ' ') && (cVar12 != '\n')) && (cVar12 != '\t')) &&
               ((cVar12 != '=' && (cVar12 != ',')))) && (cVar12 != '\r')) {
        iVar15 = 1;
        acStack_541[1] = cVar12;
        bVar4 = true;
LAB_00405017:
        bVar6 = false;
      }
    }
    else {
      if (cVar12 == '\n') goto LAB_00404e10;
      if (!bVar5) {
        if (cVar12 == '\"') {
          if ((uVar13 == 0) || (*pcVar11 != '\"')) {
            if ((cVar7 == '\"') && ((*(int *)(param_1 + 0x38) != 0 && (iVar15 == 0)))) {
              FUN_00404b90(&DAT_006b9172);
              uVar13 = local_590;
            }
            uVar13 = ~uVar13;
            local_590 = uVar13;
          }
          else if (bVar4) {
            if (iVar15 < 0x3ff) {
              acStack_541[iVar15 + 1] = '\"';
              iVar15 = iVar15 + 1;
              cVar12 = '\"';
              param_2 = pcVar11 + 1;
            }
          }
          else {
            bVar6 = false;
            acStack_541[1] = cVar12;
            iVar15 = 1;
            bVar4 = true;
            param_2 = pcVar11 + 1;
          }
          goto LAB_0040501b;
        }
        if (((cVar12 == '/') && (cVar7 == '/')) && (uVar13 == 0)) {
          iVar15 = iVar15 + -1;
          bVar5 = true;
          if (iVar15 == 0) {
            bVar4 = false;
          }
          goto LAB_0040501b;
        }
        goto LAB_00404e20;
      }
    }
LAB_0040501b:
    cVar7 = cVar12;
    if (param_2[-1] == '\0') {
      for (pppppppiVar14 = *(int ********)(param_1 + 0x30);
          pppppppiVar14 != (int *******)(param_1 + 0x30);
          pppppppiVar14 = (int *******)*pppppppiVar14) {
        iVar15 = __stricmp((char *)pppppppiVar14[4],"INCLUDESCRIPT:");
        if (iVar15 == 0) {
          if (pppppppiVar14[0xe] == (int ******)0x1) {
            lpFileName = pppppppiVar14[0xf][2];
            hFindFile = FindFirstFileA((LPCSTR)lpFileName,&local_140);
            if (hFindFile == (HANDLE)0xffffffff) {
              if (param_3 != 0) {
                FUN_00404ab0("Could not find \'INCLUDESCRIPT:\' file \'%s\' at line %d in %s\n",
                             lpFileName,pppppppiVar14[0x11],pppppppiVar14[0x14]);
              }
            }
            else {
              FindClose(hFindFile);
              FUN_00404bd0(lpFileName,1);
              while ((int *******)local_554[0] != local_554) {
                ppppppiVar2 = (int ******)*local_554[0];
                ppppppiVar3 = (int ******)local_554[0][1];
                *ppppppiVar3 = (int *****)ppppppiVar2;
                ppppppiVar2[1] = (int *****)ppppppiVar3;
                ppppppiVar2 = *pppppppiVar14;
                *pppppppiVar14 = local_554[0];
                ppppppiVar2[1] = (int *****)local_554[0];
                local_554[0][1] = (int *****)pppppppiVar14;
                *local_554[0] = (int *****)ppppppiVar2;
                pppppppiVar14 = (int *******)local_554[0];
              }
              FUN_00404cc0(local_584);
            }
          }
          else if (param_3 != 0) {
            FUN_00404ab0("Expected 1 argument to INCLUDESCRIPT:  at line %d in %s\n",
                         pppppppiVar14[0x11],pppppppiVar14[0x14]);
          }
        }
      }
      *(undefined4 *)(param_1 + 0x3c) = 0;
      *(undefined4 *)(param_1 + 0x38) = 0;
      return;
    }
  } while( true );
}

