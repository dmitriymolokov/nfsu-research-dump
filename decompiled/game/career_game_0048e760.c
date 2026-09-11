/* Decompiled from Speed.exe @ 0048e760 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void __fastcall FUN_0048e760(int *param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)param_1[0xc];
  if (piVar1 != (int *)param_1[0xc]) {
    do {
      piVar1[0xd] = piVar1[0xd] | 0x20;
      piVar1[0x19] = 0;
      piVar1 = (int *)*piVar1;
    } while (piVar1 != (int *)param_1[0xc]);
  }
  piVar1 = *(int **)param_1[0xc];
  param_1[0xb] = (int)piVar1;
  if ((piVar1 == (int *)0x0) || (piVar1 == (int *)param_1[0xc])) {
    param_1[0xb] = 0;
  }
  else {
    piVar1[0xd] = piVar1[0xd] & 0xffffff7f;
  }
                    /* WARNING: Could not recover jumptable at 0x0048e7a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34))();
  return;
}

