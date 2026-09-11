/* Decompiled from Speed.exe @ 00452070 */
/* Module: Career_Game */
/* Ghidra DecompileModule */


void __thiscall FUN_00452070(int param_1,int *param_2)

{
  int iVar1;
  undefined1 local_20 [28];
  
  if (param_2[0xe6] != 1) {
    param_2[0xe6] = 1;
    param_2[0xe7] = 0;
    *(undefined1 *)(param_2 + 0xe9) = 0;
    param_2[0xe8] = 0;
  }
  FUN_00458f10(0,0);
  *(undefined1 *)(param_1 + 0x1f0) = 0;
  *(undefined4 *)(param_1 + 0x1ec) = 0;
  *(undefined1 *)(param_1 + 0x1f2) = 0;
  *(undefined1 *)(param_1 + 0x1f1) = 1;
  *(undefined1 *)(param_1 + 0x1e0) = 1;
  if (param_2[0xe3] == 0) {
    *(undefined1 *)(param_1 + 0x1e0) = 0;
    return;
  }
  FUN_00451d50(param_1,local_20);
  iVar1 = param_2[0xe3];
  if (iVar1 != 0) {
    FUN_004594d0(*(undefined1 *)(iVar1 + 10),((param_2[0xe4] - iVar1) + -0x27c) / 0x88,param_2[0xe5]
                 ,0);
  }
  FUN_0045c370(param_1 + 0x20,param_2,0x3f800000,2,0,0x47c34f80);
  if (*(int *)(*param_2 + 0x24) == 3) {
    *(undefined4 *)(param_1 + 0x1e4) = DAT_006b7674;
    return;
  }
  *(undefined4 *)(param_1 + 0x1e4) = DAT_006b7678;
  return;
}

