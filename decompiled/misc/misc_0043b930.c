/* Decompiled from Speed.exe @ 0043b930 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void __thiscall FUN_0043b930(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = FUN_00432810();
  if (iVar2 != 0) {
    DAT_0078a410 = param_2;
    cVar1 = (char)param_2;
    DAT_0078a334 = cVar1 + '\x01';
    *(char *)(iVar2 + 1) = cVar1;
    *(char *)(iVar2 + 3) = cVar1 + '\x01';
    if (param_2 != 0) {
      *(undefined4 *)(param_1 + 8 + param_2 * 4) = *(undefined4 *)(param_1 + 8);
      *(undefined4 *)(param_1 + 8) = 0;
    }
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 8 + param_2 * 4);
    *(char *)(*(int *)(param_1 + 4) + 4) = cVar1;
    FUN_00565da0("DUMMY_SKIN%d",*(char *)(iVar2 + 1) + 1);
    FUN_00421a70();
    iVar3 = FUN_0057efe0();
    iVar4 = FUN_00567c70();
    if (iVar3 != iVar4) {
      FUN_00567c70();
      FUN_00421a70();
      FUN_0057eff0();
    }
    FUN_00565da0("DUMMY_WHEEL%d",*(char *)(iVar2 + 1) + 1);
    FUN_00421a70();
    iVar2 = FUN_0057f000();
    iVar3 = FUN_00567c70();
    if (iVar2 != iVar3) {
      FUN_00567c70();
      FUN_00421a70();
      FUN_0057f010();
    }
  }
  return;
}

