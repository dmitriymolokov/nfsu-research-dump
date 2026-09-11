/* Decompiled from Speed.exe @ 0067aeb5 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


/* Library Function - Single Match
    __handle_qnan1
   
   Library: Visual Studio 2003 Release */

float10 __handle_qnan1(undefined4 param_1,double param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  float10 fVar2;
  
  if (DAT_006ec230 == 0) {
    fVar2 = (float10)__umatherr(1,param_1,param_2,0,param_2,param_3);
    return fVar2;
  }
  puVar1 = (undefined4 *)FUN_00677f42();
  *puVar1 = 0x21;
  __ctrlfp();
  return (float10)param_2;
}

