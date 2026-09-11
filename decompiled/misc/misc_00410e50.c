/* Decompiled from Speed.exe @ 00410e50 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void FUN_00410e50(void)

{
  uint uVar1;
  
  if (DAT_00736390 == 0) {
    (**(code **)(*DAT_0073636c + 0x1c))(DAT_0073636c,&DAT_0071b670);
    (**(code **)(*DAT_00736368 + 0x14))(DAT_00736368,DAT_00736398,2,&DAT_0071b220);
    FUN_00410b70();
    FUN_00410a00();
    if ((DAT_0071b710 != 0xffffffff) && (uVar1 = 0, DAT_0071b710 != 0)) {
      do {
        (**(code **)(*DAT_0073636c + 0xd4))(DAT_0073636c,uVar1,0);
        uVar1 = uVar1 + 1;
      } while (uVar1 < DAT_0071b710);
    }
  }
  DAT_00736390 = 1;
  return;
}

