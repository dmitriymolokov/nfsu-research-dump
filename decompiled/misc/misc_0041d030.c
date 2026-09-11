/* Decompiled from Speed.exe @ 0041d030 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void FUN_0041d030(void)

{
  undefined4 unaff_ESI;
  undefined *puVar1;
  
  if (DAT_007588d1 != '\0') {
    FUN_0041d8a0(&DAT_0078a478,"auto");
    FUN_0041c7a0();
  }
  FUN_004aa4d0(1);
  FUN_0041d2a0(&DAT_0078a478,unaff_ESI);
  FUN_0041da40(&DAT_0078a478);
  FUN_0041c420();
  FUN_0041c680();
  puVar1 = &DAT_0078daa8;
  do {
    if (*(int *)(puVar1 + 0x130) != -1) {
      FUN_004064d0();
    }
    puVar1 = puVar1 + 0x270;
  } while ((int)puVar1 < 0x78e948);
  return;
}

