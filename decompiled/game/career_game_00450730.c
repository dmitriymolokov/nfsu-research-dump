/* Decompiled from Speed.exe @ 00450730 */
/* Module: Career_Game */
/* Ghidra DecompileModule */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00450730(int *param_1,int *param_2)

{
  bool bVar1;
  char cVar2;
  int *piVar3;
  int *unaff_EDI;
  float10 fVar4;
  int local_1e8;
  uint local_1e4;
  float local_1e0;
  float local_1d8;
  int local_1d4;
  undefined1 local_1d0 [460];
  
  bVar1 = false;
  if (((*(int *)(DAT_0073619c + 4) != 0) && (*(int *)(DAT_0073619c + 4) != 0x7fffffff)) &&
     (_DAT_006cc954 < (float)(DAT_0073ad34 - *(int *)(DAT_0073619c + 4)) * _DAT_006cca38)) {
    fVar4 = (float10)FUN_00456830(*unaff_EDI,*(undefined4 *)(*unaff_EDI + 0x3d4));
    local_1e0 = (float)fVar4;
    local_1d4 = (int)(char)unaff_EDI[0xe2];
    local_1e8 = 0;
    if (0 < local_1d4) {
      piVar3 = unaff_EDI + 0xf;
      do {
        if (bVar1) {
          return 200;
        }
        fVar4 = (float10)FUN_0057b480();
        local_1d8 = (float)piVar3[-9] - (float)unaff_EDI[(char)unaff_EDI[0xe2] * 0xe + 6];
        if (((DAT_006cc7a4 < local_1d8) && (fVar4 < (float10)local_1d8 + (float10)local_1d8)) &&
           (cVar2 = FUN_004569b0(*unaff_EDI,local_1d8,piVar3[-0xc],local_1e0,1), cVar2 != '\0')) {
          FUN_00458d90();
          *param_2 = unaff_EDI[0xe6];
          param_2[1] = unaff_EDI[0xe7];
          param_2[2] = unaff_EDI[0xe8];
          param_2[3] = unaff_EDI[0xe9];
          local_1e4 = local_1e4 & 0xffffff00;
          cVar2 = FUN_0045bae0(param_2,local_1d0,&local_1e4,piVar3 + -0xd,unaff_EDI,0,DAT_007006ec,1
                              );
          if ((cVar2 != '\0') && (cVar2 = FUN_00450b40(param_2,local_1e4), cVar2 != '\0')) {
            *param_1 = *piVar3;
            bVar1 = true;
          }
        }
        local_1e8 = local_1e8 + 1;
        piVar3 = piVar3 + 0xe;
      } while (local_1e8 < local_1d4);
      if (bVar1) {
        return 200;
      }
    }
  }
  return 0xffffffff;
}

