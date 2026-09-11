/* Decompiled from Speed.exe @ 00585810 */
/* Module: Loader */
/* Ghidra DecompileModule */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00585810(int param_1)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  undefined1 auStack_dc [12];
  undefined1 local_d0 [52];
  undefined1 auStack_9c [52];
  undefined1 auStack_68 [12];
  undefined1 auStack_5c [88];
  
  fVar2 = *(float *)(param_1 + 0x148);
  *(float *)(param_1 + 0xa0) = fVar2 * *(float *)(param_1 + 0x70);
  *(float *)(param_1 + 0xa4) = *(float *)(param_1 + 0x74) * fVar2;
  *(float *)(param_1 + 0xa8) = *(float *)(param_1 + 0x78) * fVar2;
  fVar2 = SQRT(*(float *)(param_1 + 0xa8) * *(float *)(param_1 + 0xa8) +
               *(float *)(param_1 + 0xa4) * *(float *)(param_1 + 0xa4) +
               *(float *)(param_1 + 0xa0) * *(float *)(param_1 + 0xa0));
  if ((DAT_006f0904 < fVar2) && ((float)_DAT_006ccc48 < *(float *)(param_1 + 0x144))) {
    fVar2 = DAT_006f0904 / fVar2;
    *(float *)(param_1 + 0x70) = fVar2 * *(float *)(param_1 + 0x70);
    *(float *)(param_1 + 0x74) = fVar2 * *(float *)(param_1 + 0x74);
    *(float *)(param_1 + 0x78) = fVar2 * *(float *)(param_1 + 0x78);
    fVar2 = *(float *)(param_1 + 0x148);
    *(float *)(param_1 + 0xa0) = fVar2 * *(float *)(param_1 + 0x70);
    *(float *)(param_1 + 0xa4) = *(float *)(param_1 + 0x74) * fVar2;
    *(float *)(param_1 + 0xa8) = *(float *)(param_1 + 0x78) * fVar2;
  }
  fVar2 = *(float *)(param_1 + 0x148) * _DAT_006ccc44;
  *(float *)(param_1 + 0xb0) = fVar2 * *(float *)(param_1 + 0x110);
  *(float *)(param_1 + 0xb4) = *(float *)(param_1 + 0x114) * fVar2;
  *(float *)(param_1 + 0xb8) = *(float *)(param_1 + 0x118) * fVar2;
  FUN_00565230();
  iVar3 = param_1 + 400;
  if (*(int *)(param_1 + 0x138) == 0) {
    iVar3 = param_1 + 0x150;
  }
  thunk_FUN_005ac68f(local_d0,iVar3,(undefined4 *)(param_1 + 0x30));
  thunk_FUN_005ac68f(auStack_5c,auStack_9c,auStack_dc);
  pfVar1 = (float *)(param_1 + 0xc0);
  thunk_FUN_005abda2(pfVar1,param_1 + 0x80,auStack_68);
  fVar2 = SQRT(*(float *)(param_1 + 200) * *(float *)(param_1 + 200) +
               *(float *)(param_1 + 0xc4) * *(float *)(param_1 + 0xc4) + *pfVar1 * *pfVar1);
  if (_DAT_006b5b88 < fVar2) {
    fVar2 = _DAT_006b5b88 / fVar2;
    *pfVar1 = fVar2 * *pfVar1;
    *(float *)(param_1 + 0xc4) = *(float *)(param_1 + 0xc4) * fVar2;
    *(float *)(param_1 + 200) = *(float *)(param_1 + 200) * fVar2;
  }
  if (*(float *)(param_1 + 0x90) < DAT_006cc7a4) {
    *(undefined4 *)(param_1 + 0x90) = 0;
  }
  *(undefined4 *)(param_1 + 0xdc) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(param_1 + 0xec) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(param_1 + 0xe4) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(param_1 + 0xfc) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x104) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x10c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x110) = 0;
  *(undefined4 *)(param_1 + 0x114) = 0;
  *(undefined4 *)(param_1 + 0x118) = 0;
  *(undefined4 *)(param_1 + 0x120) = 0;
  *(undefined4 *)(param_1 + 0x124) = *(undefined4 *)(param_1 + 0x114);
  *(undefined4 *)(param_1 + 0x128) = *(undefined4 *)(param_1 + 0x118);
  if (*(int *)(param_1 + 0x140) != 0) {
    FUN_00584cd0();
  }
  return;
}

