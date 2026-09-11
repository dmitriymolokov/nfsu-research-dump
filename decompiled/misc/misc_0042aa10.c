/* Decompiled from Speed.exe @ 0042aa10 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_0042aa10(undefined4 param_1,int param_2)

{
  float fVar1;
  int iVar2;
  bool bVar3;
  
  iVar2 = 0;
  do {
    if (*(char *)(param_2 + 0x350 + iVar2) != '\0') {
      fVar1 = *(float *)(*(int *)(param_2 + 0x40) + 0x1c0);
      if (fVar1 <= _DAT_006cca18) {
        if (_DAT_006cc7b8 <= fVar1) {
          return 0;
        }
        if (iVar2 == 1) {
          return 0;
        }
        bVar3 = iVar2 == 0;
      }
      else {
        if (iVar2 == 2) {
          return 0;
        }
        bVar3 = iVar2 == 3;
      }
      if (bVar3) {
        return 0;
      }
    }
    iVar2 = iVar2 + 1;
    if (3 < iVar2) {
      return 1;
    }
  } while( true );
}

