/* Decompiled from Speed.exe @ 0061674c */
/* Module: EAGL */
/* Ghidra DecompileModule */


int __fastcall FUN_0061674c(int param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0xcc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xd0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xd4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xd8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xdc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  iVar1 = FUN_005fb8ae();
  if (-1 < iVar1) {
    iVar1 = FUN_00614972();
    if (-1 < iVar1) {
      iVar1 = 0;
    }
  }
  return iVar1;
}

