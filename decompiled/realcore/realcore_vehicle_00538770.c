/* Decompiled from Speed.exe @ 00538770 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileModule */


void FUN_00538770(void)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_ESI;
  LARGE_INTEGER local_c;
  
  iVar1 = DAT_00740500;
  QueryPerformanceCounter(&local_c);
  uVar2 = __allshr();
  *(int *)(unaff_ESI + 0x90) = iVar1 + 0x40;
  *(undefined4 *)(unaff_ESI + 0x7c) = uVar2;
  *(undefined4 *)(unaff_ESI + 0x94) = 0;
  return;
}

