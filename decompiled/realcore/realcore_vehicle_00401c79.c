/* Decompiled from Speed.exe @ 00401c79 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileModule */


float10 __thiscall realcore_vehicle_00401C79(float param_1,float param_2)

{
  float10 fVar1;
  float unaff_retaddr;
  
  func_0x00401e23();
  if (unaff_retaddr < param_1) {
    unaff_retaddr = param_1;
  }
  fVar1 = (float10)unaff_retaddr;
  if ((float10)param_2 < fVar1) {
    fVar1 = (float10)param_2;
  }
  return fVar1;
}

