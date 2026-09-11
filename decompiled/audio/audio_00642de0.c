/* Decompiled from Speed.exe @ 00642de0 */
/* Module: Audio */
/* Ghidra DecompileVAs */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_00642de0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined1 local_2000 [8188];
  undefined4 uStack_4;
  
  uStack_4 = 0x642dea;
  if (DAT_0070ff38 == 0) {
    FUN_00642cb0();
  }
  if ((*(byte *)(&DAT_006e7eb4 + param_1 * 2) & 1) != 0) {
    FUN_00671077(local_2000,param_2,param_3);
    puVar1 = &DAT_006e80d4;
    do {
      if (((*(byte *)(puVar1 + 1) & 1) != 0) && ((code *)*puVar1 != (code *)0x0)) {
        (*(code *)*puVar1)(param_1,local_2000);
      }
      puVar1 = puVar1 + 3;
    } while ((int)puVar1 < 0x6e8134);
  }
  return;
}

