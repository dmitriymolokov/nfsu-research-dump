/* Decompiled from Speed.exe @ 00650880 */
/* Module: Audio */
/* Ghidra DecompileVAs */


undefined4 FUN_00650880(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  if (DAT_00713ee4 == '\0') {
    return 0xfffffff6;
  }
  FUN_0064e520();
  if (((param_1 < (int)(uint)DAT_00713db6) && (-1 < param_1)) &&
     (puVar2 = (undefined4 *)(&DAT_00713cf0)[param_1], puVar2 != (undefined4 *)0x0)) {
    FUN_006504e0(param_1);
    FUN_0064fc20(puVar2);
    iVar5 = 0;
    iVar4 = 0;
    if (DAT_00713db6 != 0) {
      do {
        if ((&DAT_00713cf0)[iVar4] != 0) {
          iVar5 = iVar5 + 1;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)(uint)DAT_00713db6);
      if (iVar5 == 1) {
        FUN_0064c5c0(&LAB_00650730);
        DAT_00713f44 = 0;
      }
    }
    FUN_00655690(puVar2[2]);
    uVar3 = *puVar2;
    cVar1 = *(char *)((int)puVar2 + 0x11);
    (&DAT_00713cf0)[param_1] = 0;
    FUN_0064e540();
    if (cVar1 == '\0') {
      FUN_00412810(uVar3);
    }
    return 0;
  }
  FUN_0064e540();
  return 0xfffffff8;
}

