/* Decompiled from Speed.exe @ 00410b70 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void FUN_00410b70(void)

{
  if ((DAT_0071b648 == 0x8086) && (DAT_0071b64c == 0x2572)) {
    DAT_00701084 = 0;
  }
  if (DAT_0071b024 < 2) {
    DAT_00701040 = 3;
  }
  else {
    DAT_00701040 = 0;
  }
  DAT_00701044 = (uint)(DAT_0071b024 < 2);
  if ((2 < DAT_0071aca4) || (DAT_0070104c = 1, 2 < DAT_0071ae64)) {
    DAT_0070104c = 0;
  }
  if ((DAT_0071af48 == 0) ||
     (((DAT_0071b648 == 0x10de && (0x16f < DAT_0071b64c)) && (DAT_0071b64c < 0x183)))) {
    DAT_00701058 = 0;
  }
  else {
    DAT_00701058 = 1;
  }
  DAT_0070105c = (-(uint)(2 < DAT_0071ad84) & 0xfffffffe) + 2;
  if (DAT_0071b108 == 0) {
    DAT_00701064 = 0;
    DAT_00701068 = 0;
    return;
  }
  DAT_00701064 = 1;
  DAT_00701068 = 1;
  return;
}

