/* Decompiled from Speed.exe @ 0064bbd0 */
/* Module: Audio */
/* Ghidra DecompileVAs */


undefined4 __fastcall FUN_0064bbd0(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  WaitForSingleObject(DAT_00713c50,0xffffffff);
  puVar3 = *(undefined4 **)(param_1 + 0xc);
  while (puVar3 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)*puVar3;
    (*(code *)puVar3[2])(param_1,puVar3[3]);
    puVar3 = puVar2;
  }
  piVar1 = (int *)(param_1 + 4);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    (**(code **)(*DAT_00713c54 + 4))(param_1);
  }
  ReleaseMutex(DAT_00713c50);
  return 0;
}

