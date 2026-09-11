/* Decompiled from Speed.exe @ 006811d5 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


/* Library Function - Single Match
    _copy_environ
   
   Library: Visual Studio 2003 Release */

undefined4 * __cdecl copy_environ(void)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  char *pcVar4;
  int iVar5;
  undefined4 *puVar6;
  int *unaff_EDI;
  
  iVar5 = 0;
  if (unaff_EDI != (int *)0x0) {
    iVar1 = *unaff_EDI;
    piVar2 = unaff_EDI;
    while (iVar1 != 0) {
      piVar2 = piVar2 + 1;
      iVar5 = iVar5 + 1;
      iVar1 = *piVar2;
    }
    puVar3 = _malloc(iVar5 * 4 + 4);
    if (puVar3 == (undefined4 *)0x0) {
      __amsg_exit(9);
    }
    pcVar4 = (char *)*unaff_EDI;
    puVar6 = puVar3;
    while (pcVar4 != (char *)0x0) {
      pcVar4 = __strdup(pcVar4);
      *puVar6 = pcVar4;
      puVar6 = puVar6 + 1;
      unaff_EDI = unaff_EDI + 1;
      pcVar4 = (char *)*unaff_EDI;
    }
    *puVar6 = 0;
    return puVar3;
  }
  return (undefined4 *)0x0;
}

