/* Decompiled from Speed.exe @ 00405300 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


float10 FUN_00405300(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int unaff_ESI;
  float local_4;
  
  if ((*(int *)(unaff_ESI + 0x3c) == 0) ||
     (*(int *)(unaff_ESI + 0x40) == *(int *)(unaff_ESI + 0x3c) + 0x3c)) {
    uVar2 = FUN_004051a0();
    FUN_00404ab0("Not enough arguments %s\n",uVar2);
  }
  puVar1 = *(undefined4 **)(unaff_ESI + 0x40);
  *(undefined4 *)(unaff_ESI + 0x40) = *puVar1;
  _sscanf((char *)puVar1[2],"%f",&local_4);
  return (float10)local_4;
}

