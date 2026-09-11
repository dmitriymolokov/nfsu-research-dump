/* Decompiled from Speed.exe @ 0060c83a */
/* Module: EAGL */
/* Ghidra DecompileAll */


int __fastcall FUN_0060c83a(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x140) != 0) {
    if ((*(uint *)(param_1 + 0x30) & 0xffff) != 0x104) {
      return -0x7fffbffb;
    }
    FUN_0060c503(*(int *)(param_1 + 0x140),*(undefined4 *)(param_1 + 0x134));
    iVar1 = FUN_0061a26f(0xfffd);
    if (iVar1 < 0) {
      return iVar1;
    }
    iVar1 = FUN_0061663f();
    if (iVar1 < 0) {
      return iVar1;
    }
  }
  iVar1 = FUN_0060c503(*(undefined4 *)(param_1 + 0x144),*(undefined4 *)(param_1 + 0x138));
  return iVar1;
}

