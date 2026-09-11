/* Decompiled from Speed.exe @ 00641d90 */
/* Module: Audio */
/* Ghidra DecompileVAs */


undefined4 * fn_00641D90(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  FUN_0063f190(param_1 + 6);
  puVar1 = (undefined4 *)param_1[3];
  if (puVar1 != (undefined4 *)0x0) {
    *param_1 = *param_1 + -1;
    puVar2 = (undefined4 *)param_1[2];
    if (puVar2 == puVar1) {
      param_1[2] = 0;
      param_1[3] = 0;
    }
    else {
      param_1[3] = (int)puVar2;
      for (puVar2 = (undefined4 *)*puVar2; puVar2 != puVar1; puVar2 = (undefined4 *)*puVar2) {
        puVar2 = *(undefined4 **)param_1[3];
        param_1[3] = (int)puVar2;
      }
      *(undefined4 *)param_1[3] = 0;
    }
    *puVar1 = 0;
  }
  param_1[1] = param_1[1] | 1;
  FUN_0063f1a0(param_1 + 6);
  return puVar1;
}

