/* Decompiled from Speed.exe @ 00542360 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileVAs */


void FUN_00542360(float param_1,float param_2,float param_3)

{
  float *unaff_ESI;
  float local_8;
  float local_4;
  
  FUN_00674898();
  FUN_00564bd0();
  FUN_00674898();
  FUN_00564bd0();
  *unaff_ESI = param_1 * local_8 * param_3;
  unaff_ESI[1] = param_1 * local_4 * param_3;
  unaff_ESI[2] = param_2 * param_3;
  return;
}

