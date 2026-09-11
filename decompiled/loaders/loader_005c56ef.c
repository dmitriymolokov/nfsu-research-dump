/* Decompiled from Speed.exe @ 005c56ef */
/* Module: Loader */
/* Ghidra DecompileAll */


int __fastcall FUN_005c56ef(int param_1)

{
  int *piVar1;
  char cVar2;
  char cVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  char *pcVar8;
  char *pcVar9;
  int *piVar10;
  char *pcVar11;
  bool bVar12;
  
  if ((*(int *)(param_1 + 0x28) != 0) || (*(int *)(param_1 + 0x30) != 0)) {
    *(undefined4 *)(param_1 + 0x60) = 0xc;
    return -1;
  }
  puVar4 = *(undefined4 **)(param_1 + 0x44);
  piVar1 = (int *)(param_1 + 0x60);
  if (puVar4 == (undefined4 *)0x0) {
    iVar5 = FUN_005b291b(*(uint *)(param_1 + 0x80) | 4,piVar1);
    if (iVar5 < 0) {
      return -1;
    }
  }
  else {
    piVar7 = puVar4 + 4;
    piVar10 = piVar1;
    for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
      *piVar10 = *piVar7;
      piVar7 = piVar7 + 1;
      piVar10 = piVar10 + 1;
    }
    *(undefined4 *)(param_1 + 0x44) = puVar4[3];
    puVar4[3] = 0;
    (**(code **)*puVar4)(1);
  }
  iVar5 = *piVar1;
  if (iVar5 == 1) {
    cVar2 = *(char *)(param_1 + 0x69);
    if (cVar2 == '\0') {
      return (int)*(char *)(param_1 + 0x68);
    }
    if (*(char *)(param_1 + 0x6a) == '\0') {
      if (cVar2 == '=') {
        cVar2 = *(char *)(param_1 + 0x68);
        if (cVar2 == '!') {
          return 0x113;
        }
        if (cVar2 == '<') {
          return 0x110;
        }
        if (cVar2 == '=') {
          return 0x112;
        }
        if (cVar2 == '>') {
          return 0x111;
        }
      }
      else {
        cVar3 = *(char *)(param_1 + 0x68);
        if (cVar3 == cVar2) {
          if (cVar3 == '&') {
            return 0x114;
          }
          if (cVar3 == '|') {
            return 0x115;
          }
        }
      }
    }
  }
  else if (1 < iVar5) {
    if (iVar5 < 5) {
      return 0x117;
    }
    if (iVar5 == 9) {
      if (*(int *)(param_1 + 0x34) == 0) {
        iVar5 = 8;
        bVar12 = true;
        pcVar9 = *(char **)(param_1 + 0x68);
        pcVar8 = "defined";
        do {
          if (iVar5 == 0) break;
          iVar5 = iVar5 + -1;
          bVar12 = *pcVar9 == *pcVar8;
          pcVar9 = pcVar9 + 1;
          pcVar8 = pcVar8 + 1;
        } while (bVar12);
        if (bVar12) {
          return 0x10f;
        }
      }
      else {
        pcVar9 = *(char **)(param_1 + 0x68);
        *(undefined4 *)(param_1 + 0x34) = 0;
        if (*(int *)(param_1 + 0x38) == 0) {
          iVar5 = 3;
          bVar12 = true;
          pcVar8 = pcVar9;
          pcVar11 = "if";
          do {
            if (iVar5 == 0) break;
            iVar5 = iVar5 + -1;
            bVar12 = *pcVar8 == *pcVar11;
            pcVar8 = pcVar8 + 1;
            pcVar11 = pcVar11 + 1;
          } while (bVar12);
          if (bVar12) {
            return 0x10c;
          }
          iVar5 = 6;
          bVar12 = true;
          pcVar8 = pcVar9;
          pcVar11 = "ifdef";
          do {
            if (iVar5 == 0) break;
            iVar5 = iVar5 + -1;
            bVar12 = *pcVar8 == *pcVar11;
            pcVar8 = pcVar8 + 1;
            pcVar11 = pcVar11 + 1;
          } while (bVar12);
          if (bVar12) {
            return 0x10c;
          }
          iVar5 = 7;
          bVar12 = true;
          pcVar8 = pcVar9;
          pcVar11 = "ifndef";
          do {
            if (iVar5 == 0) break;
            iVar5 = iVar5 + -1;
            bVar12 = *pcVar8 == *pcVar11;
            pcVar8 = pcVar8 + 1;
            pcVar11 = pcVar11 + 1;
          } while (bVar12);
          if (bVar12) {
            return 0x10c;
          }
          iVar5 = 5;
          bVar12 = true;
          pcVar8 = pcVar9;
          pcVar11 = "else";
          do {
            if (iVar5 == 0) break;
            iVar5 = iVar5 + -1;
            bVar12 = *pcVar8 == *pcVar11;
            pcVar8 = pcVar8 + 1;
            pcVar11 = pcVar11 + 1;
          } while (bVar12);
          if (bVar12) {
            return 0x10a;
          }
          iVar5 = 6;
          bVar12 = true;
          pcVar8 = pcVar9;
          pcVar11 = "endif";
          do {
            if (iVar5 == 0) break;
            iVar5 = iVar5 + -1;
            bVar12 = *pcVar8 == *pcVar11;
            pcVar8 = pcVar8 + 1;
            pcVar11 = pcVar11 + 1;
          } while (bVar12);
          if (bVar12) {
            return 0x10b;
          }
          iVar5 = 5;
          bVar12 = true;
          pcVar8 = "elif";
          do {
            if (iVar5 == 0) break;
            iVar5 = iVar5 + -1;
            bVar12 = *pcVar9 == *pcVar8;
            pcVar9 = pcVar9 + 1;
            pcVar8 = pcVar8 + 1;
          } while (bVar12);
          if (bVar12) {
            piVar1 = *(int **)(*(int *)(param_1 + 0x50) + 0x38);
            if (piVar1 == (int *)0x0) {
              return 0x109;
            }
            if ((piVar1[1] != 0) && (*piVar1 == 0)) {
              return 0x109;
            }
            return 0x10d;
          }
        }
        else {
          iVar5 = 7;
          bVar12 = true;
          pcVar8 = pcVar9;
          pcVar11 = "define";
          do {
            if (iVar5 == 0) break;
            iVar5 = iVar5 + -1;
            bVar12 = *pcVar8 == *pcVar11;
            pcVar8 = pcVar8 + 1;
            pcVar11 = pcVar11 + 1;
          } while (bVar12);
          if (bVar12) {
            return 0x101;
          }
          iVar5 = 6;
          bVar12 = true;
          iVar6 = iVar5;
          pcVar8 = pcVar9;
          pcVar11 = "undef";
          do {
            if (iVar6 == 0) break;
            iVar6 = iVar6 + -1;
            bVar12 = *pcVar8 == *pcVar11;
            pcVar8 = pcVar8 + 1;
            pcVar11 = pcVar11 + 1;
          } while (bVar12);
          if (bVar12) {
            return 0x102;
          }
          iVar6 = 5;
          bVar12 = true;
          pcVar8 = pcVar9;
          pcVar11 = "line";
          do {
            if (iVar6 == 0) break;
            iVar6 = iVar6 + -1;
            bVar12 = *pcVar8 == *pcVar11;
            pcVar8 = pcVar8 + 1;
            pcVar11 = pcVar11 + 1;
          } while (bVar12);
          if (bVar12) {
            return 0x103;
          }
          iVar6 = 8;
          bVar12 = true;
          pcVar8 = pcVar9;
          pcVar11 = "include";
          do {
            if (iVar6 == 0) break;
            iVar6 = iVar6 + -1;
            bVar12 = *pcVar8 == *pcVar11;
            pcVar8 = pcVar8 + 1;
            pcVar11 = pcVar11 + 1;
          } while (bVar12);
          if (bVar12) {
            return 0x104;
          }
          bVar12 = true;
          iVar6 = iVar5;
          pcVar8 = pcVar9;
          pcVar11 = "error";
          do {
            if (iVar6 == 0) break;
            iVar6 = iVar6 + -1;
            bVar12 = *pcVar8 == *pcVar11;
            pcVar8 = pcVar8 + 1;
            pcVar11 = pcVar11 + 1;
          } while (bVar12);
          if (bVar12) {
            return 0x105;
          }
          iVar6 = 3;
          bVar12 = true;
          pcVar8 = pcVar9;
          pcVar11 = "if";
          do {
            if (iVar6 == 0) break;
            iVar6 = iVar6 + -1;
            bVar12 = *pcVar8 == *pcVar11;
            pcVar8 = pcVar8 + 1;
            pcVar11 = pcVar11 + 1;
          } while (bVar12);
          if (bVar12) {
            return 0x106;
          }
          bVar12 = true;
          iVar6 = iVar5;
          pcVar8 = pcVar9;
          pcVar11 = "ifdef";
          do {
            if (iVar6 == 0) break;
            iVar6 = iVar6 + -1;
            bVar12 = *pcVar8 == *pcVar11;
            pcVar8 = pcVar8 + 1;
            pcVar11 = pcVar11 + 1;
          } while (bVar12);
          if (bVar12) {
            return 0x107;
          }
          iVar6 = 7;
          bVar12 = true;
          pcVar8 = pcVar9;
          pcVar11 = "ifndef";
          do {
            if (iVar6 == 0) break;
            iVar6 = iVar6 + -1;
            bVar12 = *pcVar8 == *pcVar11;
            pcVar8 = pcVar8 + 1;
            pcVar11 = pcVar11 + 1;
          } while (bVar12);
          if (bVar12) {
            return 0x108;
          }
          iVar6 = 5;
          bVar12 = true;
          pcVar8 = pcVar9;
          pcVar11 = "elif";
          do {
            if (iVar6 == 0) break;
            iVar6 = iVar6 + -1;
            bVar12 = *pcVar8 == *pcVar11;
            pcVar8 = pcVar8 + 1;
            pcVar11 = pcVar11 + 1;
          } while (bVar12);
          if (bVar12) {
            return 0x109;
          }
          iVar6 = 5;
          bVar12 = true;
          pcVar8 = pcVar9;
          pcVar11 = "else";
          do {
            if (iVar6 == 0) break;
            iVar6 = iVar6 + -1;
            bVar12 = *pcVar8 == *pcVar11;
            pcVar8 = pcVar8 + 1;
            pcVar11 = pcVar11 + 1;
          } while (bVar12);
          if (bVar12) {
            return 0x10a;
          }
          bVar12 = true;
          pcVar8 = pcVar9;
          pcVar11 = "endif";
          do {
            if (iVar5 == 0) break;
            iVar5 = iVar5 + -1;
            bVar12 = *pcVar8 == *pcVar11;
            pcVar8 = pcVar8 + 1;
            pcVar11 = pcVar11 + 1;
          } while (bVar12);
          if (bVar12) {
            return 0x10b;
          }
          iVar5 = 7;
          bVar12 = true;
          pcVar8 = "pragma";
          do {
            if (iVar5 == 0) break;
            iVar5 = iVar5 + -1;
            bVar12 = *pcVar9 == *pcVar8;
            pcVar9 = pcVar9 + 1;
            pcVar8 = pcVar8 + 1;
          } while (bVar12);
          if (bVar12) {
            return 0x10e;
          }
        }
        *(undefined4 *)(param_1 + 0x34) = 1;
      }
      return 0x116;
    }
    if (iVar5 == 10) {
      return 0x118;
    }
    if ((iVar5 == 0xc) || (iVar5 == 0xd)) {
      *(undefined4 *)(param_1 + 0x28) = 1;
      return -1;
    }
  }
  return 0x119;
}

