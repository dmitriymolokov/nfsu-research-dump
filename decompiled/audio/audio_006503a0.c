/* Decompiled from Speed.exe @ 006503a0 */
/* Module: Audio */
/* Ghidra DecompileVAs */


undefined4 FUN_006503a0(uint param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (DAT_00713ee4 == '\0') {
    return 0xfffffff6;
  }
  if ((((int)(uint)DAT_00713db6 <= (int)param_1) || ((int)param_1 < 0)) ||
     (puVar1 = (undefined4 *)(&DAT_00713cf0)[param_1], puVar1 == (undefined4 *)0x0)) {
    return 0xfffffff8;
  }
  if (puVar1[0x55] == 0) {
    return 0xfffffff3;
  }
  if (param_5 == 0) {
    param_4 = FUN_00412930(*puVar1,param_3,param_4,0x6c454353);
  }
  else if (param_5 == 1) {
    param_4 = FUN_004129f0(*puVar1,param_3,0,0x6c454353);
  }
  if (param_4 != 0) {
    FUN_0064e520();
    iVar3 = FUN_00655b10(puVar1 + 0x53);
    FUN_00654cd0(iVar3,0x28);
    FUN_00655ae0(puVar1 + 0x50,iVar3);
    *(int *)(iVar3 + 8) = param_4;
    puVar1[3] = puVar1[3] + 0x100;
    if ((int)puVar1[3] < 0) {
      puVar1[3] = 0;
    }
    *(uint *)(iVar3 + 0xc) = puVar1[3] | param_1;
    *(undefined4 *)(iVar3 + 0x20) = param_2;
    uVar2 = *(undefined4 *)(iVar3 + 0xc);
    FUN_0064e540();
    return uVar2;
  }
  return 0xffffffff;
}

