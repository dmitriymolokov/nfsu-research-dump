/* Decompiled from Speed.exe @ 0043dc40 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


undefined4 * __fastcall FUN_0043dc40(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_00405550();
  FUN_00405550();
  param_1[1] = 0;
  *param_1 = 0;
  param_1[6] = 1;
  param_1[5] = 1;
  *(undefined1 *)((int)param_1 + 0x11) = 0;
  *(undefined1 *)((int)param_1 + 0x12) = 0;
  *(undefined1 *)((int)param_1 + 0x13) = 0;
  param_1[10] = 0xbf800000;
  param_1[7] = 0;
  param_1[0x15] = 0;
  param_1[2] = 0;
  FUN_00424cc0();
  FUN_00424cc0();
  puVar2 = param_1 + 0xb;
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  return param_1;
}

