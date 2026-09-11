/* Decompiled from Speed.exe @ 0058a850 */
/* Module: Loader */
/* Ghidra DecompileAll */


void FUN_0058a850(void)

{
  char cVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int extraout_EDX;
  int *piVar9;
  
  if (DAT_0073448c != 0) {
    FUN_0063f0a0(0);
    FUN_00594870();
  }
  piVar9 = DAT_00737bb4;
  if (DAT_0073450c == 0) goto joined_r0x0058a97b;
  iVar4 = DAT_00737bb4[0x1a];
  if (DAT_00737bb4[0x14] == 0) {
    if (DAT_0073459c == 0) {
      if (DAT_007345a0 != 0) {
        FUN_0057c3b0(iVar4,4,6);
      }
    }
    else {
      iVar4 = FUN_0057c480(4,6);
      if (DAT_007345a4[4] <= *DAT_007345a4) {
        FUN_0057c580();
        iVar4 = extraout_EDX;
      }
      if (iVar4 != 1) {
        iVar2 = piVar9[0x1a];
        while (iVar2 == 1) {
          if (DAT_0073448c != 0) {
            FUN_0063f0a0(0);
            FUN_00594870();
          }
          iVar2 = piVar9[0x1a];
        }
      }
    }
  }
  if (iVar4 == 2) {
    iVar4 = *piVar9;
    piVar6 = (int *)piVar9[1];
    *piVar6 = iVar4;
    *(int **)(iVar4 + 4) = piVar6;
    DAT_0073450c = DAT_0073450c + -1;
    if (piVar9[0x1b] == 0) {
      if (piVar9[0x11] != piVar9[0x10]) {
        piVar9[0x1a] = 0;
        piVar6 = DAT_00737bc0;
        *DAT_00737bc0 = (int)piVar9;
        DAT_00737bc0 = piVar9;
        piVar9[1] = (int)piVar6;
        *piVar9 = (int)&DAT_00737bbc;
        goto joined_r0x0058a97b;
      }
      goto LAB_0058a959;
    }
  }
  else {
    if (iVar4 != 3) goto joined_r0x0058a97b;
    iVar4 = *piVar9;
    piVar6 = (int *)piVar9[1];
    *piVar6 = iVar4;
    *(int **)(iVar4 + 4) = piVar6;
    DAT_0073450c = DAT_0073450c + -1;
LAB_0058a959:
    FUN_0058a460();
  }
  iVar2 = DAT_00734508;
  iVar4 = *(int *)(DAT_00734508 + 0x18);
  *piVar9 = *(int *)(DAT_00734508 + 0x10);
  *(int *)(iVar2 + 0x18) = iVar4 + -1;
  *(int **)(iVar2 + 0x10) = piVar9;
joined_r0x0058a97b:
  do {
    if ((2 < DAT_0073450c) || ((int **)DAT_00737bbc == &DAT_00737bbc)) {
      return;
    }
    FUN_00564990(&DAT_00737bbc,&LAB_0058a490);
    if (0 < DAT_0073450c) {
      pcVar5 = &DAT_00731198;
      do {
        cVar3 = *(char *)((int)(DAT_00737bbc + -0x1cc463) + (int)pcVar5);
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        if ((cVar3 == '\0') || (cVar1 == '\0')) break;
      } while (cVar3 == cVar1);
      if (cVar3 != cVar1) {
        return;
      }
    }
    piVar6 = (int *)FUN_00567160();
    piVar9 = (int *)0x0;
    if (piVar6 != (int *)0x0) {
      *piVar6 = 0;
      piVar6[1] = 0;
      piVar6[2] = 0;
      piVar6[3] = 0;
      piVar6[4] = 0;
      piVar9 = piVar6;
    }
    piVar6 = DAT_00737bbc;
    piVar7 = (int *)FUN_0040a880();
    while ((piVar6 != piVar7 && (cVar3 = FUN_0058a640(), cVar3 != '\0'))) {
      piVar6 = (int *)*piVar6;
    }
    if (piVar9[4] < 2) {
      if (*piVar9 != 0) {
        FUN_00565ce0();
      }
      iVar2 = DAT_00734508;
      iVar4 = *(int *)(DAT_00734508 + 0x18);
      *piVar9 = *(int *)(DAT_00734508 + 0x10);
      *(int *)(iVar2 + 0x18) = iVar4 + -1;
      *(int **)(iVar2 + 0x10) = piVar9;
    }
    else {
      piVar8 = (int *)FUN_0058a700();
      iVar4 = *piVar8;
      piVar6 = (int *)piVar8[1];
      *piVar6 = iVar4;
      *(int **)(iVar4 + 4) = piVar6;
      piVar7 = DAT_00737bbc;
      piVar6 = DAT_00737bbc + 1;
      DAT_00737bbc = piVar8;
      *piVar6 = (int)piVar8;
      piVar8[1] = (int)&DAT_00737bbc;
      *piVar8 = (int)piVar7;
      iVar4 = 0;
      if (0 < piVar9[4]) {
        piVar6 = piVar9 + 5;
        do {
          iVar2 = *(int *)*piVar6;
          piVar7 = (int *)((int *)*piVar6)[1];
          *piVar7 = iVar2;
          *(int **)(iVar2 + 4) = piVar7;
          iVar4 = iVar4 + 1;
          piVar6 = piVar6 + 1;
        } while (iVar4 < piVar9[4]);
      }
    }
    piVar7 = DAT_00737bbc;
    iVar4 = *DAT_00737bbc;
    piVar6 = (int *)DAT_00737bbc[1];
    piVar9 = DAT_00737bbc + 1;
    *piVar6 = iVar4;
    *(int **)(iVar4 + 4) = piVar6;
    DAT_00731198 = (char)piVar7[3];
    piVar6 = piVar7 + 3;
    if (DAT_00731198 != '\0') {
      pcVar5 = &DAT_00731198;
      do {
        cVar3 = *(char *)((int)piVar6 + 1);
        piVar6 = (int *)((int)piVar6 + 1);
        pcVar5 = pcVar5 + 1;
        *pcVar5 = cVar3;
      } while (cVar3 != '\0');
    }
    FUN_0058a550();
    piVar6 = DAT_00737bb8;
    *DAT_00737bb8 = (int)piVar7;
    DAT_00737bb8 = piVar7;
    *piVar9 = (int)piVar6;
    DAT_0073450c = DAT_0073450c + 1;
    *piVar7 = (int)&DAT_00737bb4;
  } while( true );
}

