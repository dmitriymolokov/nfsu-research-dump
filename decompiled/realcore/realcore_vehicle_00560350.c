/* Decompiled from Speed.exe @ 00560350 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


void __fastcall FUN_00560350(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  int unaff_ESI;
  undefined4 *puVar2;
  
  if (param_2 != (undefined4 *)0x0) {
    puVar2 = param_2;
    for (iVar1 = 0x23; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    *param_2 = 9999;
    param_2[5] = 0x65;
    param_2[4] = 100;
    param_2[6] = *(int *)(unaff_ESI + 0x7c) + 1;
    param_2[7] = 9999;
    param_2[0xc] = 0x65;
    param_2[0xb] = 100;
    param_2[0xd] = *(int *)(unaff_ESI + 0x7c) + 1;
    param_2[0xe] = 9999;
    param_2[0x13] = 0x65;
    param_2[0x12] = 100;
    param_2[0x14] = *(int *)(unaff_ESI + 0x7c) + 1;
    param_2[0x15] = 9999;
    param_2[0x1a] = 0x65;
    param_2[0x19] = 100;
    param_2[0x1b] = *(int *)(unaff_ESI + 0x7c) + 1;
    param_2[0x1c] = 9999;
    param_2[0x21] = 0x65;
    param_2[0x20] = 100;
    param_2[0x22] = *(int *)(unaff_ESI + 0x7c) + 1;
    *(undefined1 *)(unaff_ESI + 0x135) = 0;
  }
  return;
}

