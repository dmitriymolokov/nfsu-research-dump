/* Decompiled from Speed.exe @ 0040abd0 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void FUN_0040abd0(void)

{
  int unaff_ESI;
  int *piStack_2c;
  undefined4 uStack_28;
  int *piStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int iStack_10;
  
  uStack_1c = 0x40abd8;
  FUN_0040ed50();
  uStack_1c = *(undefined4 *)(unaff_ESI + 8);
  uStack_20 = 0;
  piStack_24 = DAT_0073636c;
  uStack_28 = 0x40abec;
  (**(code **)(*DAT_0073636c + 0x94))();
  uStack_28 = *(undefined4 *)(unaff_ESI + 0xc);
  piStack_2c = DAT_0073636c;
  (**(code **)(*DAT_0073636c + 0x9c))();
  if (iStack_10 != 0) {
    (**(code **)(*DAT_0073636c + 0xac))(DAT_0073636c,0,0,7,0xff000000,0x3f800000,0);
  }
  piStack_24 = *(int **)(unaff_ESI + 0x14);
  uStack_20 = *(undefined4 *)(unaff_ESI + 0x18);
  piStack_2c = (int *)0x0;
  uStack_28 = 0;
  uStack_1c = 0;
  uStack_18 = 0x3f800000;
  (**(code **)(*DAT_0073636c + 0xbc))(DAT_0073636c,&piStack_2c);
  DAT_00736458 = unaff_ESI;
  DAT_0073640c = 0;
  return;
}

