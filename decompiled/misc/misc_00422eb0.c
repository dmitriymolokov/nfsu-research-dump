/* Decompiled from Speed.exe @ 00422eb0 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00422eb0(int param_1,undefined4 param_2)

{
  int iVar1;
  char cVar2;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  switch(param_2) {
  case 1:
    FUN_00444ab0();
    if (*(int *)(param_1 + 0x14) == 8) {
      if (*(undefined4 **)(param_1 + 0x3c) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(param_1 + 0x3c))(1);
        *(undefined4 *)(param_1 + 0x3c) = 0;
      }
      iVar1 = *(int *)(DAT_007361f8 + 0x28);
      local_1c = *(undefined4 *)(iVar1 + 100);
      local_20 = *(undefined4 *)(iVar1 + 0x60);
      local_18 = *(undefined4 *)(iVar1 + 0x68);
      FUN_0047cac0(&DAT_00779800,&local_24);
      FUN_00427e60(0,0);
      FUN_00444840();
      FUN_0047bed0(DAT_0078a2f0);
    }
    else {
      FUN_00444840();
      FUN_0047bb10(&DAT_00779800,DAT_0078a2f0);
    }
    if ((DAT_006fb988 != '\0') && (cVar2 = FUN_004f6650(), cVar2 == '\0')) {
      FUN_004f61f0();
    }
switchD_00422eca_caseD_4:
    return 1;
  case 2:
    if (DAT_006fb988 != '\0') {
      FUN_004f6240();
    }
    DAT_006fb988 = 1;
    FUN_00434b50(DAT_0073619c,*(undefined4 *)(param_1 + 0x18));
    return 1;
  case 3:
    local_24 = DAT_0073ad3c - *(int *)(param_1 + 4);
    if ((_DAT_006b7c38 < (float)local_24 * _DAT_006cca38) &&
       (cVar2 = FUN_00445100(&DAT_0077a980), cVar2 == '\0')) {
      FUN_004de130();
      FUN_00421ae0(*(undefined4 *)(param_1 + 0x14));
    }
    return 1;
  case 4:
  case 5:
  case 10:
    goto switchD_00422eca_caseD_4;
  default:
    return 0;
  }
}

