/* Decompiled from Speed.exe @ 00411830 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void FUN_00411830(void)

{
  int iVar1;
  int iVar2;
  
  FUN_0041c3d0();
  DestroyWindow(DAT_00736380);
  iVar1 = DAT_007356a8;
  iVar2 = *(int *)(DAT_007356a8 + 0x104);
  if (iVar2 != 0) {
    *(undefined4 *)(DAT_007356a8 + 0xac) = *(undefined4 *)(iVar2 + 0x1c4);
    if (DAT_006f1dd8 != 0) {
      *(undefined4 *)(iVar2 + 0x1c4) = 4;
      FUN_00537cc0();
    }
    *(undefined1 *)(iVar1 + 0x9c) = 1;
  }
  FUN_0063f0a0(0);
  FUN_0063e5c0(0);
  FUN_0051d080();
  FUN_0063f0a0(0);
  FUN_0063e5c0(0);
  FUN_00405760();
  FUN_00408100();
  FUN_0040caf0();
  iVar2 = 0;
  do {
    (**(code **)(**(int **)((int)&DAT_00718738 + iVar2) + 8))(*(int **)((int)&DAT_00718738 + iVar2))
    ;
    iVar2 = iVar2 + 4;
  } while (iVar2 < 0x78);
  (**(code **)(*DAT_007187b0 + 8))(DAT_007187b0);
  FUN_0040b4e0();
  FUN_0040cce0();
  (**(code **)(*DAT_0073636c + 8))(DAT_0073636c);
  (**(code **)(*DAT_00736368 + 8))(DAT_00736368);
  FUN_00594bd0();
  return;
}

