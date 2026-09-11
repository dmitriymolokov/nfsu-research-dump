/* Decompiled from Speed.exe @ 00413fe0 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void __fastcall FUN_00413fe0(int param_1,int param_2)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_1 + 0x90);
  iVar1 = 0;
  do {
    if (*(int *)((&DAT_0071b7cc)[iVar1] + 0x10) == param_2) goto LAB_00414005;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 6);
  iVar1 = -1;
LAB_00414005:
  *(int *)(param_1 + 0x90) = iVar1;
  return;
}

