/* Decompiled from Speed.exe @ 00657c50 */
/* Module: Audio */
/* Ghidra DecompileAll */


void FUN_00657c50(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(short *)(param_1 + 2) * 0x110;
  iVar3 = iVar2 + DAT_0071400c;
  if (*(int *)(iVar2 + 0xe4 + DAT_0071400c) != 0) {
    do {
      iVar2 = *(int *)(iVar3 + 0xe4);
      iVar1 = *(int *)(iVar2 + 8);
      if ((iVar2 != iVar3 + 0x2c) && (iVar2 != iVar3 + 0x74)) {
        if (*(code **)(iVar2 + 4) != (code *)0x0) {
          (**(code **)(iVar2 + 4))(iVar2);
        }
        FUN_006510d0(*(undefined4 *)(iVar3 + 0xe4));
        *(undefined4 *)(iVar3 + 0xe4) = 0;
      }
      *(int *)(iVar3 + 0xe4) = iVar1;
    } while (iVar1 != 0);
  }
  *(undefined4 *)(iVar3 + 0xe4) = 0;
  return;
}

