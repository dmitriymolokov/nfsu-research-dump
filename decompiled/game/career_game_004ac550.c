/* Decompiled from Speed.exe @ 004ac550 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void __fastcall FUN_004ac550(int param_1,int param_2)

{
  int iVar1;
  int unaff_ESI;
  
  if (unaff_ESI == 0) {
    *(undefined1 *)(param_1 + 0x10 + param_2) = 0;
    *(undefined1 *)(param_1 + 0x88 + param_2) = 0;
    *(undefined4 *)(param_2 + 0x100 + param_1 * 4) = 0;
    return;
  }
  *(undefined1 *)(param_1 + 0x10 + param_2) = *(undefined1 *)(unaff_ESI + 0x10);
  iVar1 = 0;
  do {
    if (*(int *)(unaff_ESI + 4) == (&DAT_006fb730)[iVar1]) goto LAB_004ac572;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x20);
  iVar1 = 0;
LAB_004ac572:
  *(char *)(param_1 + 0x88 + param_2) = (char)iVar1;
  *(undefined4 *)(param_2 + 0x100 + param_1 * 4) = *(undefined4 *)(unaff_ESI + 8);
  return;
}

