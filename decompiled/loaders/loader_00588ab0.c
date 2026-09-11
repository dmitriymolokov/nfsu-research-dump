/* Decompiled from Speed.exe @ 00588ab0 */
/* Module: Loader */
/* Ghidra DecompileModule */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00588ab0(void)

{
  int iVar1;
  int iVar2;
  float fVar3;
  int unaff_ESI;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  undefined1 local_40 [4];
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_2c;
  
  thunk_FUN_005abda2(local_40,unaff_ESI + 0x30,*(int *)(unaff_ESI + 0xa4) + 0x30);
  iVar1 = *(int *)(unaff_ESI + 0xa4);
  iVar2 = *(int *)(unaff_ESI + 0xa0);
  fStack_2c = (fStack_44 * *(float *)(iVar1 + 0xc4) - fStack_48 * *(float *)(iVar1 + 200)) +
              *(float *)(iVar1 + 0xa0);
  fVar3 = -(*(float *)(iVar2 + 0x140) * fStack_2c +
           *(float *)(iVar2 + 0x144) *
           (*(float *)(iVar1 + 0xa4) +
           (fStack_4c * *(float *)(iVar1 + 200) - fStack_44 * *(float *)(iVar1 + 0xc0))) +
           *(float *)(iVar2 + 0x148) *
           (*(float *)(iVar1 + 0xa8) +
           (fStack_48 * *(float *)(iVar1 + 0xc0) - fStack_4c * *(float *)(iVar1 + 0xc4))));
  if (fVar3 < DAT_006cc7a4) {
    return (float10)DAT_006cc7a4;
  }
  fVar3 = _DAT_006f073c * fVar3 * *(float *)(iVar1 + 0x144);
  fStack_3c = *(float *)(iVar2 + 0x140) * fVar3;
  fStack_38 = *(float *)(iVar2 + 0x144) * fVar3;
  fStack_34 = *(float *)(iVar2 + 0x148) * fVar3;
  if (DAT_00734540 == 0) {
    FUN_00584e30();
  }
  return (float10)fVar3;
}

