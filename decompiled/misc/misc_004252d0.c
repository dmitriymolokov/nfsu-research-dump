/* Decompiled from Speed.exe @ 004252d0 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void FUN_004252d0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00684a08;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_006cab08;
  local_4 = 0;
  if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[2])(1);
  }
  *param_1 = &PTR_LAB_006c8f08;
  ExceptionList = local_c;
  return;
}

