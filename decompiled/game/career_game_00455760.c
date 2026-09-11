/* Decompiled from Speed.exe @ 00455760 */
/* Module: Career_Game */
/* Ghidra DecompileModule */


void FUN_00455760(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *unaff_ESI;
  float10 fVar3;
  undefined4 local_2e0;
  undefined4 local_2dc;
  undefined4 local_2d8;
  undefined1 local_2d0 [32];
  int aiStack_2b0 [160];
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  FUN_00440740();
  local_2e0 = *unaff_ESI;
  local_2dc = unaff_ESI[1];
  *param_1 = local_2e0;
  local_2d8 = 0;
  param_1[1] = unaff_ESI[1];
  fVar3 = (float10)FUN_00440a40(local_2d0,&local_2e0,0,0,0);
  param_1[2] = (float)fVar3;
  iVar2 = 0;
  if (0 < local_30) {
    do {
      piVar1 = aiStack_2b0 + iVar2;
      iVar2 = iVar2 + 1;
      *(char *)(*piVar1 + 8) = *(char *)(*piVar1 + 8) + -1;
    } while (iVar2 < local_30);
  }
  return;
}

