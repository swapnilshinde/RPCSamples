/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "strlen.h"

bool_t
xdr_strobject (XDR *xdrs, strobject *objp)
{
	register int32_t *buf;

	int i;
	 if (!xdr_vector (xdrs, (char *)objp->text, 100,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	return TRUE;
}
