/* This file has been generated by the Hex-Rays decompiler.
   Copyright (c) 2007-2015 Hex-Rays <info@hex-rays.com>

   Detected compiler: GNU C++
*/

#include <defs.h>


//-------------------------------------------------------------------------
// Function declarations

// int __usercall +[FIRInstanceIDURLQueryItem queryItemWithName:value:]@<eax>(__int64 a1@<rax>, __int64 a2@<rdx>, __int64 a3@<rcx>, void *a4@<rdi>);
id __cdecl -[FIRInstanceIDURLQueryItem initWithName:value:](struct FIRInstanceIDURLQueryItem *self, SEL, id, id);
id __cdecl -[FIRInstanceIDURLQueryItem name](struct FIRInstanceIDURLQueryItem *self, SEL);
id __cdecl -[FIRInstanceIDURLQueryItem value](struct FIRInstanceIDURLQueryItem *self, SEL);
void __cdecl -[FIRInstanceIDURLQueryItem .cxx_destruct](struct FIRInstanceIDURLQueryItem *self, SEL);
int __fastcall FIRInstanceIDQueryFromQueryItems(__int64 a1);
// int __fastcall objc_autoreleaseReturnValue(_QWORD); weak
// int __fastcall objc_enumerationMutation(_QWORD); weak
// void *objc_msgSend(void *, const char *, ...); idb
// void *objc_msgSendSuper2(void *, const char *, ...); idb
// int __fastcall objc_release(_QWORD); weak
// int __fastcall objc_retain(_QWORD); weak
// int __fastcall objc_retainAutoreleasedReturnValue(_QWORD); weak
// int __fastcall objc_storeStrong(_QWORD, _QWORD); weak

//-------------------------------------------------------------------------
// Data declarations

char *selRef_class = "class"; // weak
void *classRef_FIRInstanceIDURLQueryItem = &OBJC_CLASS___FIRInstanceIDURLQueryItem; // weak
void *classRef_NSURLQueryItem = &OBJC_CLASS___NSURLQueryItem; // weak
__CFString cfstr___ = { &__CFConstantStringClassReference, 1992LL, "%@=%@", 5LL }; // weak
// extern _UNKNOWN __stack_chk_guard; weak


//----- (0000000000000000) ----------------------------------------------------
int __usercall +[FIRInstanceIDURLQueryItem queryItemWithName:value:]@<eax>(__int64 a1@<rax>, __int64 a2@<rdx>, __int64 a3@<rcx>, void *a4@<rdi>)
{
  __int64 v4; // ST00_8@1
  __int64 v5; // rbx@1
  __int64 v6; // rax@1
  __int64 v7; // r14@1
  __int64 v8; // rax@1
  __int64 v9; // rbx@1
  void *v10; // rax@1
  void *v11; // rax@1
  void *v12; // r15@1

  v4 = a1;
  v5 = a3;
  LODWORD(v6) = objc_retain(a2);
  v7 = v6;
  LODWORD(v8) = objc_retain(v5);
  v9 = v8;
  v10 = objc_msgSend(a4, selRef_class, v4);
  v11 = objc_msgSend(v10, *(&selRef_class + 1));
  v12 = objc_msgSend(v11, *(&selRef_class + 2), v7, v9);
  objc_release(v9);
  objc_release(v7);
  return objc_autoreleaseReturnValue(v12);
}
// 780: using guessed type char *selRef_class;
// 3780: using guessed type int __fastcall objc_autoreleaseReturnValue(_QWORD);
// 37A0: using guessed type int __fastcall objc_release(_QWORD);
// 37A8: using guessed type int __fastcall objc_retain(_QWORD);

//----- (0000000000000090) ----------------------------------------------------
// FIRInstanceIDURLQueryItem - (id)initWithName:(id) value:(id) 
id __cdecl -[FIRInstanceIDURLQueryItem initWithName:value:](struct FIRInstanceIDURLQueryItem *self, SEL a2, id a3, id a4)
{
  id v4; // rbx@1
  void *v5; // rax@1
  void *v6; // r14@1
  void *v7; // rax@1
  void *v8; // r15@1
  struct objc_object *v9; // rbx@1
  void *v10; // rax@2
  Class v11; // rdi@2
  void *v12; // rax@2
  Class v13; // rdi@2
  struct FIRInstanceIDURLQueryItem *v15; // [sp+8h] [bp-38h]@1
  void *v16; // [sp+10h] [bp-30h]@1

  v4 = a4;
  LODWORD(v5) = objc_retain(a3);
  v6 = v5;
  LODWORD(v7) = objc_retain(v4);
  v8 = v7;
  v15 = self;
  v16 = classRef_FIRInstanceIDURLQueryItem;
  v9 = (struct objc_object *)objc_msgSendSuper2(&v15, *(&selRef_class + 3));
  if ( v9 )
  {
    v10 = objc_msgSend(v6, *(&selRef_class + 4));
    v11 = v9[1].isa;
    v9[1].isa = v10;
    objc_release(v11);
    v12 = objc_msgSend(v8, *(&selRef_class + 4));
    v13 = v9[2].isa;
    v9[2].isa = v12;
    objc_release(v13);
  }
  objc_release(v8);
  objc_release(v6);
  return v9;
}
// 780: using guessed type char *selRef_class;
// 850: using guessed type void *classRef_FIRInstanceIDURLQueryItem;
// 37A0: using guessed type int __fastcall objc_release(_QWORD);
// 37A8: using guessed type int __fastcall objc_retain(_QWORD);

//----- (0000000000000157) ----------------------------------------------------
// FIRInstanceIDURLQueryItem - (id)name
id __cdecl -[FIRInstanceIDURLQueryItem name](struct FIRInstanceIDURLQueryItem *self, SEL a2)
{
  return (id)self->_name;
}

//----- (0000000000000168) ----------------------------------------------------
// FIRInstanceIDURLQueryItem - (id)value
id __cdecl -[FIRInstanceIDURLQueryItem value](struct FIRInstanceIDURLQueryItem *self, SEL a2)
{
  return (id)self->_value;
}

//----- (0000000000000179) ----------------------------------------------------
// FIRInstanceIDURLQueryItem - (void).cxx_destruct
void __cdecl -[FIRInstanceIDURLQueryItem .cxx_destruct](struct FIRInstanceIDURLQueryItem *self, SEL a2)
{
  objc_storeStrong(&self->_value, 0LL);
  objc_storeStrong(&self->_name, 0LL);
}
// 37B8: using guessed type int __fastcall objc_storeStrong(_QWORD, _QWORD);

//----- (00000000000001AA) ----------------------------------------------------
int __fastcall FIRInstanceIDQueryFromQueryItems(__int64 a1)
{
  void *v1; // rax@1
  void *v2; // r15@1
  void *v3; // r14@1
  void *v4; // rbx@1
  void *v5; // rax@1
  void *v6; // rax@1
  void *v7; // rax@1
  void *v8; // rax@2
  const char *v9; // rsi@2
  unsigned __int64 v10; // r15@4
  void *v11; // r14@7
  void *v12; // rax@7
  __int64 v13; // rax@7
  __int64 v14; // r13@7
  void *v15; // rax@7
  __int64 v16; // rax@7
  __int64 v17; // r14@7
  void *v18; // rax@7
  __int64 v19; // rax@7
  __int64 v20; // rbx@7
  void (__fastcall *v21)(void *); // r15@9
  void *v22; // rax@9
  void *v23; // rbx@9
  void *v24; // r12@9
  void *v25; // rax@9
  __int64 v26; // rax@9
  __int64 v27; // r14@9
  void *v28; // rdi@9
  void *v29; // rax@10
  const char *v30; // rsi@10
  unsigned __int64 v31; // r13@12
  void *v32; // rbx@15
  void *v33; // rax@15
  __int64 v34; // rax@15
  __int64 v35; // r14@15
  void *v36; // rax@15
  __int64 v37; // rax@15
  __int64 v38; // r12@15
  void *v39; // rax@15
  __int64 v40; // rax@15
  __int64 v41; // rbx@15
  void *v42; // rbx@17
  void *v43; // rax@17
  __int64 v44; // rax@17
  __int64 v45; // rax@18
  __int128 v47; // [sp+0h] [bp-200h]@2
  __int128 v48; // [sp+10h] [bp-1F0h]@2
  __int128 v49; // [sp+20h] [bp-1E0h]@2
  __int128 v50; // [sp+30h] [bp-1D0h]@2
  __int128 v51; // [sp+40h] [bp-1C0h]@10
  __int128 v52; // [sp+50h] [bp-1B0h]@10
  __int128 v53; // [sp+60h] [bp-1A0h]@10
  __int128 v54; // [sp+70h] [bp-190h]@10
  void *v55; // [sp+80h] [bp-180h]@1
  const char *v56; // [sp+88h] [bp-178h]@4
  const char *v57; // [sp+90h] [bp-170h]@4
  const char *v58; // [sp+98h] [bp-168h]@4
  const char *v59; // [sp+A0h] [bp-160h]@3
  void *v60; // [sp+A8h] [bp-158h]@10
  void *v61; // [sp+B0h] [bp-150h]@1
  void *v62; // [sp+B8h] [bp-148h]@2
  const char *v63; // [sp+C0h] [bp-140h]@4
  void *v64; // [sp+C8h] [bp-138h]@2
  char v65; // [sp+D0h] [bp-130h]@10
  char v66; // [sp+150h] [bp-B0h]@2
  __int64 v67; // [sp+1D0h] [bp-30h]@1

  v67 = *__stack_chk_guard;
  LODWORD(v1) = objc_retain(a1);
  v2 = v1;
  v3 = objc_msgSend(classRef_NSURLQueryItem, selRef_class);
  v4 = *(&classRef_NSURLQueryItem + 1);
  v5 = objc_msgSend(v2, *(&selRef_class + 5));
  v6 = objc_msgSend(v4, *(&selRef_class + 6), v5);
  LODWORD(v7) = objc_retainAutoreleasedReturnValue(v6);
  v61 = v7;
  v55 = v2;
  if ( v3 )
  {
    v50 = 0LL;
    v49 = 0LL;
    v48 = 0LL;
    v47 = 0LL;
    LODWORD(v8) = objc_retain(v2);
    v9 = *(&selRef_class + 7);
    v64 = v8;
    v62 = objc_msgSend(v8, v9, &v47, &v66, 16LL, COERCE_DOUBLE(0LL), (_QWORD)v47);
    if ( v62 )
    {
      v59 = *(const char **)v48;
      do
      {
        v63 = *(&selRef_class + 8);
        v56 = *(&selRef_class + 9);
        v57 = *(&selRef_class + 10);
        v58 = *(&selRef_class + 11);
        v10 = 0LL;
        do
        {
          if ( *(const char **)v48 != v59 )
            objc_enumerationMutation(v64);
          v11 = *(void **)(*((_QWORD *)&v47 + 1) + 8 * v10);
          v12 = objc_msgSend(*(void **)(*((_QWORD *)&v47 + 1) + 8 * v10), v63, (_QWORD)v47);
          LODWORD(v13) = objc_retainAutoreleasedReturnValue(v12);
          v14 = v13;
          v15 = objc_msgSend(v11, v56, (_QWORD)v47);
          LODWORD(v16) = objc_retainAutoreleasedReturnValue(v15);
          v17 = v16;
          v18 = objc_msgSend(classRef_NSURLQueryItem, v57, v14, v16, (_QWORD)v47);
          LODWORD(v19) = objc_retainAutoreleasedReturnValue(v18);
          v20 = v19;
          ((void (__fastcall *)(void *, const char *, __int64))objc_msgSend)(v61, v58, v19);
          objc_release(v20);
          objc_release(v17);
          objc_release(v14);
          ++v10;
        }
        while ( v10 < (unsigned __int64)v62 );
        v62 = objc_msgSend(v64, *(&selRef_class + 7), &v47, &v66, 16LL, (_QWORD)v47);
      }
      while ( v62 );
    }
    v21 = (void (__fastcall *)(void *))objc_release;
    objc_release(v64);
    v22 = objc_msgSend(*(&classRef_NSURLQueryItem + 2), *(&selRef_class + 1), (_QWORD)v47);
    v23 = objc_msgSend(v22, *(&selRef_class + 3), (_QWORD)v47);
    v24 = v61;
    objc_msgSend(v23, *(&selRef_class + 12), v61, (_QWORD)v47);
    v25 = objc_msgSend(v23, *(&selRef_class + 13), (_QWORD)v47);
    LODWORD(v26) = objc_retainAutoreleasedReturnValue(v25);
    v27 = v26;
    objc_release(v23);
    v28 = v24;
  }
  else
  {
    v54 = 0LL;
    v53 = 0LL;
    v52 = 0LL;
    v51 = 0LL;
    LODWORD(v29) = objc_retain(v2);
    v30 = *(&selRef_class + 7);
    v60 = v29;
    v63 = (const char *)objc_msgSend(v29, v30, &v51, &v65, 16LL, COERCE_DOUBLE(0LL));
    if ( v63 )
    {
      v64 = *(void **)v52;
      do
      {
        v56 = *(&selRef_class + 8);
        v57 = *(&selRef_class + 9);
        v58 = *(&selRef_class + 14);
        v59 = *(&selRef_class + 11);
        v31 = 0LL;
        do
        {
          if ( *(void **)v52 != v64 )
            objc_enumerationMutation(v60);
          v32 = *(void **)(*((_QWORD *)&v51 + 1) + 8 * v31);
          v62 = *(&classRef_NSURLQueryItem + 3);
          v33 = objc_msgSend(v32, v56);
          LODWORD(v34) = objc_retainAutoreleasedReturnValue(v33);
          v35 = v34;
          v36 = objc_msgSend(v32, v57);
          LODWORD(v37) = objc_retainAutoreleasedReturnValue(v36);
          v38 = v37;
          v39 = objc_msgSend(v62, v58, &cfstr___, v35, v37);
          LODWORD(v40) = objc_retainAutoreleasedReturnValue(v39);
          v41 = v40;
          objc_msgSend(v61, v59, v40);
          objc_release(v41);
          objc_release(v38);
          objc_release(v35);
          ++v31;
        }
        while ( v31 < (unsigned __int64)v63 );
        v63 = (const char *)objc_msgSend(v60, *(&selRef_class + 7), &v51, &v65, 16LL);
      }
      while ( v63 );
    }
    v21 = (void (__fastcall *)(void *))objc_release;
    objc_release(v60);
    v42 = v61;
    v43 = objc_msgSend(v61, *(&selRef_class + 15), &cfstr___ + 1);
    LODWORD(v44) = objc_retainAutoreleasedReturnValue(v43);
    v27 = v44;
    v28 = v42;
  }
  v21(v28);
  objc_release(v55);
  v45 = *__stack_chk_guard;
  if ( *__stack_chk_guard == v67 )
    LODWORD(v45) = objc_autoreleaseReturnValue(v27);
  return v45;
}
// 780: using guessed type char *selRef_class;
// A80: using guessed type void *classRef_NSURLQueryItem;
// AA0: using guessed type __CFString cfstr___;
// 3780: using guessed type int __fastcall objc_autoreleaseReturnValue(_QWORD);
// 3788: using guessed type int __fastcall objc_enumerationMutation(_QWORD);
// 37A0: using guessed type int __fastcall objc_release(_QWORD);
// 37A8: using guessed type int __fastcall objc_retain(_QWORD);
// 37B0: using guessed type int __fastcall objc_retainAutoreleasedReturnValue(_QWORD);

// ALL OK, 6 function(s) have been successfully decompiled
