/* Decompiled from Speed.exe @ 00466410 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void __fastcall FUN_00466410(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 *unaff_ESI;
  
  *param_1 = 0;
  *unaff_ESI = 0;
  iVar1 = *(int *)(*(int *)(param_2 + 100) + 600);
  if (*(char *)(iVar1 + 0x15) == '\0') {
    *param_1 = *(undefined4 *)(iVar1 + 0x140);
  }
  iVar1 = *(int *)(*(int *)(param_2 + 100) + 0x25c);
  if (*(char *)(iVar1 + 0x15) == '\0') {
    *unaff_ESI = *(undefined4 *)(iVar1 + 0x140);
  }
  return;
}

