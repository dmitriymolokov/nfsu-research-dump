/* Decompiled from Speed.exe @ 0042bd60 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void FUN_0042bd60(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  
  FUN_00571ea0(0,"Player");
  FUN_00571c20(param_2,param_1 + 0x58,4,4,1);
  FUN_00571c20(param_2,param_1 + 0x5c,2,4,1);
  FUN_00571c20(param_2,param_1 + 0x60,1,4,0);
  FUN_00571c20(param_2,param_1 + 0x68,8,8,0);
  FUN_00571c20(param_2,param_1 + 0x70,0x20,0xffffffff,0);
  FUN_00571c20(param_2,param_1 + 0x274,1,4,0);
  FUN_005840c0(*(undefined4 *)(*(int *)(param_1 + 0xa8) + 0x10));
  FUN_00571c20(param_2,param_1 + 0xac,4,0xffffffff,0);
  FUN_00571c20(param_2,param_1 + 0xb0,4,0xffffffff,0);
  FUN_00571c20(param_2,param_1 + 0xb4,4,0xffffffff,0);
  FUN_00571c20(param_2,param_1 + 0xb8,4,0xffffffff,0);
  FUN_00571c20(param_2,param_1 + 0xbc,4,0xffffffff,0);
  FUN_00571c20(param_2,param_1 + 0xc0,4,0xffffffff,0);
  FUN_00571c20(param_2,param_1 + 0x1c0,4,0xffffffff,0);
  FUN_00571c20(param_2,param_1 + 0x29c,4,4,1);
  FUN_00571c20(param_2,param_1 + 0x2a0,4,4,1);
  FUN_00571c20(param_2,param_1,4,0xffffffff,0);
  FUN_00571c20(param_2,param_1 + 0x2a4,4,4,1);
  FUN_00571c20(param_2,param_1 + 0x4ac,1,1,0);
  FUN_00571c20(param_2,param_1 + 0x4ad,1,1,0);
  FUN_00571c20(param_2,param_1 + 0x4ae,1,1,0);
  FUN_00571c20(param_2,param_1 + 0x4af,1,1,0);
  FUN_00571c20(param_2,param_1 + 0x98,1,1,0);
  FUN_00571c20(param_2,param_1 + 0x1c4,4,0xffffffff,0);
  FUN_00571c20(param_2,param_1 + 0x1cc,8,0xffffffff,0);
  FUN_00571c20(param_2,param_1 + 0x1d4,8,0xffffffff,0);
  FUN_00571c20(param_2,*(undefined4 *)(param_1 + 0x1e0),0x90,0xffffffff,0);
  FUN_00571c20(param_2,*(undefined4 *)(param_1 + 0x1e4),0x90,0xffffffff,0);
  FUN_0041ff80(DAT_007361f8);
  if ((DAT_0078a345 != '\0') || (DAT_007361a4 != 0)) {
    FUN_00571c20(param_2,param_1 + 0xc4,2,0xffffffff,0);
    FUN_00571c20(param_2,param_1 + 0xc6,1,1,0);
    FUN_00571c20(param_2,param_1 + 0xcc,4,0xffffffff,0);
    FUN_00571c20(param_2,param_1 + 0xd0,4,0xffffffff,0);
    FUN_00571c20(param_2,param_1 + 0xd4,4,0xffffffff,0);
    FUN_00571c20(param_2,param_1 + 199,1,1,0);
    FUN_00571c20(param_2,param_1 + 0xdc,4,0xffffffff,0);
    FUN_00571c20(param_2,param_1 + 0xe0,4,0xffffffff,0);
  }
  if ((DAT_0078a346 != '\0') || (DAT_007361a0 != 0)) {
    iVar1 = *(int *)(param_1 + 300);
    FUN_00571c20(param_2,(int *)(param_1 + 300),4,4,0);
    iVar2 = *(int *)(param_1 + 300);
    if (iVar1 != iVar2) {
      FUN_0042fee0(iVar2);
    }
    FUN_00571c20(param_2,param_1 + 0x128,4,4,1);
    FUN_00571c20(param_2,param_1 + 0x104,4,0xffffffff,0);
    FUN_00571c20(param_2,param_1 + 0x10c,4,0xffffffff,0);
    FUN_00571c20(param_2,param_1 + 0x110,4,0xffffffff,0);
    FUN_00571c20(param_2,param_1 + 0x118,4,0xffffffff,0);
    FUN_00571c20(param_2,param_1 + 0x11c,4,0xffffffff,0);
    FUN_00571c20(param_2,param_1 + 0x120,4,0xffffffff,0);
    FUN_00571c20(param_2,param_1 + 0x124,1,1,0);
    FUN_00571c20(param_2,param_1 + 0x180,4,0xffffffff,0);
    FUN_00571c20(param_2,param_1 + 0x184,4,0xffffffff,0);
    FUN_00571c20(param_2,param_1 + 0x188,4,0xffffffff,0);
    FUN_00571c20(param_2,param_1 + 0x18c,4,4,1);
    FUN_00571d90();
    FUN_00571c20(param_2,*(undefined4 *)(param_1 + 0x108),4,0xffffffff,0);
    FUN_00571c20(param_2,param_1 + 0x114,4,0xffffffff,0);
  }
  if (*(char *)(param_2 + 0x3d) != '\0') {
    FUN_0042d520(0);
  }
  FUN_00571c20(param_2,param_1 + 0xa4,4,0xffffffff,0);
  iVar1 = *(char *)(param_2 + 0x40) * 0x10 + 0x4c + param_2;
  *(int *)(iVar1 + 0xc) = *(int *)(param_2 + 0x150) - *(int *)(iVar1 + 0xc);
  cVar3 = *(char *)(param_2 + 0x40) + -1;
  *(char *)(param_2 + 0x40) = cVar3;
  if ((int)cVar3 < *(int *)(param_2 + 0x44)) {
    *(undefined4 *)(param_2 + 0x44) = 0xffffffff;
  }
  return;
}

