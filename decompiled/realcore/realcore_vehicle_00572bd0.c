/* Decompiled from Speed.exe @ 00572bd0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileVAs */


void __fastcall FUN_00572bd0(int param_1)

{
  int ***pppiVar1;
  int ***pppiVar2;
  int ****ppppiVar3;
  undefined4 unaff_EDI;
  int ***local_20;
  int ***local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  puStack_10 = &LAB_00685168;
  local_14 = ExceptionList;
  local_20 = (int ***)&local_20;
  local_1c = (int ***)&local_20;
  local_c = 0;
  ExceptionList = &local_14;
  ppppiVar3 = (int ****)FUN_00572b50(unaff_EDI,0);
  while (ppppiVar3 != (int ****)0x0) {
    pppiVar1 = *ppppiVar3;
    pppiVar2 = ppppiVar3[1];
    *pppiVar2 = (int **)pppiVar1;
    pppiVar1[1] = (int **)pppiVar2;
    *local_1c = (int **)ppppiVar3;
    ppppiVar3[1] = local_1c;
    *ppppiVar3 = (int ***)&local_20;
    local_1c = (int ***)ppppiVar3;
    ppppiVar3 = (int ****)FUN_00572b50(unaff_EDI,0);
  }
  FUN_00564990(&local_20,&LAB_00572bb0);
  if ((int ****)local_20 != &local_20) {
    pppiVar1 = *(int ****)(param_1 + 0x74);
    *local_1c = (int **)(param_1 + 0x70);
    local_20[1] = (int **)pppiVar1;
    *pppiVar1 = (int **)local_20;
    *(int ****)(param_1 + 0x74) = local_1c;
    ExceptionList = local_14;
    return;
  }
  if ((int ****)local_20 != &local_20) {
    do {
      pppiVar1 = (int ***)*local_20;
      pppiVar2 = (int ***)local_20[1];
      *pppiVar2 = (int **)pppiVar1;
      pppiVar1[1] = (int **)pppiVar2;
      _free(local_20);
    } while ((int ****)local_20 != &local_20);
  }
  ExceptionList = local_14;
  return;
}

