/* Decompiled from Speed.exe @ 00409580 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00409580(void)

{
  undefined *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 auStack_854 [4];
  undefined1 auStack_850 [4];
  undefined1 auStack_84c [2092];
  undefined4 local_20;
  
  DAT_0071db20 = 0;
  _DAT_0071db24 = 0;
  local_20 = 0;
  FUN_00408f00();
  if (DAT_00700e90 != 0) {
    if (DAT_007405e8 == '\0') {
      return;
    }
    if (*(int *)(DAT_00740638 + 0x10) == 0) {
      return;
    }
    FUN_0040abd0(1);
    if (1 < DAT_00700e90) {
      FUN_00446730(&DAT_007405e0);
      FUN_00570db0();
      FUN_00570950(&DAT_007405e0,0,1,1,1);
    }
    FUN_004ae650(&DAT_00746dd0,&DAT_007405e0);
    FUN_0040ed50();
    FUN_0040e6d0();
    if (DAT_00700ea0 != 0) {
      FUN_00544f30(&DAT_007405e0,2);
      FUN_00570d00(1);
      FUN_00570c70(1);
      FUN_004ae7d0(&DAT_00746dd0,&DAT_007405e0);
    }
  }
  if (DAT_00700e74 != 0) {
    puVar1 = &DAT_00740820;
    do {
      if ((puVar1[8] != '\0') && (*(int *)(*(int *)(puVar1 + 0x58) + 0x10) != 0)) {
        FUN_0040abd0(1);
        (**(code **)(*DAT_0073636c + 0xe4))(DAT_0073636c,7,0);
        (**(code **)(*DAT_0073636c + 0xe4))(DAT_0073636c,0xe,0);
        FUN_00571870();
        (**(code **)(*DAT_0073636c + 0xe4))(DAT_0073636c,0xe,1);
        (**(code **)(*DAT_0073636c + 0xe4))(DAT_0073636c,7,1);
        FUN_0040e6d0();
        FUN_0040ed50();
        if (DAT_00700e78 != 0) {
          FUN_00446730(puVar1);
        }
        FUN_004ae650(&DAT_00746dd0,puVar1);
        FUN_0040ed50();
        FUN_0040e6d0();
        if (DAT_00700ea0 != 0) {
          FUN_00544f30(puVar1,1);
          FUN_004ae7d0(&DAT_00746dd0,puVar1);
        }
      }
      puVar1 = puVar1 + 0x60;
    } while ((int)puVar1 < 0x740a01);
  }
  FUN_0040ed50();
  if (DAT_00740588 != '\0') {
    FUN_0040abd0(1);
    FUN_00446730(&DAT_00740580);
    FUN_00571050(&DAT_00740580);
    FUN_0040ed50();
    if (DAT_00700ea8 != 0) {
      FUN_00404110(&DAT_0078e980,&DAT_00740580);
      FUN_00404110(&DAT_0078e9e0,&DAT_00740580);
    }
    if ((DAT_00700ea0 != 0) && (FUN_00570d00(0), DAT_00700ea0 != 0)) {
      FUN_00544f30(&DAT_00740580,0);
    }
    if (DAT_007364ac != (int *)0x0) {
      FUN_0040e6d0();
      FUN_00409180(*(undefined4 *)(*DAT_007364ac + 0x18),5,6);
    }
    if (DAT_007364b0 != (int *)0x0) {
      iVar2 = *DAT_007364b0;
      (**(code **)(*DAT_0073636c + 0xe4))(DAT_0073636c,0xa8,8);
      FUN_00409180(*(undefined4 *)(iVar2 + 0x18),2,1);
    }
    FUN_00408b20();
  }
  FUN_0040ed50();
  iVar2 = 1;
  do {
    puVar3 = &DAT_00740460 + iVar2 * 0x18;
    if (((&DAT_00740468)[iVar2 * 0x60] != '\0') &&
       (*(int *)(*(int *)(&DAT_007404b8 + iVar2 * 0x60) + 0x10) != 0)) {
      FUN_004090a0();
      FUN_0040abd0(DAT_0073645c == 1);
      if (DAT_00700e80 != 0) {
        FUN_004468a0(&LAB_00409090);
      }
      if (((DAT_0077a920 == 6) && (*DAT_007361f0 != 1)) ||
         ((DAT_006fb038 != 0 && (DAT_0077a920 == 3)))) {
        FUN_00571870();
      }
      if (DAT_0073640c == (undefined4 *)0x0) {
LAB_0040992c:
        DAT_0073640c = &DAT_0071abb8;
        (*DAT_0071ac90)();
        (**(code **)(*DAT_0073636c + 0x15c))(DAT_0073636c,DAT_0071abbc);
        (**(code **)(*DAT_0071abd0 + 0x100))(DAT_0071abd0,auStack_84c,0);
        (**(code **)(*DAT_0071abd0 + 0x104))(DAT_0071abd0,0);
      }
      else if (DAT_0073640c != &DAT_0071abb8) {
        (**(code **)(*(int *)DAT_0073640c[6] + 0x108))((int *)DAT_0073640c[6]);
        (*(code *)DAT_0073640c[0x37])();
        goto LAB_0040992c;
      }
      FUN_0040ed50();
      FUN_00446730(puVar3);
      FUN_0040ed50();
      FUN_0058a240();
      FUN_00592100(puVar3,0);
      if ((DAT_00736384 != 0) && (DAT_0073645c == 1)) {
        FUN_0040ed50();
        if (DAT_00700e98 != 0) {
          FUN_0040cd40();
        }
        FUN_00408b20();
      }
      FUN_00571050(puVar3);
      FUN_00570950(puVar3,1,0,1,1);
      FUN_004ae650(&DAT_00746dd0,puVar3);
      if (iVar2 == 1) {
        if (DAT_0073640c != (undefined4 *)0x0) {
          if (DAT_0073640c == &DAT_0071abb8) goto LAB_00409a55;
          (**(code **)(*(int *)DAT_0073640c[6] + 0x108))((int *)DAT_0073640c[6]);
          (*(code *)DAT_0073640c[0x37])();
        }
        DAT_0073640c = &DAT_0071abb8;
        (*DAT_0071ac90)();
        (**(code **)(*DAT_0073636c + 0x15c))(DAT_0073636c,DAT_0071abbc);
        (**(code **)(*DAT_0071abd0 + 0x100))(DAT_0071abd0,auStack_854,0);
        (**(code **)(*DAT_0071abd0 + 0x104))(DAT_0071abd0,0);
      }
LAB_00409a55:
      FUN_0040ed50();
      DAT_007187b4 = 0;
      if (DAT_00700ea8 != 0) {
        FUN_00404110(&DAT_0078e980,puVar3);
        FUN_00404110(&DAT_0078e9e0,puVar3);
      }
      if (DAT_0073640c == (undefined4 *)0x0) {
LAB_00409aa7:
        DAT_0073640c = &DAT_0071abb8;
        (*DAT_0071ac90)();
        (**(code **)(*DAT_0073636c + 0x15c))(DAT_0073636c,DAT_0071abbc);
        (**(code **)(*DAT_0071abd0 + 0x100))(DAT_0071abd0,auStack_850,0);
        (**(code **)(*DAT_0071abd0 + 0x104))(DAT_0071abd0,0);
      }
      else if (DAT_0073640c != &DAT_0071abb8) {
        (**(code **)(*(int *)DAT_0073640c[6] + 0x108))((int *)DAT_0073640c[6]);
        (*(code *)DAT_0073640c[0x37])();
        goto LAB_00409aa7;
      }
      if (DAT_00700ea0 != 0) {
        if ((DAT_00700e9c == 0) || (DAT_0073645c != 1)) {
          (**(code **)(*DAT_0073636c + 0xe4))(DAT_0073636c,0xe,0);
          FUN_00544f30(puVar3,0);
          FUN_004ae7d0(&DAT_00746dd0,puVar3);
          FUN_00570d00(0);
          FUN_00570c70(0);
          (**(code **)(*DAT_0073636c + 0xe4))(DAT_0073636c,0xe,1);
        }
        else {
          FUN_00409b70();
        }
      }
    }
    iVar2 = iVar2 + 1;
    if (1 < iVar2) {
      return;
    }
  } while( true );
}

