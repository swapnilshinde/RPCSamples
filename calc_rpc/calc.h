/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _CALC_H_RPCGEN
#define _CALC_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


struct numbers {
	int n1;
	int n2;
};
typedef struct numbers numbers;

#define ADDITION 0x2ffffff
#define ADDITION_1 1

#if defined(__STDC__) || defined(__cplusplus)
#define ADD 1
extern  int * add_1(numbers *, CLIENT *);
extern  int * add_1_svc(numbers *, struct svc_req *);
extern int addition_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define ADD 1
extern  int * add_1();
extern  int * add_1_svc();
extern int addition_1_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_numbers (XDR *, numbers*);

#else /* K&R C */
extern bool_t xdr_numbers ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_CALC_H_RPCGEN */