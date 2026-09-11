/* Decompiled from Speed.exe @ 00672017 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00672017(UINT param_1,int param_2,int param_3)

{
  HANDLE hProcess;
  undefined4 *puVar1;
  bool bVar2;
  UINT uExitCode;
  
  __lock(8);
  if (DAT_00717ac8 == 1) {
    uExitCode = param_1;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  _DAT_00717ac4 = 1;
  DAT_00717ac0 = (undefined1)param_3;
  if (param_2 == 0) {
    if (DAT_00793348 != (undefined4 *)0x0) {
      DAT_00793344 = DAT_00793344 + -1;
      bVar2 = DAT_00793344 < DAT_00793348;
      while (!bVar2) {
        if ((code *)*DAT_00793344 != (code *)0x0) {
          (*(code *)*DAT_00793344)();
        }
        DAT_00793344 = DAT_00793344 + -1;
        bVar2 = DAT_00793344 < DAT_00793348;
      }
    }
    puVar1 = &DAT_006d4a68;
    do {
      if ((code *)*puVar1 != (code *)0x0) {
        (*(code *)*puVar1)();
      }
      puVar1 = puVar1 + 1;
    } while (puVar1 < &DAT_006d4a78);
  }
  puVar1 = &DAT_006d4a7c;
  do {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
    puVar1 = puVar1 + 1;
  } while (puVar1 < &DAT_006d4a84);
  if (param_3 == 0) {
    DAT_00717ac8 = 1;
    ___crtExitProcess(param_1);
  }
  else {
    FUN_0067733f(8);
  }
  return;
}

