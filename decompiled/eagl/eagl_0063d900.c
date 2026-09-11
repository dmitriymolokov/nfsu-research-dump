/* Decompiled from Speed.exe @ 0063d900 */
/* Module: EAGL */
/* Ghidra DecompileAll */


undefined4 FUN_0063d900(uint param_1)

{
  HANDLE hObject;
  int iVar1;
  
  if ((((DAT_0070f48c != 0) && ((int)param_1 < 0)) && ((int)~param_1 < DAT_0070f488)) &&
     (iVar1 = ~param_1 * 0x24, *(char *)(iVar1 + DAT_0070f48c) != '\0')) {
    SetLastError(0);
    if (*(int *)(iVar1 + 0x10 + DAT_0070f48c) != -1) {
      UnmapViewOfFile(*(LPCVOID *)(iVar1 + 0x14 + DAT_0070f48c));
      CloseHandle(*(HANDLE *)(iVar1 + 0x10 + DAT_0070f48c));
    }
    hObject = *(HANDLE *)(iVar1 + 4 + DAT_0070f48c);
    if (hObject != (HANDLE)0xffffffff) {
      CloseHandle(hObject);
    }
    *(undefined1 *)(iVar1 + DAT_0070f48c) = 0;
    return 1;
  }
  SetLastError(6);
  return 0;
}

