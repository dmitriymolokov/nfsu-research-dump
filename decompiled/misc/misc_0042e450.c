/* Decompiled from Speed.exe @ 0042e450 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void FUN_0042e450(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_10 = 0;
  local_c = 1;
  local_8 = 3;
  local_4 = 2;
  local_1c = 0;
  local_18 = 3;
  local_14 = 2;
  puVar3 = &local_10;
  iVar2 = 4;
  if (DAT_007361c4 == 2) {
    puVar3 = &local_1c;
    iVar2 = 3;
  }
  iVar4 = 0;
  iVar1 = 0;
  if (iVar2 != 0) {
    do {
      if (puVar3[iVar1] == (int)*(char *)(param_1 + 0x20)) {
        iVar4 = iVar1;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < iVar2);
  }
  iVar4 = iVar4 + param_2;
  if (iVar4 < 0) {
    iVar4 = iVar2 + -1;
  }
  if (iVar2 <= iVar4) {
    *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)puVar3;
    return;
  }
  *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(puVar3 + iVar4);
  return;
}

