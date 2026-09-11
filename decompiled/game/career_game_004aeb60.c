/* Decompiled from Speed.exe @ 004aeb60 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004aeb60(undefined4 param_1,undefined4 param_2,byte param_3)

{
  char cVar1;
  int unaff_ESI;
  
  if (((*(int *)(unaff_ESI + 4) != 0) && (*(int *)(unaff_ESI + 0xc) == 4)) &&
     (cVar1 = FUN_004aeac0(unaff_ESI), cVar1 != '\0')) {
    switch(param_2) {
    case 0x3a:
      if (DAT_0078eb38 != 0) {
        FUN_004877f0((float)(int)-(uint)param_3 * _DAT_006cc970);
        DAT_006fb02c = 0;
        DAT_00735e84 = 0;
        DAT_0074810c = DAT_0073ad3c;
      }
      DAT_0078eb38 = DAT_0078eb38 + 1;
      return;
    case 0x3b:
      if (DAT_0078eb34 != 0) {
        FUN_004877f0((float)param_3 * _DAT_006cc970);
        DAT_006fb02c = 0;
        DAT_00735e84 = 0;
        DAT_0074810c = DAT_0073ad3c;
      }
      DAT_0078eb34 = DAT_0078eb34 + 1;
      return;
    case 0x3c:
      if (DAT_0078eb2c != 0) {
        FUN_004877d0((float)param_3 * _DAT_006cc970);
        DAT_006fb02c = 0;
        DAT_00735e84 = 0;
        DAT_0074810c = DAT_0073ad3c;
      }
      DAT_0078eb2c = DAT_0078eb2c + 1;
      return;
    case 0x3d:
      if (DAT_0078eb28 != 0) {
        FUN_004877d0((float)(int)-(uint)param_3 * _DAT_006cc970);
        DAT_006fb02c = 0;
        DAT_00735e84 = 0;
        DAT_0074810c = DAT_0073ad3c;
      }
      DAT_0078eb28 = DAT_0078eb28 + 1;
      return;
    case 0x3e:
      if (DAT_0078eb20 != 0) {
        FUN_00487810((float)(int)-(uint)param_3 * _DAT_006cc970);
        DAT_0074810c = DAT_0073ad3c;
        DAT_006fb02c = 0;
        DAT_00735e84 = 0;
        FUN_004877f0(0);
        FUN_004877d0(0);
      }
      DAT_0078eb20 = DAT_0078eb20 + 1;
      return;
    case 0x3f:
      if (DAT_0078eb1c != 0) {
        FUN_00487810((float)param_3 * _DAT_006cc970);
        DAT_0074810c = DAT_0073ad3c;
        DAT_006fb02c = 0;
        DAT_00735e84 = 0;
        FUN_004877f0(0);
        FUN_004877d0(0);
      }
      DAT_0078eb1c = DAT_0078eb1c + 1;
      return;
    case 0x40:
      if (DAT_0078eb30 != 0) {
        FUN_004877f0(-(((float)param_3 - _DAT_006cc7c4) * _DAT_006cc7cc));
        DAT_006fb02c = 0;
        DAT_00735e84 = 0;
        DAT_0074810c = DAT_0073ad3c;
      }
      DAT_0078eb30 = DAT_0078eb30 + 1;
      return;
    case 0x41:
      if (DAT_0078eb24 != 0) {
        FUN_004877d0(-(((float)param_3 - _DAT_006cc7c4) * _DAT_006cc7cc));
        DAT_006fb02c = 0;
        DAT_00735e84 = 0;
        DAT_0074810c = DAT_0073ad3c;
      }
      DAT_0078eb24 = DAT_0078eb24 + 1;
      return;
    case 0x42:
      if (DAT_0078eb18 != 0) {
        FUN_00487810(((float)param_3 - _DAT_006cc7c4) * _DAT_006cc7cc);
        DAT_0074810c = DAT_0073ad3c;
        DAT_006fb02c = 0;
        DAT_00735e84 = 0;
        FUN_004877f0(0);
        FUN_004877d0(0);
      }
      DAT_0078eb18 = DAT_0078eb18 + 1;
    }
  }
  return;
}

