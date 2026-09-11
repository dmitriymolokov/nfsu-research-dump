/* Decompiled from Speed.exe @ 00536d00 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


void __fastcall FUN_00536d00(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  param_1[1] = 0x3f800000;
  param_1[2] = 0x3f800000;
  *param_1 = 0;
  iVar1 = 0;
  puVar2 = param_1 + 3;
  do {
    *puVar2 = 0xffffffff;
    *(undefined1 *)((int)param_1 + iVar1 + 0x58) = 1;
    iVar1 = iVar1 + 1;
    puVar2 = puVar2 + 1;
  } while (iVar1 < 0xb);
  iVar1 = 0;
  puVar2 = param_1 + 0xe;
  do {
    *puVar2 = 0xffffffff;
    *(undefined1 *)((int)param_1 + iVar1 + 99) = 1;
    iVar1 = iVar1 + 1;
    puVar2 = puVar2 + 1;
  } while (iVar1 < 8);
  param_1[0xd] = 0x3fe6;
  param_1[0x15] = 0x3fe6;
  return;
}

