/* Decompiled from Speed.exe @ 0043bd10 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void __fastcall FUN_0043bd10(int *param_1)

{
  byte bVar1;
  char cVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  int local_10;
  
  if ((*param_1 == 6) || (*param_1 == 5)) {
    bVar1 = FUN_00436d90();
    FUN_00436db0();
    FUN_00436d90();
    fVar3 = (float10)FUN_00548c30();
    if (bVar1 == *(byte *)(param_1 + 0x10)) {
      for (local_10 = 0; local_10 < (int)(uint)bVar1; local_10 = local_10 + 1) {
        FUN_00417490();
        cVar2 = FUN_00436ee0();
        FUN_00436db0();
        FUN_00436d90();
        fVar4 = (float10)FUN_00548c30();
        if (cVar2 == '\0') {
          FUN_0057a170();
        }
        else {
          FUN_0057a160();
        }
        fVar5 = (float10)FUN_0040ed00();
        FUN_00579f90((float)fVar4 + (float)(fVar5 - (float10)(float)fVar3));
      }
    }
  }
  return;
}

