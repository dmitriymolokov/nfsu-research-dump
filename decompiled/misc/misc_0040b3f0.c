/* Decompiled from Speed.exe @ 0040b3f0 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void FUN_0040b3f0(void)

{
  bool bVar1;
  
  bVar1 = false;
  if ((DAT_00700e98 == 0) && (DAT_00700e9c == 0)) {
    if (DAT_00736384 != 0) {
LAB_0040b415:
      bVar1 = DAT_0073645c == 0;
      DAT_0073645c = (uint)bVar1;
      DAT_00736384 = (uint)bVar1;
      bVar1 = true;
    }
  }
  else if (DAT_00736384 == 0) goto LAB_0040b415;
  if (DAT_00700e90 == 0) {
    if (DAT_0071ab68 != 0) {
LAB_0040b45b:
      bVar1 = true;
    }
  }
  else if (DAT_0071ab68 == 0) goto LAB_0040b45b;
  if (DAT_00700e74 == 0) {
    if (DAT_0073646c != 0) goto LAB_0040b479;
LAB_0040b475:
    if (bVar1) goto LAB_0040b479;
  }
  else {
    if (DAT_0073646c != 0) goto LAB_0040b475;
LAB_0040b479:
    FUN_0040b4e0();
    FUN_0040a890();
    FUN_0040b340();
    FUN_0040aa20();
  }
  bVar1 = false;
  if (DAT_00700e9c == 0) {
    if (DAT_0071aba4 != 0) goto LAB_0040b4a9;
  }
  else if (DAT_0071aba4 == 0) {
LAB_0040b4a9:
    bVar1 = true;
  }
  if (DAT_00700e98 == 0) {
    if (DAT_0071ab9c != 0) goto LAB_0040b4c7;
  }
  else if (DAT_0071ab9c == 0) goto LAB_0040b4c7;
  if (!bVar1) {
    return;
  }
LAB_0040b4c7:
  FUN_0040cce0();
  FUN_0040cb80();
  return;
}

