/* Decompiled from Speed.exe @ 006707a0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


undefined4 thunk_FUN_006706c0(int param_1)

{
  if (*(int *)(param_1 + 0xbc) != 1) {
    if (*(int *)(param_1 + 0xbc) == 4) {
      *(undefined4 *)(param_1 + 0xbc) = 6;
      do {
        Sleep(0);
      } while (*(int *)(param_1 + 0xbc) == 6);
    }
    *(undefined4 *)(param_1 + 0xbc) = 8;
    do {
      Sleep(0);
    } while (*(int *)(param_1 + 0xbc) != 1);
    if (*(HANDLE *)(param_1 + 0x6c) != (HANDLE)0xffffffff) {
      SetCommMask(*(HANDLE *)(param_1 + 0x6c),2);
      PurgeComm(*(HANDLE *)(param_1 + 0x6c),0xf);
      CloseHandle(*(HANDLE *)(param_1 + 0x6c));
      *(undefined4 *)(param_1 + 0x6c) = 0xffffffff;
    }
  }
  return 0;
}

