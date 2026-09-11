/* Decompiled from Speed.exe @ 0067ea4a */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


/* Library Function - Single Match
    ___free_lconv_mon
   
   Library: Visual Studio 2003 Release */

void ___free_lconv_mon(int param_1)

{
  undefined *puVar1;
  
  if (param_1 != 0) {
    puVar1 = *(undefined **)(param_1 + 0xc);
    if ((puVar1 != *(undefined **)(PTR_PTR_006ec16c + 0xc)) && (puVar1 != PTR_DAT_006ec148)) {
      _free(puVar1);
    }
    puVar1 = *(undefined **)(param_1 + 0x10);
    if ((puVar1 != *(undefined **)(PTR_PTR_006ec16c + 0x10)) && (puVar1 != PTR_DAT_006ec14c)) {
      _free(puVar1);
    }
    puVar1 = *(undefined **)(param_1 + 0x14);
    if ((puVar1 != *(undefined **)(PTR_PTR_006ec16c + 0x14)) && (puVar1 != PTR_DAT_006ec150)) {
      _free(puVar1);
    }
    puVar1 = *(undefined **)(param_1 + 0x18);
    if ((puVar1 != *(undefined **)(PTR_PTR_006ec16c + 0x18)) && (puVar1 != PTR_DAT_006ec154)) {
      _free(puVar1);
    }
    puVar1 = *(undefined **)(param_1 + 0x1c);
    if ((puVar1 != *(undefined **)(PTR_PTR_006ec16c + 0x1c)) && (puVar1 != PTR_DAT_006ec158)) {
      _free(puVar1);
    }
    puVar1 = *(undefined **)(param_1 + 0x20);
    if ((puVar1 != *(undefined **)(PTR_PTR_006ec16c + 0x20)) && (puVar1 != PTR_DAT_006ec15c)) {
      _free(puVar1);
    }
    puVar1 = *(undefined **)(param_1 + 0x24);
    if ((puVar1 != *(undefined **)(PTR_PTR_006ec16c + 0x24)) && (puVar1 != PTR_DAT_006ec160)) {
      _free(puVar1);
    }
  }
  return;
}

