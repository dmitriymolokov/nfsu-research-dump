/* Decompiled from Speed.exe @ 0041ba80 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void __fastcall FUN_0041ba80(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar2 = (undefined4 *)(param_2 + 0x10);
  iVar3 = 2;
  do {
    iVar1 = 0;
    do {
      *(undefined1 *)(param_2 + iVar1) = 0;
      *puVar2 = 0;
      iVar1 = iVar1 + 1;
      puVar2 = puVar2 + 1;
    } while (iVar1 < 8);
    param_2 = param_2 + 8;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return;
}

