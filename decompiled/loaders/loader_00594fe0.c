/* spd-match: close pct=87.50 flags=/O1 /c /nologo /TC method=m39 source=m39/3.9.26.3-loose-composer/va_00594FE0 */
/* R1_loose: retail ≈ push eax; call free; pop ecx; ret. __fastcall → push ecx (87.5%). */
void __cdecl _free(void *);

void __fastcall FUN_00594fe0(void *p)
{
  _free(p);
}
