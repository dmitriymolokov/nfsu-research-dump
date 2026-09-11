/* Decompiled from Speed.exe @ 005a4750 */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 FUN_005a4750(int param_1)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char local_105;
  undefined1 local_100 [256];
  
  if (DAT_0078ea84 != 0) {
    return 0;
  }
  DAT_0078ea84 = 1;
  local_105 = '\0';
  bVar1 = false;
  FUN_0063fc90();
  rdtsc();
  FUN_0063f0a0(0);
  FUN_0063e5c0(0);
  if (*(char *)(param_1 + 0x30) == '\0') {
    if (*(int *)(param_1 + 0x2c) != 0) {
      cVar2 = FUN_006457c8();
      if (cVar2 == '\0') {
        bVar1 = true;
      }
      else {
        FUN_00648b3a(*(undefined4 *)(param_1 + 0x2c));
        uVar3 = FUN_00645732(*(undefined4 *)(*(int *)(param_1 + 0x28) + 0x48));
        *(undefined4 *)(param_1 + 0x2c) = uVar3;
        bVar1 = false;
      }
      goto LAB_005a487a;
    }
  }
  else {
    uVar3 = FUN_006453b2(2,((DAT_006f0880 == 0) * '\x04' + '\x10') * '\x02');
    *(undefined4 *)(param_1 + 0x2c) = uVar3;
    *(undefined1 *)(param_1 + 0x30) = 0;
    if (((DAT_006f1dd8 != 0) && (*(char *)(param_1 + 0x19) != '\0')) && (DAT_007356a8 != 0)) {
      uVar3 = FUN_005a4cf0(param_1);
      FUN_00645910(uVar3);
    }
    FUN_00413310(&DAT_00737320);
LAB_005a487a:
    if (*(int *)(param_1 + 0x2c) != 0) {
      if (*(char *)(param_1 + 0x11) != '\0') {
        DAT_0078ea80 = DAT_0078ea80 + 1;
        FUN_00565da0("d:\\decodercapture%04d.fss",DAT_0078ea80);
        uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x2c) + 4);
        uVar4 = FUN_00638dd0(uVar3);
        FUN_0063cdd0(local_100,uVar3,uVar4);
      }
      goto LAB_005a48e2;
    }
  }
  bVar1 = true;
  local_105 = FUN_0064583f();
LAB_005a48e2:
  if ((*(int *)(param_1 + 0x2c) != 0) && (!bVar1)) {
    FUN_00413270(DAT_00733f68,&DAT_00737320,*(undefined4 *)(*(int *)(param_1 + 0x2c) + 4));
  }
  DAT_0078ea84 = 0;
  if (local_105 == '\0') {
    DAT_0078ea84 = 0;
    return 0;
  }
  return 1;
}

