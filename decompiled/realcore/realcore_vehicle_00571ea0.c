/* Decompiled from Speed.exe @ 00571ea0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileModule */


void __thiscall FUN_00571ea0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  char cVar2;
  
  if (*(char *)(param_1 + 0x40) == -1) {
    *(undefined2 *)(param_1 + 0x42) = 0;
  }
  cVar2 = *(char *)(param_1 + 0x40) + '\x01';
  *(char *)(param_1 + 0x40) = cVar2;
  puVar1 = (undefined4 *)(cVar2 * 0x10 + 0x4c + param_1);
  *(undefined2 *)(puVar1 + 2) = *(undefined2 *)(param_1 + 0x42);
  *(short *)(param_1 + 0x42) = *(short *)(param_1 + 0x42) + 1;
  *puVar1 = param_3;
  puVar1[1] = param_2;
  *(undefined1 *)((int)puVar1 + 10) = 0;
  *(undefined1 *)((int)puVar1 + 0xb) = 0;
  puVar1[3] = *(undefined4 *)(param_1 + 0x150);
  if (((-1 < *(int *)(param_1 + 0x44)) &&
      (*(int *)(param_1 + 0x44) <= (int)*(char *)(param_1 + 0x40))) &&
     (DAT_006f08a4 == *(int *)(param_1 + 0x48))) {
    FUN_00571f60();
    FUN_005718d0();
  }
  return;
}

