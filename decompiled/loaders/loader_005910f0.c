/* spd-match: far pct=6.77 M4.0.2-CE */
/* Decompiled from Speed.exe @ 005910f0 */
/* Module: Loader */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_005910f0(float *param_1)

{
  float fVar1;
  float fVar2;
  undefined4 *puVar3;
  int iVar4;
  float *unaff_EDI;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 auStack_50 [76];
  
  puVar3 = (undefined4 *)(&DAT_007404a4)[*(int *)((int)param_1[0x28] + 0x18) * 0x18];
  if ((((puVar3 == &DAT_007404a4 + *(int *)((int)param_1[0x28] + 0x18) * 0x18) ||
       (puVar3 == (undefined4 *)0x0)) || (puVar3 + -1 == (int *)0x0)) ||
     ((puVar3[2] != 1 && (puVar3[2] != 0x11)))) {
    if (*DAT_0073619c == 4) {
      *unaff_EDI = *param_1;
      unaff_EDI[1] = param_1[1];
      return 1;
    }
    *unaff_EDI = *(float *)((int)param_1[0x27] + 0x90);
    unaff_EDI[1] = *(float *)((int)param_1[0x27] + 0x94);
  }
  else {
    iVar4 = puVar3[6];
    fVar1 = *(float *)(iVar4 + 0x54);
    fVar2 = *(float *)(iVar4 + 0x58);
    *unaff_EDI = *(float *)(iVar4 + 0x50);
    unaff_EDI[1] = fVar1;
    local_90 = 0x3f800000;
    local_8c = 0;
    unaff_EDI[2] = fVar2;
    local_88 = 0;
    local_84 = 0;
    local_80 = 0;
    local_7c = 0x3f800000;
    local_78 = 0;
    local_74 = 0;
    local_70 = 0;
    local_6c = 0;
    local_68 = 0x3f800000;
    local_64 = 0;
    local_60 = 0;
    local_5c = 0;
    local_58 = 0;
    local_54 = 0x3f800000;
    (**(code **)(puVar3[-1] + 0x30))();
    FUN_0040b930();
    FUN_005ac68f(&local_90,&local_90,auStack_50);
    FUN_005abda2();
    if ((ABS(*param_1) < _DAT_006cc8bc != (ABS(*param_1) == _DAT_006cc8bc)) &&
       (ABS(param_1[1]) < _DAT_006cc8bc != (ABS(param_1[1]) == _DAT_006cc8bc))) {
      *param_1 = *unaff_EDI;
      param_1[1] = unaff_EDI[1];
      param_1[4] = DAT_0073ad34;
      return 1;
    }
  }
  return 1;
}

