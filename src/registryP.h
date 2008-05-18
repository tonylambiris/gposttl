/*
   Original Copyright notice:

   Copyright (C) 1993 MIT and University of Pennsylvania 
   Written by Eric Brill

   THIS SOFTWARE IS PROVIDED "AS IS", AND M.I.T. MAKES NO
   REPRESENTATIONS OR WARRANTIES, EXPRESS OR IMPLIED.  By way of
   example, but not limitation, M.I.T. MAKES NO REPRESENTATIONS OR
   WARRANTIES OF MERCHANTABILITY OR FITNESS FOR ANY PARTICULAR PURPOSE
   OR THAT THE USE OF THE LICENSED SOFTWARE OR DOCUMENTATION WILL NOT
   INFRINGE ANY THIRD PARTY PATENTS, COPYRIGHTS, TRADEMARKS OR OTHER
   RIGHTS.  

 */

#ifndef _regyP_h_
#define _regyP_h_

#include "memory.h"
#include "sysdep.h"
#include "darray.h"

#include "registry.h"

/* private internal representation of the table */
typedef struct RegistryRecord_st {
  VOIDP name;
  VOIDP obj;
  struct RegistryRecord_st *next;
} RegistryRecord;

#define DEFAULT_HT_SIZE 97	/* This should be prime */

/* The Registry representation */
typedef struct Registry_st {
  unsigned int ht_size;
  RegistryRecord **hash_table;	/* First record of directory */
  Registry_CompareFunc comp_fun; /* Comparison function */
  Registry_HashFunc hash_fun;	/* Hash function */
  unsigned int record_count;	/* Number of records in the registry */
} Registry_rep;

/* private traversal routine used to implement Registry_fetch_contents() */
#ifdef __STDC__
static NORET add_to_darrays(VOIDP, VOIDP, VOIDP);
#else
static NORET add_to_darrays();
#endif /* __STDC__ */

/* used when calling add_to_darrays() within Registry_fetch_contents() */
struct darray_pair {
  Darray key_darray;
  Darray value_darray;
};

#define raise(p_to_rep) ((Registry)p_to_rep)
#define lower(obj) ((Registry_rep *)obj)
#define create() ((Registry_rep *) Memory_allocate(sizeof (Registry_rep)))
#define destroy(p_to_rep) (Memory_free((VOIDP)p_to_rep))

#endif
