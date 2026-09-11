/* Decompiled from Speed.exe @ 0066ce50 */
/* Module: Audio */
/* Ghidra DecompileAll */


undefined4 FUN_0066ce50(void)

{
  int iVar1;
  DWORD DVar2;
  
  iVar1 = FUN_00668d10(&DAT_0071793c);
  if (iVar1 != 0) {
    DVar2 = GetTickCount();
    do {
      iVar1 = FUN_0066c900(DVar2);
    } while (0 < iVar1);
    DAT_00717938 = 0;
    FUN_00668df0(&DAT_0071793c);
    return 0;
  }
  DAT_00717938 = DAT_00717938 + 1;
  return 0;
}

