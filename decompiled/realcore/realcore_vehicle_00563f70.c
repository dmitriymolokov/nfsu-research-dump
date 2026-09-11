/* Decompiled from Speed.exe @ 00563f70 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


void FUN_00563f70(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  int local_7c;
  undefined4 local_78;
  undefined4 local_74;
  
  puVar3 = &local_8c;
  FUN_0054b700(&DAT_0073d868,&DAT_00777c90);
  FUN_0054a140(&DAT_0073d868,puVar3);
  if (local_7c == 0) {
    local_7c = 100;
  }
  FUN_00565da0(&PTR_DAT_006bce54,local_7c);
  FUN_00565da0(&PTR_DAT_006bce54,local_8c);
  iVar1 = FUN_0059fb80();
  if (iVar1 == 0) {
    iVar1 = FUN_0059fb80();
  }
  FUN_00565da0(iVar1,local_88,local_84);
  uVar2 = FUN_00674898();
  FUN_00565da0("%d%%%%",uVar2);
  uVar2 = FUN_00674898();
  FUN_00565da0("%d%%%%",uVar2);
  FUN_00565da0(&PTR_DAT_006bce54,local_78);
  FUN_00565da0(&PTR_DAT_006bce54,local_74);
  iVar1 = FUN_0054b700(&DAT_0073d868,&DAT_00777c90);
  if ((iVar1 != 0) && (iVar1 = FUN_00549e50(&DAT_0073d868), iVar1 != 0)) {
    FUN_004c2a50();
  }
  iVar1 = FUN_0059fb80();
  if (iVar1 == 0) {
    iVar1 = FUN_0059fb80();
  }
  FUN_00565da0(&DAT_006cc568,iVar1);
  return;
}

