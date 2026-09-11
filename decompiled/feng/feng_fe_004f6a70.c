/* Decompiled from Speed.exe @ 004f6a70 */
/* Module: FEng_FE */
/* Ghidra DecompileModule */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004f6a70(void)

{
  int unaff_ESI;
  float10 fVar1;
  undefined1 local_60 [16];
  float local_50;
  float local_4c;
  undefined4 local_48;
  undefined4 local_44;
  float local_40;
  float local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if (unaff_ESI != 0) {
    local_48 = 0;
    local_44 = 0;
    local_38 = 0;
    local_34 = 0;
    local_30 = 0;
    local_2c = 0;
    local_28 = 0x3f800000;
    local_24 = 0;
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    local_14 = 0x3f800000;
    FUN_00674898();
    fVar1 = (float10)FUN_00564b10();
    local_3c = (float)fVar1;
    local_50 = (float)fVar1;
    FUN_00674898();
    fVar1 = (float10)FUN_00564b10();
    local_4c = (float)fVar1;
    local_40 = (float)-fVar1;
    FUN_00566bf0();
    FUN_004ff420(unaff_ESI,local_60,0);
  }
  return;
}

