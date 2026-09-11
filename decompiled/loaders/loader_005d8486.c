/* Decompiled from Speed.exe @ 005d8486 */
/* Module: Loader */
/* Ghidra DecompileAll */


void __fastcall FUN_005d8486(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_006a0c84;
  if ((undefined4 *)param_1[8] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[8])(1);
  }
  if ((undefined4 *)param_1[9] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[9])(1);
  }
  if ((undefined4 *)param_1[10] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[10])(1);
  }
  if ((undefined4 *)param_1[0xb] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0xb])(1);
  }
  if ((undefined4 *)param_1[0xc] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0xc])(1);
  }
  _free((void *)param_1[0xe]);
  FUN_005d7803();
  return;
}

