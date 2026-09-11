/* Decompiled from Speed.exe @ 00595530 */
/* Module: Loader */
/* Ghidra DecompileAll */


void FUN_00595530(void)

{
  int ****ppppiVar1;
  int ***pppiVar2;
  int ***pppiVar3;
  int ***pppiVar4;
  int ****ppppiVar5;
  int ****ppppiVar6;
  int ****ppppiVar7;
  int ****ppppiVar8;
  int ***local_20;
  int ***local_1c;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  puStack_10 = &LAB_006855b8;
  pvStack_14 = ExceptionList;
  ppppiVar6 = &local_20;
  local_1c = (int ***)&local_20;
  ppppiVar8 = (int ****)0x0;
  local_c = 0;
  if (DAT_00779c70 != (int ****)0x0) {
    ppppiVar8 = DAT_00779c70 + -1;
  }
  ExceptionList = &pvStack_14;
  local_20 = (int ***)ppppiVar6;
  ppppiVar5 = (int ****)FUN_0040cb70();
  if (ppppiVar8 != ppppiVar5) {
    do {
      pppiVar4 = local_1c;
      ppppiVar1 = ppppiVar8 + 1;
      if (ppppiVar8[1] == (int ***)0x0) {
        ppppiVar7 = (int ****)0x0;
      }
      else {
        ppppiVar7 = (int ****)(ppppiVar8[1] + -1);
      }
      if ((*(char *)((int)ppppiVar8 + 0x15) == '\x02') ||
         (*(char *)((int)ppppiVar8 + 0x15) == '\x01')) {
        pppiVar2 = *ppppiVar1;
        pppiVar3 = ppppiVar8[2];
        *pppiVar3 = (int **)pppiVar2;
        pppiVar2[1] = (int **)pppiVar3;
        *local_1c = (int **)ppppiVar1;
        local_1c = (int ***)ppppiVar1;
        ppppiVar8[2] = pppiVar4;
        *ppppiVar1 = (int ***)&local_20;
        ppppiVar6 = (int ****)local_20;
      }
      ppppiVar8 = ppppiVar7;
    } while (ppppiVar7 != ppppiVar5);
    if (ppppiVar6 != &local_20) {
      do {
        pppiVar4 = *ppppiVar6;
        pppiVar2 = ppppiVar6[1];
        ppppiVar8 = ppppiVar6 + -1;
        *pppiVar2 = (int **)pppiVar4;
        pppiVar4[1] = (int **)pppiVar2;
        if (ppppiVar8 == (int ****)0x0) {
          ppppiVar6 = (int ****)0x0;
        }
        DAT_00779c70[1] = (int ***)ppppiVar6;
        ppppiVar6[1] = (int ***)&DAT_00779c70;
        *ppppiVar6 = (int ***)DAT_00779c70;
        DAT_00779c70 = ppppiVar6;
        if (ppppiVar8 != (int ****)0x0) {
          (*(code *)**ppppiVar8)(1);
        }
        ppppiVar6 = (int ****)local_20;
      } while ((int ****)local_20 != &local_20);
    }
  }
  local_c = 0xffffffff;
  if (ppppiVar6 != &local_20) {
    do {
      pppiVar4 = *ppppiVar6;
      pppiVar2 = ppppiVar6[1];
      *pppiVar2 = (int **)pppiVar4;
      pppiVar4[1] = (int **)pppiVar2;
      if (ppppiVar6 + -1 != (int ****)0x0) {
        (*(code *)*ppppiVar6[-1])(1);
      }
      ppppiVar6 = (int ****)local_20;
    } while ((int ****)local_20 != &local_20);
  }
  ExceptionList = pvStack_14;
  return;
}

