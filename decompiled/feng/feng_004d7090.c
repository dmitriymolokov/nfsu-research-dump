/* Decompiled from Speed.exe @ 004d7090 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004d7090(float param_1)

{
  int *piVar1;
  int unaff_EDI;
  float10 fVar2;
  float local_14;
  float local_10;
  float local_c;
  undefined4 local_8;
  undefined1 local_4 [4];
  
  piVar1 = *(int **)(unaff_EDI + 0xc);
  if (piVar1 != (int *)(unaff_EDI + 0xc)) {
    do {
      FUN_004f6d10(&local_c,&local_14);
      if (_DAT_006ccc84 <= local_14) {
        FUN_004f6d10(&local_c,&local_10);
        local_c = local_10 - _DAT_006b6ae4 * param_1;
        FUN_004f6d10(&local_8,local_4);
        FUN_004f7000(local_8,local_c);
      }
      else {
        *(int *)(unaff_EDI + 0x1c) = *(int *)(unaff_EDI + 0x1c) + 1;
        fVar2 = (float10)FUN_004d7010();
        FUN_004d6da0((float)fVar2);
        if (*(int *)(unaff_EDI + 4) <= *(int *)(unaff_EDI + 0x1c)) {
          *(undefined4 *)(unaff_EDI + 0x1c) = 0;
        }
      }
      piVar1 = (int *)*piVar1;
    } while (piVar1 != (int *)(unaff_EDI + 0xc));
  }
  return;
}

