/* Decompiled from Speed.exe @ 0040e560 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void FUN_0040e560(void)

{
  int iVar1;
  int iVar2;
  int *piStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0;
  puStack_10 = &DAT_0071abb4;
  uStack_14 = 1;
  uStack_18 = 0x15;
  uStack_1c = 0;
  uStack_20 = 0;
  uStack_24 = 1;
  uStack_28 = 0x40;
  piStack_2c = DAT_0073636c;
  (**(code **)(*DAT_0073636c + 0x5c))();
  iVar2 = 0;
  (**(code **)(*DAT_0071abb4 + 0x4c))(DAT_0071abb4,0,&piStack_2c,0,0);
  iVar1 = 0;
  do {
    *(undefined4 *)(iVar1 + iVar2) = 0;
    iVar1 = iVar1 + 4;
  } while (iVar1 < 0x84);
  iVar1 = 0x84;
  do {
    *(undefined4 *)(iVar1 + iVar2) = 0xffffffff;
    iVar1 = iVar1 + 4;
  } while (iVar1 < 0xc0);
  *(undefined4 *)(iVar2 + 0xc0) = 0xffffffff;
  *(undefined4 *)(iVar2 + 0xc4) = 0xefefefef;
  *(undefined4 *)(iVar2 + 200) = 0xdfdfdfdf;
  *(undefined4 *)(iVar2 + 0xcc) = 0xcfcfcfcf;
  *(undefined4 *)(iVar2 + 0xd0) = 0xbfbfbfbf;
  *(undefined4 *)(iVar2 + 0xd4) = 0xafafafaf;
  *(undefined4 *)(iVar2 + 0xd8) = 0x9f9f9f9f;
  *(undefined4 *)(iVar2 + 0xdc) = 0x8f8f8f8f;
  *(undefined4 *)(iVar2 + 0xe0) = 0x7f7f7f7f;
  *(undefined4 *)(iVar2 + 0xe4) = 0x6f6f6f6f;
  *(undefined4 *)(iVar2 + 0xe8) = 0x5f5f5f5f;
  *(undefined4 *)(iVar2 + 0xec) = 0x4f4f4f4f;
  *(undefined4 *)(iVar2 + 0xf0) = 0x3f3f3f3f;
  *(undefined4 *)(iVar2 + 0xf4) = 0x2f2f2f2f;
  *(undefined4 *)(iVar2 + 0xf8) = 0x1f1f1f1f;
  *(undefined4 *)(iVar2 + 0xfc) = 0;
  (**(code **)(*DAT_0071abb4 + 0x50))(DAT_0071abb4,0);
  return;
}

