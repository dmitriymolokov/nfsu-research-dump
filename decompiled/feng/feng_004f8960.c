/* Decompiled from Speed.exe @ 004f8960 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void __fastcall FUN_004f8960(undefined4 param_1,int param_2)

{
  float fVar1;
  float *pfVar2;
  undefined4 *puVar3;
  int unaff_ESI;
  
  for (puVar3 = *(undefined4 **)(unaff_ESI + 4); puVar3 != (undefined4 *)(unaff_ESI + 4);
      puVar3 = (undefined4 *)*puVar3) {
    if (param_2 == puVar3[2]) goto LAB_004f897d;
  }
  puVar3 = (undefined4 *)0x0;
LAB_004f897d:
  if (puVar3 != *(undefined4 **)(unaff_ESI + 0xc)) {
    pfVar2 = *(float **)(unaff_ESI + 0x10);
    *(undefined4 **)(unaff_ESI + 0xc) = puVar3;
    fVar1 = (float)puVar3[4];
    pfVar2[2] = -fVar1;
    if (-fVar1 != *pfVar2) {
      *(undefined2 *)(pfVar2 + 0xb) = 2;
    }
    puVar3 = *(undefined4 **)(unaff_ESI + 0x10);
    *puVar3 = puVar3[2];
    puVar3[1] = puVar3[3];
    *(undefined2 *)(puVar3 + 0xb) = 0;
    FUN_004f8b80(unaff_ESI,**(undefined4 **)(unaff_ESI + 0x10));
  }
  FUN_004f87f0();
  return;
}

