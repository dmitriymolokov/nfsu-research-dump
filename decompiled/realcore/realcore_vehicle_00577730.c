/* Decompiled from Speed.exe @ 00577730 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


void FUN_00577730(float *param_1,undefined4 param_2)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  int unaff_EDI;
  float local_40;
  float fStack_3c;
  float fStack_38;
  undefined4 uStack_34;
  undefined1 local_30 [24];
  float fStack_18;
  
  iVar3 = 0;
  if ('\0' < *(char *)(unaff_EDI + 9)) {
    do {
      thunk_FUN_005abda2(&local_40,(iVar3 + 8) * 0x10 + unaff_EDI,param_2);
      fVar2 = param_1[1];
      fStack_18 = fStack_38 + param_1[2];
      pfVar1 = (float *)((iVar3 + 3) * 0x10 + unaff_EDI);
      *pfVar1 = local_40 + *param_1;
      pfVar1[2] = fStack_18;
      pfVar1[1] = fStack_3c + fVar2;
      if (iVar3 == 0) {
        *(undefined4 *)(unaff_EDI + 0x14) = *(undefined4 *)(unaff_EDI + 0x30);
        *(undefined4 *)(unaff_EDI + 0x18) = *(undefined4 *)(unaff_EDI + 0x34);
        *(undefined4 *)(unaff_EDI + 0x1c) = *(undefined4 *)(unaff_EDI + 0x30);
        *(undefined4 *)(unaff_EDI + 0x20) = *(undefined4 *)(unaff_EDI + 0x34);
      }
      else {
        FUN_00567580();
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(char *)(unaff_EDI + 9));
  }
  thunk_FUN_005abda2(local_30,unaff_EDI + 0xc0,param_2);
  *(float *)(unaff_EDI + 0x70) = fStack_3c;
  *(float *)(unaff_EDI + 0x74) = fStack_38;
  *(undefined4 *)(unaff_EDI + 0x78) = uStack_34;
  *(float *)(unaff_EDI + 0x7c) =
       *(float *)(unaff_EDI + 0x70) * *(float *)(unaff_EDI + 0x30) +
       *(float *)(unaff_EDI + 0x74) * *(float *)(unaff_EDI + 0x34) +
       *(float *)(unaff_EDI + 0x78) * *(float *)(unaff_EDI + 0x38);
  return;
}

