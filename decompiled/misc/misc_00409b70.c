/* Decompiled from Speed.exe @ 00409b70 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void FUN_00409b70(void)

{
  byte *pbVar1;
  uint uVar2;
  char *pcVar3;
  undefined4 *puStack_50;
  int *piStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int *piStack_40;
  undefined1 *puStack_3c;
  undefined4 *puStack_38;
  int *piStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int *piStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  if (DAT_0073645c == 1) {
    (**(code **)(*DAT_0073636c + 0x94))();
    pcVar3 = "WHITE16X16_NOALPHA";
    piStack_28 = (int *)0xffffffff;
    uVar2 = 0x57;
    do {
      piStack_28 = (int *)((int)piStack_28 * 0x21 + uVar2);
      pbVar1 = (byte *)(pcVar3 + 1);
      uVar2 = (uint)*pbVar1;
      pcVar3 = pcVar3 + 1;
    } while (*pbVar1 != 0);
    uStack_20 = 0;
    uStack_24 = 1;
    uStack_2c = 0x409bbe;
    FUN_005461c0();
    uStack_20 = 0x8296b4;
    uStack_24 = 0xc1;
    piStack_28 = DAT_0073636c;
    uStack_2c = 0x409bdb;
    (**(code **)(*DAT_0073636c + 0xe4))();
    uStack_2c = 0xe;
    uStack_30 = 1;
    piStack_34 = (int *)0x1;
    puStack_38 = &uStack_20;
    puStack_3c = &stack0xffffffe4;
    piStack_40 = (int *)0x1;
    uStack_20 = 0x1fffffff;
    uStack_44 = 0x409c03;
    FUN_0040d6e0();
    uStack_2c = DAT_0071abb0;
    uStack_30 = 0;
    piStack_34 = DAT_0073636c;
    puStack_38 = (undefined4 *)0x409c1d;
    (**(code **)(*DAT_0073636c + 0x94))();
    puStack_38 = (undefined4 *)0x409c29;
    FUN_0040e6d0();
    puStack_38 = (undefined4 *)0x1;
    puStack_3c = (undefined1 *)0x7;
    piStack_40 = DAT_0073636c;
    uStack_44 = 0x409c3b;
    (**(code **)(*DAT_0073636c + 0xe4))();
    uStack_44 = 0;
    uStack_48 = 0xe;
    piStack_4c = DAT_0073636c;
    puStack_50 = (undefined4 *)0x409c4c;
    (**(code **)(*DAT_0073636c + 0xe4))();
    puStack_50 = (undefined4 *)0x0;
    FUN_00544f30(&DAT_007404c0);
    puStack_50 = &DAT_007404c0;
    FUN_004ae7d0(&DAT_00746dd0);
    puStack_50 = (undefined4 *)0x0;
    FUN_00570d00();
    FUN_00570c70(0);
    puStack_50 = (undefined4 *)0x1;
    (**(code **)(*DAT_0073636c + 0xe4))(DAT_0073636c,0xe);
    FUN_0040abd0(0);
    FUN_0040d6e0(1,&DAT_0071aba4,&puStack_50,1,2,2);
  }
  return;
}

