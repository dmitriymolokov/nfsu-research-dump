/* Decompiled from Speed.exe @ 00598c80 */
/* Module: Loader */
/* Ghidra DecompileAll */


/* WARNING: Removing unreachable block (ram,0x00598ec5) */
/* WARNING: Removing unreachable block (ram,0x00598de8) */
/* WARNING: Removing unreachable block (ram,0x00598c9a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00598c80(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  float10 fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined1 local_38 [8];
  float local_30;
  int local_2c;
  undefined4 local_28;
  uint local_24;
  uint local_20;
  byte local_19;
  int local_18;
  int local_14;
  float local_10;
  int local_c;
  undefined4 local_8;
  
  iVar2 = FUN_0042ae30();
  if (iVar2 != 0) {
    local_8 = 0;
    fVar3 = (float10)FUN_00432d00();
    fVar3 = (float10)FUN_00432d20((float)fVar3);
    local_10 = (float)fVar3;
    local_c = DAT_0078a300;
    for (local_14 = 0; local_14 < 100; local_14 = local_14 + 1) {
      fVar3 = (float10)FUN_004216f0(0x3f800000);
      local_19 = fVar3 < (float10)_DAT_006b5a44;
      uVar7 = (uint)local_19;
      local_20 = (uint)local_19;
      uVar8 = 1;
      uVar6 = 0;
      fVar5 = local_10;
      iVar2 = DAT_0078a2fc;
      local_24 = uVar7;
      fVar3 = (float10)FUN_00424c30(local_10,0,uVar7,1,DAT_0078a2fc);
      fVar4 = (float)fVar3;
      fVar3 = (float10)FUN_00424c30(fVar4);
      local_18 = FUN_00599fc0((float)-fVar3,fVar4,fVar5,uVar6,uVar7,uVar8,iVar2);
      if (local_18 != 0) {
        local_28 = FUN_005ab210(1);
        local_2c = FUN_00599660(local_28,CONCAT31((int3)(-(uint)local_19 >> 8),
                                                  '\x01' - (local_19 != 0)));
        if (local_2c != -1) {
          uVar8 = FUN_00598f00(local_28);
          iVar2 = FUN_0042ae10();
          uVar6 = *(undefined4 *)(iVar2 + 0xd4 + DAT_0078a2fc * 4);
          fVar3 = (float10)FUN_00442590();
          local_30 = (float)fVar3;
          FUN_004ad8d0();
          FUN_00432d60(0,local_30);
          cVar1 = FUN_0059b130(local_38,uVar6,0,1);
          if (cVar1 == '\0') {
            fVar4 = *(float *)(local_18 + 0xb0 + local_c * 8 + DAT_0078a2fc * 4) * _DAT_006cc7a0;
            fVar3 = (float10)FUN_0042adf0();
            fVar3 = (float10)FUN_00401c60(fVar4,(float)fVar3);
            uVar6 = FUN_005992f0(param_1,uVar8,local_2c,(float)fVar3,local_18);
            return uVar6;
          }
        }
      }
    }
  }
  return 0;
}

