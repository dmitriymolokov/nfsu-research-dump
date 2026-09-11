/* Decompiled from Speed.exe @ 005f4a40 */
/* Module: Loader */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong * FUN_005f4a40(ulonglong *param_1,undefined4 *param_2,int param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  
  puVar1 = param_1;
  if (param_3 < 4) {
    if (param_3 != 0) {
      FUN_005ab80f(param_1,param_2,param_3);
    }
  }
  else {
    while( true ) {
      for (; 3 < param_3; param_3 = param_3 + -4) {
        uVar7 = (ulonglong)CONCAT24((short)((uint)*param_2 >> 0x10),*param_2) & 0xffffffff0000ffff;
        uVar3 = (ulonglong)CONCAT24((short)((uint)param_2[1] >> 0x10),param_2[1]) &
                0xffffffff0000ffff;
        uVar9 = CONCAT44(-(uint)((int)((uVar7 & DAT_006df3c0) >> 0x20) == 0),
                         -(uint)((int)(uVar7 & DAT_006df3c0) == 0));
        uVar4 = CONCAT44(-(uint)((int)((uVar3 & DAT_006df3c0) >> 0x20) == 0),
                         -(uint)((int)(uVar3 & DAT_006df3c0) == 0));
        uVar6 = uVar7 & DAT_006df3e0;
        uVar8 = uVar3 & DAT_006df3e0;
        iVar10 = (int)((ulonglong)DAT_006df3d0 >> 0x20);
        uVar2 = uVar9 & _DAT_006df3f0;
        uVar5 = uVar4 & _DAT_006df3f0;
        uVar7 = PackedFloatingSUB(CONCAT44(((int)((uVar7 ^ uVar6) >> 0x20) + iVar10 +
                                           (int)(uVar2 >> 0x20)) * 0x2000,
                                           ((int)(uVar7 ^ uVar6) + (int)DAT_006df3d0 + (int)uVar2) *
                                           0x2000),uVar9 & _DAT_006df400);
        uVar9 = PackedFloatingSUB(CONCAT44(((int)((uVar3 ^ uVar8) >> 0x20) + iVar10 +
                                           (int)(uVar5 >> 0x20)) * 0x2000,
                                           ((int)(uVar3 ^ uVar8) + (int)DAT_006df3d0 + (int)uVar5) *
                                           0x2000),uVar4 & _DAT_006df400);
        *puVar1 = uVar7 | CONCAT44((int)(uVar6 >> 0x20) << 0x10,(int)uVar6 << 0x10);
        puVar1[1] = uVar9 | CONCAT44((int)(uVar8 >> 0x20) << 0x10,(int)uVar8 << 0x10);
        puVar1 = puVar1 + 2;
        param_2 = param_2 + 2;
      }
      if (param_3 == 0) break;
      param_2 = (undefined4 *)((int)param_2 + (param_3 + -4) * 2);
      puVar1 = (ulonglong *)((int)puVar1 + (param_3 + -4) * 4);
      param_3 = 4;
    }
  }
  FastExitMediaState();
  return param_1;
}

