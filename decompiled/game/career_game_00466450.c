/* Decompiled from Speed.exe @ 00466450 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void __fastcall FUN_00466450(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 *unaff_ESI;
  undefined4 *unaff_EDI;
  
  *unaff_ESI = 0;
  *unaff_EDI = 0;
  iVar1 = *(int *)(*(int *)(param_2 + 100) + 600);
  if (*(char *)(iVar1 + 0x15) == '\0') {
    *unaff_ESI = *(undefined4 *)(iVar1 + 0x140);
  }
  else if (*(char *)(iVar1 + 0x15) == '\x04') {
    *unaff_EDI = *(undefined4 *)(iVar1 + 0x140);
  }
  iVar1 = *(int *)(*(int *)(param_2 + 100) + 0x25c);
  if (*(char *)(iVar1 + 0x15) == '\0') {
    *unaff_ESI = *(undefined4 *)(iVar1 + 0x140);
    return;
  }
  if (*(char *)(iVar1 + 0x15) == '\x04') {
    *unaff_EDI = *(undefined4 *)(iVar1 + 0x140);
  }
  return;
}

