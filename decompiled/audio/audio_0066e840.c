/* Decompiled from Speed.exe @ 0066e840 */
/* Module: Audio */
/* Ghidra DecompileAll */


uint FUN_0066e840(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,uint param_5
                 )

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  uVar1 = FUN_0066e780(param_1,param_2,param_3,0);
  if (-1 < (int)uVar1) {
    if ((int)uVar1 < (int)param_5) {
      param_5 = uVar1;
    }
    if (param_4 != (undefined4 *)0x0) {
      puVar3 = (undefined4 *)(*(int *)(param_1 + 0x3c) + 0xc);
      for (uVar2 = param_5 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        *param_4 = *puVar3;
        puVar3 = puVar3 + 1;
        param_4 = param_4 + 1;
      }
      for (param_5 = param_5 & 3; param_5 != 0; param_5 = param_5 - 1) {
        *(undefined1 *)param_4 = *(undefined1 *)puVar3;
        puVar3 = (undefined4 *)((int)puVar3 + 1);
        param_4 = (undefined4 *)((int)param_4 + 1);
      }
    }
    _free(*(void **)(param_1 + 0x3c));
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  return uVar1;
}

