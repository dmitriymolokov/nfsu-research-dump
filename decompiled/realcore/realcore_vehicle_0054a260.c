/* Decompiled from Speed.exe @ 0054a260 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


undefined1 * __fastcall FUN_0054a260(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int unaff_ESI;
  
  if (*(int *)(unaff_ESI + 0x68) != 0) {
    if (param_1 == -1) {
      param_1 = *(int *)(unaff_ESI + 0x294);
    }
    uVar1 = FUN_00664d40(*(int *)(unaff_ESI + 0x68),5,param_1);
    iVar2 = FUN_00666ea0(*(undefined4 *)(unaff_ESI + 0x74),uVar1);
    if (iVar2 != 0) {
      return (undefined1 *)(iVar2 + 4);
    }
  }
  return &DAT_006b9172;
}

