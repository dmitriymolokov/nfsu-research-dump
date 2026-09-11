/* Decompiled from Speed.exe @ 00671102 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileModule */


/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _free
   
   Library: Visual Studio 2003 Release */

void __cdecl _free(void *_Memory)

{
  int iVar1;
  
  if (_Memory != (void *)0x0) {
    if (DAT_00793220 == 3) {
      __lock(4);
      iVar1 = ___sbh_find_block(_Memory);
      if (iVar1 != 0) {
        ___sbh_free_block(iVar1,_Memory);
      }
      FUN_00671155();
      if (iVar1 != 0) {
        return;
      }
    }
    HeapFree(DAT_0079321c,0,_Memory);
  }
  return;
}

