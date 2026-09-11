/* Decompiled from Speed.exe @ 0067e81e */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


/* Library Function - Single Match
    ___free_lconv_num
   
   Library: Visual Studio 2003 Release */

void ___free_lconv_num(undefined4 *param_1)

{
  undefined *puVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    puVar1 = (undefined *)*param_1;
    if ((puVar1 != *(undefined **)PTR_PTR_006ec16c) && (puVar1 != PTR_DAT_006ec13c)) {
      _free(puVar1);
    }
    puVar1 = (undefined *)param_1[1];
    if ((puVar1 != *(undefined **)(PTR_PTR_006ec16c + 4)) && (puVar1 != PTR_DAT_006ec140)) {
      _free(puVar1);
    }
    puVar1 = (undefined *)param_1[2];
    if ((puVar1 != *(undefined **)(PTR_PTR_006ec16c + 8)) && (puVar1 != PTR_DAT_006ec144)) {
      _free(puVar1);
    }
  }
  return;
}

