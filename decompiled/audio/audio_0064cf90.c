/* Decompiled from Speed.exe @ 0064cf90 */
/* Module: Audio */
/* Ghidra DecompileVAs */


undefined4 fn_0064CF90(byte *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((0 < iVar1) && (iVar1 <= (int)(uint)*param_1)) {
    return *(undefined4 *)(param_1 + iVar1 * 4 + 4);
  }
  return 0;
}

