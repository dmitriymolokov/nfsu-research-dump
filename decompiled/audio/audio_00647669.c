/* Decompiled from Speed.exe @ 00647669 */
/* Module: Audio */
/* Ghidra DecompileVAs */


bool FUN_00647669(int *param_1,uint *param_2,long *param_3)

{
  char *pcVar1;
  long lVar2;
  undefined1 local_15;
  uint local_14;
  char *local_8;
  
  local_15 = 9;
  local_14 = 0;
  do {
    if (*param_2 <= local_14) {
LAB_006476e3:
      lVar2 = _strtol((char *)*param_1,&local_8,10);
      *param_2 = *param_2 - ((int)local_8 - *param_1);
      if (local_14 != *param_2) {
        *(undefined1 *)(*param_1 + local_14) = local_15;
      }
      pcVar1 = (char *)*param_1;
      if (local_8 != pcVar1) {
        *param_3 = lVar2;
      }
      return local_8 != pcVar1;
    }
    if ((*(char *)(*param_1 + local_14) == '\t') || (*(char *)(*param_1 + local_14) == '\n')) {
      local_15 = *(undefined1 *)(*param_1 + local_14);
      *(undefined1 *)(*param_1 + local_14) = 0;
      goto LAB_006476e3;
    }
    local_14 = local_14 + 1;
  } while( true );
}

