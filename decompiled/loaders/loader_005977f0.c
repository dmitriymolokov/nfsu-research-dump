/* Decompiled from Speed.exe @ 005977f0 */
/* Module: Loader */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_005977f0(void)

{
  void *pvVar1;
  int *unaff_ESI;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00686bf8;
  local_c = ExceptionList;
  if (((unaff_ESI[0x5c] != 0) &&
      (((unaff_ESI[0x5a] == 0 || (unaff_ESI[0x5a] == 0x7fffffff)) &&
       (*(char *)((int)unaff_ESI + 0x1a) == '\0')))) &&
     (_DAT_006ccc00 < (float)(DAT_0073ad34 - unaff_ESI[0x59]) * _DAT_006cca38)) {
    ExceptionList = &local_c;
    pvVar1 = (void *)FUN_00567160();
    local_4 = 0;
    if (pvVar1 != (void *)0x0) {
      FUN_005962e0(pvVar1,unaff_ESI[0x5c]);
    }
    local_4 = 0xffffffff;
    (**(code **)*unaff_ESI)(1);
    ExceptionList = pvVar1;
    return 1;
  }
  if ((unaff_ESI[0x5a] != 0) && (unaff_ESI[0x5a] != 0x7fffffff)) {
    if (*(float *)(unaff_ESI[0x56] + 0xc0) != DAT_006cc7a4) {
      pvVar1 = (void *)(DAT_0073ad34 - unaff_ESI[0x5a]);
      if (*(float *)(unaff_ESI[0x56] + 0xc0) <= (float)(int)pvVar1 * _DAT_006cca38) {
        ExceptionList = &local_c;
        (**(code **)(*unaff_ESI + 0x7c))();
        (**(code **)*unaff_ESI)(1);
        ExceptionList = pvVar1;
        return 1;
      }
    }
  }
  return 0;
}

